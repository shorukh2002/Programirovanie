using System;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = " Здравствуйте Александр Алексеевич";
            int c = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if ((i < (s.Length - 1)))
                {
                    if ((s[i] == ' ') && (s[i + 1] != ' ')) c++;
                }
            }
            Console.WriteLine("В строке  {0} слов('s).", c);
            Console.ReadKey();
        }
    }
}
