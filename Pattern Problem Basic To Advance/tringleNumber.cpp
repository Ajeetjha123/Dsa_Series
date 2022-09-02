#include<iostream>
using namespace std;

void patern1(int n, int count){
      for(int i = 1; i <= n; i++){
        count = 1;
        for(int j = 1; j <= i; j++){
            cout<<count++;
        }
        cout<<endl;
      }
}


int main(){
    patern1(5, 1);
    return 0;
}