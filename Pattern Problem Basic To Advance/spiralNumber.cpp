#include<iostream>
using namespace std;

void patern1(int n, int count){
      for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n)
                cout<<n / 2;
            else
                cout<<n / 2 - count; 
          }     
        cout<<endl;
      }
      count++;
}


int main(){
    patern1(10 , 1);
    return 0;
}