#include<iostream>
using namespace std;

void patern1(int n){
      for(int i = 1; i <= n; i++){
           for(int k = n; k >= i + 1; k--){
                cout<<" ";
           } 
        for(int j = 1; j <= 2*i - 1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
}


int main(){
    patern1(5);
    return 0;
}