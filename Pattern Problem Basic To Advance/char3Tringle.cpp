#include<iostream>
using namespace std;

void patern1(int n){
      for(int i = 1; i <= n; i++){
         char ch = 'A';     
        for(int j = n; j >= i; j--){
            cout<<ch++<<" ";   
        }
        cout<<endl;
      }
}


int main(){
    patern1(5);
    return 0;
}