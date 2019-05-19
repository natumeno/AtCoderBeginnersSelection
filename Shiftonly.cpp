//Shiftonly
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int sum=0;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int j=0;j<N;j++){
        if(A[j]%2==1){
            break;
        }
        A[j]/=2;
        if(j==N-1){
            j=0;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
