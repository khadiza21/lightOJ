#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases,problems_num;
  cin>>cases;
  for(int i=0; i<cases; i++){
      cin>>problems_num;
      if(problems_num>10){
         cout<<10<<" "<<problems_num-10<<endl;  
      }else if (problems_num<10){
         cout<<0<<" "<<problems_num<<endl;
      }else{
            cout<<10<<" "<<0<<endl;
      }
     
  }
    return 0;
}
