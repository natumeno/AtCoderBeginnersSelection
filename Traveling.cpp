//Traveling
#include <iostream>
using namespace std;

int main() {
    bool Flag=true;
    int N;
    cin >> N;
    int T[N],X[N],Y[N];
    T[0] = X[0] = Y[0] = 0;
    for (int i = 1; i <= N; ++i) {
        cin >> T[i] >> X[i] >> Y[i];
    }
    for (int i = 1; i <= N; ++i) {
        int dt = T[i] - T[i - 1];
        int d = dt - (abs(X[i]-X[i-1])+abs(Y[i]-Y[i-1]));
        if (d < 0 || d % 2 != 0) {
            Flag=false;
            break;
        }
    }
    if(Flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
