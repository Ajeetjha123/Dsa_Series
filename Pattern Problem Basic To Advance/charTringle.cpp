#include<iostream>
using namespace std;

void patern1(int n){
      char ch = 'A';
      for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<ch<<" ";   
        }
        ch++;
        cout<<endl;
      }
}


int main(){
    patern1(5);
    return 0;
}