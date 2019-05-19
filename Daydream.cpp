//Daydream
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    string addString[4]={"dream","dreamer","erase","eraser"};
    bool Flag1=true;

    reverse(S.begin(),S.end());
    for(int i=0;i<4;++i){
        reverse(addString[i].begin(),addString[i].end());
    }

    for(int i=0;i<S.size();){
        bool Flag2=false;
        for(int j=0;j<4;++j){
            string T=addString[j];
            if(S.substr(i,T.size())==T){
                Flag2=true;
                i+=T.size();
            }
        }
        if(Flag2==false){
            Flag1=false;
            break;
        }
    }
    if(Flag1==true){
        cout << "YES" << endl;
    } else if(Flag1==false) {
        cout << "NO" << endl;
    }
    return 0;
}
