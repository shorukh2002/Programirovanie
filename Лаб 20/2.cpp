#include <iostream>
using namespace std;
int main()
{
    int c, n, l, i, j;
    cout << "Vvedite dlinu massiva" << endl;
    cin >> n;
    int* mas = new int[n];
    cout << "Vvedite massiv" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    cout << "Vvedite dlinu serii" << endl;
    cin >> l;//ввод длины серии
    //поиск серий и их длин
    for (i = 0; i < n; i++)
    {
        c = 1;//первоначальное значение формируемых серий  
        for (j = i + 1; j < n; j++)
        {
            if (mas[j] == mas[i])
            {
                c++;
            }
            else { break; }
        }
        //вывод элементов, если значение найденной серии больше требуемой l 
        if (c > l)
        {
            for (j = i; j < i + c; j++)
            {
                cout << " " << mas[j] << " ";
            }
            i = i + c;
            //выход из цикла для обнуления последнего эл-та массива(например массив 1 2 2 1 , l=1) 
            if (i == n - 1)
                break;
        }

        if (c == l)
        {
            i = i + l - 1;
            cout << " 0 ";
        }
        if ((c != l) && (c < l))
        {
            cout << " " << mas[i] << " ";
        }

    }
    if (i == n - 1)
    {
        mas[i] = 0;
        cout << " " << mas[i] << " ";
    }
    system("PAUSE");
    return 0;
}
