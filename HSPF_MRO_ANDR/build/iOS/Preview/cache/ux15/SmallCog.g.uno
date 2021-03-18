[Uno.Compiler.UxGenerated]
public partial class SmallCog: Cog
{
    static SmallCog()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SmallCog()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(0.8470588f, 0.7882353f, 0.945098f, 1f);
        this.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 5;
        this.SourceFileName = "Modules/CogWheelReload.ux";
        this.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/cogs/cog1_white.png"));
    }
}
