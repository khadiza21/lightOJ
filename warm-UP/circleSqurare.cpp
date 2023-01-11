#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {

        double radius=0,shadow=0,pi = 2 * acos (0.0) ;
        cin>>radius;
        shadow = (radius*4*radius) - (radius*pi*radius);
        cout<< "Case "<< i << ": "<<fixed<<setprecision(2)<< shadow<<endl;
        
    }
    return 0;
}