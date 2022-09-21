#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    //string c = a+b;
    cin>>a;
    cin>>b;
    printf("%d %d\n",a.size(),b.size());
    cout<<a+b<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b;
    return 0;
}
