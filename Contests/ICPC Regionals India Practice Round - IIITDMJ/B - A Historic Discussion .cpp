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
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i] = i+1;
        }
        cout<<ceil(log2(n))<<endl;
        vector<int> num(n);
        for(int i=0;i<ceil(log2(n));i++){
            for(auto a:v){
                cout<<a<<" ";
            }
            cout<<endl;
            for(int i=0,j=0;i<n;i+=2,j++){
                num[j]=v[i];
            }
            for(int i=1,j=n/2;i<n;i+=2,j++){
                num[j]=v[i];
            }
            v.clear();
            copy(num.begin(),num.end(),back_inserter(v));
        }
        for(auto a:v){
            cout<<a<<" ";
        }
        cout<<endl;
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
