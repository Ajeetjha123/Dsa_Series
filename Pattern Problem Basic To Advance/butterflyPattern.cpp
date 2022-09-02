#include<iostream>
using namespace std;

void patern1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        for(int k = 2*(n - i); k >=1; k--){
            cout<<" ";
        }
        for(int l = 1; l <= i; l++){
            cout<<"*";
        }
        cout<<endl;
      }
     for(int i = 1; i < n; i++){
        for(int j = n; j > i; j--){
            cout<<"*";
        }
        for(int k = 1; k <= 2*i; k++){
            cout<<" ";
        }
        for(int l = n; l > i; l--){
            cout<<"*";
        }
        cout<<endl;
      }
}


int main(){
    patern1(5);
    return 0;
}