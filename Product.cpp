//Product
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int num=a*b;
    if(num%2==0){
        cout << "Even\n";
    } else if(num%2==1){
        cout << "Odd\n";
    }
    return 0;
}
