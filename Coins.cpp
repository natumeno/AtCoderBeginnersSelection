//Coins
#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    int X;
    int sum;
    int count=0;
    cin >> a >> b >> c >> X;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            for(int m=0;m<=c;m++){
                sum=500*i+100*j+50*m;
                if(X==sum){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
