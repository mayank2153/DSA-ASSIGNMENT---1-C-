#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    string C[] = {" ","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cin>>b;
    for(int i =a;i<=b;i++){
        if(i<=9){
        cout<<C[i]<<endl;
        }
        else if(i>9 & i%2==0){
            cout<<"even"<<endl;
            
        }else {
            cout<<"odd"<<endl;        }
    }
    // Complete the code.
    return 0;
}
