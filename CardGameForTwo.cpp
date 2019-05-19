//CardGameForTwo
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N; //N枚のカード
    cin >> N;
    int a[N]; //カードに書かれてる数
    int AliceSum=0; //アリスの合計値
    int BobSum=0; //ボブの合計値
    int Dif; //アリスとボブの差
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    //ソート
    sort(a,a+N,greater<int>());

    for(int i=0;i<N;i++){
        if(i%2==0){
            AliceSum+=a[i];
        }else if(i%2==1){
            BobSum+=a[i];
        }
    }
    Dif=AliceSum-BobSum;
    cout << Dif << endl;
    return 0;
}
