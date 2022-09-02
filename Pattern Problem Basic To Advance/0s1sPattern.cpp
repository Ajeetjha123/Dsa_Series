#include<iostream>
using namespace std;

void patern1(int n){
      for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i % 2 == 1){
                if(j % 2 == 1)
                  cout<<"1";
                else
                  cout<<"0";
            }
            else{
                if(j % 2 == 1)
                  cout<<"0";
                else
                  cout<<"1";
            }
        }
        cout<<endl;
      }
}


int main(){
    patern1(5);
    return 0;
}