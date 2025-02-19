using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2
{
    internal class Class1
    {
        static void Main(string[] args)
        {
            ProcessStartInfo psi = new ProcessStartInfo
            {
                FileName="sample.exe",
                RedirectStandardOutput = true,
                UseShellExecute=false,
                CreateNoWindow = true,
            };

            Process process = new Process { StartInfo=psi };
            process.Start();

            string output = process.StandardOutput.ReadToEnd();
            process.WaitForExit();
            Console.WriteLine(output);
        }
    }
}
