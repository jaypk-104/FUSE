namespace Mono.test_543
{
    // Compiler options: -t:library
    
    public class ExternClass
    {
        public bool this [string s, params string[] items]
        {
            set { }
        }
    }
}
