using System;
using System.Collections.Generic;
using System.Linq;
namespace Question2522055_LINQ
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> Compress1(int[] arr)
            {
                int saved = int.MinValue;
                var list = new List<int>();
                for (int i = 0; i < arr.Length; i++)
                {
                    var e = arr[i];
                    if (e != saved)
                    {
                        list.Add(e);
                        saved = e;
                    }
                }
                return list;
            }

            List<int> Compress2(int[] arr)
            {
                return arr.SelectMany((e, i) => i == 0 || e != arr[i - 1]
                    ? new int[] { e }
                    : Enumerable.Empty<int>())
                    .ToList();
            }

            var array = new int[] { 5, 7, 7, 7, 7, 0, 0, 3, 3, 3, 3, 1, 1, 9, 9, 9 };
            // С помощью for
            Console.WriteLine(string.Join(", ", Compress1(array)));
            // С помощью LINQ
            Console.WriteLine(string.Join(", ", Compress2(array)));
            Console.ReadKey();
        }
    }
}
