
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "������� ����� n: ";
    cin >> n;
    for (int i = 1; i < n + 1; i += 2)
    {
        cout << i << "  ";
    }cout << endl;
}

