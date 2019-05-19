//someSums
#include <iostream>
using namespace std;

int main(void){
    int num,a,b;
    int total=0;
    cin >> num >> a >> b;

    for(int i=1;i<=num;i++){
        int temp=i;
        int dig=0;
        int sum=0;
        while(temp){
            dig=temp%10;
            sum+=dig;
            temp/=10;
        }
        if(sum>=a&&b>=sum){
            total+=i;
        }
    }
    cout << total << endl;
    return 0;
}
