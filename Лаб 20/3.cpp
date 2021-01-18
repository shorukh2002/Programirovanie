#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main(void)
{
    unsigned K, N;
    vector<int> vec;
    vector<vector<int>> batches;
    batches.push_back(vec);

    cout << "Size of vector? ";
    cin >> N;
    cout << "Batch number? ";
    cin >> K;

    cout << endl << "Vector: ";
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        vec.push_back(rand() % 11);
        cout << vec[i] << "  ";
    }
    cout << endl;

    vector<int> tmp;
    for (int i = 0, j = -1; i < vec.size(); i++)
    {
        if (i == 0 || j == -1)
        {
            tmp.push_back(vec[i]);
            j++;
        }
        else if (tmp[j] == vec[i])
        {
            tmp.push_back(vec[i]);
            j++;
        }
        else
        {
            batches.push_back(tmp);
            tmp.clear();
            j = -1;
            i--;
        }

        if (i == vec.size() - 1)
            batches.push_back(tmp);
    }

    if (K < batches.size())
    {
        vec.clear();
        vector<int> tmp = batches[batches.size() - 1];
        batches[batches.size() - 1] = batches[K];
        batches[K] = tmp;
        for (int i = 0; i < batches.size(); i++)
        {
            for (int j = 0; j < batches[i].size(); j++)
                vec.push_back(batches[i][j]);
        }
    }

    cout << endl << "Result vector: ";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << "  ";
    cout << endl;

    system("pause");
}
