#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, totalProbs, num1, num2;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> totalProbs;

        if (totalProbs > 10)
        {
            cout << totalProbs - 10 << " " << 10 << endl;
        }
        else if (totalProbs < 10)
        {
            cout << totalProbs << " " << 0 << endl;
        }
        else
        {
            cout << 10 << " " << 0 << endl;
        }
    }

    return 0;
}