using System.Runtime.InteropServices;

namespace Lab_2
{
    internal class Program
    {
        [DllImport("sample.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern int multiply(int a,int b);
        static void Main1(string[] args)
        {
            int result = multiply(5,10);
            Console.WriteLine(result);
        }
    }
}
