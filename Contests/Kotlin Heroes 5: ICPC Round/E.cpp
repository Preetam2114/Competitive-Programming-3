#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long T, n, b,k;
    cin >> T;
    while(T--){
        
        cin >> n >> k;
        string num = "";
        cin>>num;
        // long long f1=0,f0=0;
        // while(i<n){
        //     if(num[i]=='1' && first1 < i){
        //         first1 = i;
        //         for(int j=i+1;j<n;j++){
        //             if(num[j]=='0'){
        //                 if(j-i<k){
        //                     num[i]='0';
        //                     num[j]='1';
        //                     k-=(j-i);
        //                 }else{

        //                 }
        //             }
        //         }
        //     }
        // }
        //i is f1 in kotlin
        long long f1=0,f0=0;
        while(f1<n&&num[f1]=='0'){
            f1++;
        }
        for(long long i=f1+1;i<n;i++){
            if(k<=0) break;
            if(num[i]=='0'){
                if(i-f1<k){
                    num[f1]='0';
                    num[i]='1';
                    k -=(i-f1);
                    f1++;
                }else{
                    if(num[i-k]=='1'){
                        num[i-k] = '0';
                        num[i] = '1';
                        break;
                    }
                }
            }
        }
        cout<<num<<endl;

        // 10000000001110000
        // ans = 00000000000001111
        // 11111110
        // 1000110
        // ans 0001101

        // for(int i=0; i<n; i++){
        //     if(num[i] == )            
        // }
        // while(k>0){
        //     if(f0-f1 <=k){
        //         num[f1]='0';
        //         num[f0]='1';
        //         k-=(f0-f1);
        //         f1=f1+1;
        //         int i;
        //         for(i=f0;i<n;i++){
        //             if(num[i]=='0'){
        //                 f0=i;
        //                 break;
        //             }
        //         }
        //         if(i==n)
        //             break;
        //     }
        //     else{
        //         if(num[f0-k])
        //     }
        // }
    }
}