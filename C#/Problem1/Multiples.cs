using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Linq;
using System.Reflection;
using System.IO;

class program
{
    public static void Main()
    {
      List<double> multiples = new List<double>();
      long x=0;
      long sum=0;

      StreamWriter sw = new StreamWriter("/Users/edilsonsuame/Documents/Perl_Cpp_Ruby/Csharp/div_3_5.txt");

      for(x=1;x<1000;x++)
        {
            if(x%3==0 || x%5==0)
              {
                  //file.WriteLine(x);
                  sw.WriteLine(x);
                  multiples.Add(x);
                  sum+=x;
              }
        }
        sw.Close();
        Console.WriteLine("Number of Multiples in Range Is: " + multiples.Count);
        Console.WriteLine("Lines written to file successfully.");

        Console.WriteLine("The sum of all divisors of 3 or 5 until 1000 is {0}",sum);

        }
}
