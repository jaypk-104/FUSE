[Uno.Compiler.UxGenerated]
public partial class Resources: Fuse.NodeGroup
{
    static Resources()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Resources()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = float4(0f, 0f, 0f, 0.8666667f);
        var temp1 = float4(0f, 0f, 0f, 0.5333334f);
        var temp2 = float4(0.4745098f, 0.5254902f, 0.7960784f, 0.5333334f);
        var temp3 = float4(0.4745098f, 0.5254902f, 0.7960784f, 1f);
        var temp4 = float4(0.9098039f, 0.9176471f, 0.9647059f, 1f);
        var temp5 = float4(0.772549f, 0.7921569f, 0.9137255f, 1f);
        var temp6 = float4(1f, 0.8196079f, 0.5019608f, 1f);
        var temp7 = float4(0.772549f, 0.7921569f, 0.9137255f, 1f);
        var temp8 = new global::Uno.UX.Resource("ColorTextPrime", temp);
        var temp9 = new global::Uno.UX.Resource("ColorTextSecond", temp1);
        var temp10 = new global::Uno.UX.Resource("ColorDark", temp2);
        var temp11 = new global::Uno.UX.Resource("ColorMid", temp3);
        var temp12 = new global::Uno.UX.Resource("ColorWhite", temp4);
        var temp13 = new global::Uno.UX.Resource("ColorHigh", temp5);
        var temp14 = new global::Uno.UX.Resource("ColorAccent", temp6);
        var temp15 = new global::Uno.UX.Resource("ColorWhiteHalf", temp7);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Modules/CalendarView/Resources.ux";
        this.Resources.Add(temp8);
        this.Resources.Add(temp9);
        this.Resources.Add(temp10);
        this.Resources.Add(temp11);
        this.Resources.Add(temp12);
        this.Resources.Add(temp13);
        this.Resources.Add(temp14);
        this.Resources.Add(temp15);
    }
}
