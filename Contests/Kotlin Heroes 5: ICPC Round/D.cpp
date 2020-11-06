#include<iostream>
using namespace std;

int main(){
    int T, N, a, b;
    cin >> T;
    while(T--){
        cin >> N >> a >> b;
        string res = "", answer = "";
        for(int i=0; i<b; i++){
            res+= i+'a';
        }

        for(int i=0; i<a-b; i++){
            res+= res[res.size() - 1];
        }
        
        for(int i=0; i<N/a; i++){
            answer+=res;
        }

        for(int i=0; i<N%a; i++){
            answer+=res[i];
        }

        cout << answer << endl;
    }
}
/*
abcccab
aaaaaa
aaaaaa
ababa
10 5 3
26 26 26
12 12 3
abcccabccc
abcdefghijklmnopqrstuvwxyz
abcccccccccc
*/