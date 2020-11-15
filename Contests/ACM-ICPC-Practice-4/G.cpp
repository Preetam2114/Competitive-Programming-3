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

ll dig_sum(ll n){
    ll num_sum=0;
    while(n){
        num_sum+=n%10;
        n/=10;
    }
    return num_sum;
}

ll good_num(ll num){
    ll  ans =0;
    ans += num/10;
    for(ll i=(num-num%10);i<=num;i++){
        if(dig_sum(i)%10==0){
            ans++;
            break;
        }
    }
    return ans;
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
    ll t=1;
    cin>>t;
    ll cse=0;
    while(t--){
        ll a,b;
        cin>>a>>b;
        printf("Case #%lld: %lld\n",(good_num(b)-good_num(a-1)));
        cse++;
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
