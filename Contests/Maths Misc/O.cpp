/////////////////////// SET-UP ///////////////////////
#include<bits/stdc++.h>
#include <chrono> 
#include <unistd.h> 
#include <sys/resource.h>
#include <errno.h>
#include <unistd.h>

using namespace std;
using namespace std::chrono;

typedef long long ll;
typedef long double ld;
typedef long double f80;
typedef pair<int, int> pii;
const ll mod = 1e9;
auto start = high_resolution_clock::now();  
///////////////////// CODE HERE ///////////////////////

// unordered_map<pair<int, int>, int> dp;

// int dp[1001][1001];
vector<vector<int>>dp (10000, vector<int>(10000, -1));

int fn(int r, int c){
    if(r==1 and c==1){
        return 0;
    }


    if(dp[r][c] != -1){
        return dp[r][c];
    }


    int val;
    if(r>c){
        if(r%2 == 1){
           val = fn(r/2, c) + fn(r/2 +1, c) + 1; 
        } else {
            val = 2*fn(r/2, c)+1;
        }
    } else {
       if(c%2 == 1){
           val = fn(c/2, r) + fn(c/2 +1, r) + 1; 
        } else {
            val = 2*fn(c/2, r)+1; 
        }
    }

    dp[r][c] = dp[c][r] = val;

    return val;
}
//////////////////// ONLINE_JUDGE ////////////////////
int main(){ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
    #endif
    struct rusage r_usage;
    int ret = getrusage(RUSAGE_SELF,&r_usage);
///////////////////// CODE HERE ///////////////////////
    int r, c;
    // cout << dp[2][2] << endl;
    // memset(dp, sizeof(dp), -1);
    while(scanf("%d %d", &r, &c) != EOF){
        printf("%d\n",fn(r, c));
    }
//////////////////// System log //////////////////////
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"----------------------------------------"<<endl;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(4);
    cout << "Execution Time :  "<<float(duration.count()/1000000)
            << " (seconds)" << endl;
    cout<< "Process id     :  " 
             << getpid() << endl;
    cout<< "Memory usage   :  "<<r_usage.ru_maxrss<<endl;
    cout<<"----------------------------------------"<<endl;
//////////////////////////////////////////////////////
    return 0; 
} 
