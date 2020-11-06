#include<iostream>
using namespace std;

int main(){
    int T, N, sum, temp;
    cin >> T;
    while(T--){
        cin >> N;
        sum = 0;
        for(int i=0; i<N; i++){
            cin >> temp;
            sum+=temp;
        }

        if(sum%N==0) cout<<(sum/N)<<endl;
        else cout<< (sum/N + 1) << endl;
    }
    return 0;
}