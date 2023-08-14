#include <bits/stdc++.h>
using namespace std;
int main()

{
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {

        int size=0, dust = 0;
        cin>>size;
        int studentNums[size];
        for (int j = 1; j <= size; j++) {
            cin >> studentNums[j];
            if(studentNums[j]>0){
               dust += studentNums[j]; 
            }
            
        }
        cout<< "Case "<< i << ": "<< dust<<endl;
        
    }
    return 0;
}