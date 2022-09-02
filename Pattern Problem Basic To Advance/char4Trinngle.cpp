#include<iostream>
using namespace std;

void patern1(int n){
      for(int i = 1; i <= n; i++){
        for(int k = n - 1; k>= i; k--){
            cout<<" ";
        }
         char ch = 'A';     
        for(int j = 1; j <= 2*i -1; j++){
            cout<<ch++<<" ";   
        }
        cout<<endl;
      }
}


int main(){
    patern1(4);
    return 0;
}