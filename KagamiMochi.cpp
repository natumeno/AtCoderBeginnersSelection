//Kagami Mochi
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int d[N];
    int num=0;
    int sum=0;

    for(int i=0;i<N;i++){
        cin >> d[i];
    }

    sort(d,d+N);

    for(int i=0;i<N;i++){
        if(num!=d[i]){
            sum++;
            num=d[i];
        }
    }

    cout << sum << endl;
    return 0;
}
