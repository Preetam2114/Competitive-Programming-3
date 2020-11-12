#include <bits/stdc++.h> 
using namespace std; 

vector<bool> dp(1000000000001, true);
// program for finding no. of divisors 
long long divCount(int n) 
{ 
    // sieve method for prime calculation 
    
    // memset(hash, true, sizeof(hash)); 
    
  
    // Traversing through all prime numbers 
    long long total = 1; 
    for (long long p = 2; p <= n; p++) { 
        if (dp[p]) { 
  
            // calculate number of divisor 
            // with formula total div =  
            // (p1+1) * (p2+1) *.....* (pn+1) 
            // where n = (a1^p1)*(a2^p2)....  
            // *(an^pn) ai being prime divisor 
            // for n and pi are their respective  
            // power in factorization 
            long long count = 0; 
            if (n % p == 0) { 
                while (n % p == 0) { 
                    n = n / p; 
                    count++; 
                } 
                total = total * (count + 1); 
            } 
        } 
    } 
    return total; 
} 
  
void solve(){
    long long n, temp;
    cin >> n;
    vector<pair<long long, bool> > v(n, {-1, false});
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        temp = divCount(v[i].first);
        if(temp != 2)
            v[i].second = dp[temp];

    }



    sort(v.begin(), v.end());
    bool flag = false;
    for(int i=0; i<n; i++){
        if(v[i].second){
            cout << i+1 << " ";
            flag =true;
        }
    }

    if(!flag){
        cout << "No supporter found.";
    }

    cout << endl;

}
int main(){
    long long n = 1000000000000;
    for (long long p = 2; p * p < n; p++) 
        if (dp[p] == true) 
            for (long long i = p * 2; i < n; i += p) 
                dp[i] = false; 

    return 0;
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}