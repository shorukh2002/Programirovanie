using System;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = " ������������ ��������� ����������";
            int c = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if ((i < (s.Length - 1)))
                {
                    if ((s[i] == ' ') && (s[i + 1] != ' ')) c++;
                }
            }
            Console.WriteLine("� ������  {0} ����('s).", c);
            Console.ReadKey();
        }
    }
}
