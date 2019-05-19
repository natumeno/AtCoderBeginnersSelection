//Otoshidama
#include <iostream>
using namespace std;

int main(void){
    int N,Y;
    int Flag=0;
    cin >> N >> Y;
    for(int i=0;i<=N;i++){
        int x,y,z;
        x=i;
        for(int j=0;j<=N-x;j++){
            y=j;
            z=N-x-y;
            if(10000*x+5000*y+1000*z==Y){
                cout << x << " " << y << " " << z << endl;
                Flag=1;
                break;
            }
        }
        if(Flag==1){
            break;
        }
    }
    if(Flag==0){
        cout << "-1 -1 -1" << endl;
    }
    return 0;
}
