﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Uno.Build.Targets.Generators;
using Uno.Compiler.API;
using Uno.Compiler.API.Backends;
using Uno.Compiler.Backends.CPlusPlus;
using Uno.Compiler.Graphics.OpenGL;
using Uno.Compiler.Foreign;
using Uno.IO;

namespace Uno.Build.Targets
{
    public class AndroidBuild : BuildTarget
    {
        public override string Identifier => "android";
        public override string ProjectGroup => "Android";
        public override string Description => "C++/JNI/GLES2 code and APK. Runs on device.";

        public override Backend CreateBackend()
        {
            return new CppBackend(new GLBackend(), new ForeignExtension());
        }

        public override void Configure(ICompiler compiler)
        {
            new AndroidGenerator(
                    compiler.Environment,
                    compiler.Data.Extensions)
                .Configure();
        }

        public override void DeleteOutdated(Disk disk, IEnvironment env)
        {
            // Remove previously built AAR, APK and Bundle to avoid caching issues.
            foreach (var output in new[] {
                    env.GetString("Outputs.AAR"),
                    env.GetString("Outputs.APK"),
                    env.GetString("Outputs.Bundle")
                })
            {
                if (output.IsValidPath())
                    disk.DeleteFile(env.Combine(output.UnixToNative()));
            }

            // Delete old Java files so Gradle won't try to build them.
            disk.DeleteOutdatedFiles(env.GetOutputPath("Java.SourceDirectory"));

            // Dump Proguard file after deleting outdated Java files.
            var file = env.Combine("app", "proguard-rules.pro");
            var lines = new List<string> {"## This file was generated by Uno compiler."};
            var src = env.GetOutputPath("Java.SourceDirectory");

            if (Directory.Exists(src))
                VisitSourceDirectoryRecursive(src, src, lines);

            // End with newline.
            lines.Add("");

            using (var f = disk.CreateBufferedText(file))
                f.WriteLine(string.Join("\n", lines));
        }

        void VisitSourceDirectoryRecursive(string dir, string root, List<string> lines)
        {
            foreach (var f in Directory.EnumerateDirectories(dir))
                VisitSourceDirectoryRecursive(f, root, lines);

            if (Directory.EnumerateFiles(dir).Any())
                lines.Add("-keep class " + (dir.Length > root.Length
                                    ? (dir + Path.DirectorySeparatorChar)
                                          .Substring(root.Length + 1)
                                          .Replace(Path.DirectorySeparatorChar, '.')
                                    : "") +
                            "** { *; }");
        }
    }
}
