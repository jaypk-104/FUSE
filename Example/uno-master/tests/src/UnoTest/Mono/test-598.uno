namespace Mono.test_598
{
    public struct V
    {
        public int this [int i] {
            set {
            }
        }
        
        public int x;
    }
    
    class Test
    {
        V m_value;
    
        public V v { get { return m_value; } }
    
        public Test ()
        {
            m_value = new V ();
            m_value [0] = 1;
        }
    
        [Uno.Testing.Test] public static void test_598() { Main(); }
        public static void Main()
        {
        }
    }
}
