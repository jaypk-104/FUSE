[Uno.Compiler.UxGenerated]
public partial class BigCog: Cog
{
    static BigCog()
    {
    }
    [global::Uno.UX.UXConstructor]
    public BigCog()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(0.9058824f, 0.8823529f, 0.945098f, 1f);
        this.Width = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 6;
        this.SourceFileName = "Modules/CogWheelReload.ux";
        this.File = new global::Uno.UX.BundleFileSource(import("../../Assets/cogs/cog2_white.png"));
    }
}
