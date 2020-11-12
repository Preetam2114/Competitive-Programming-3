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
	std::cout.tie(NULL);
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
        vector<pair<int,int>> bst;
        int src,dst;
        for(int i=0;i<n;i++){
            cin>>src>>dst;
            bst.push_back(make_pair(src,dst));
        }
    } 
//////////////////// System log //////////////////////
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout<<"----------------------------------------"<<endl;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(4);
    std::cout << "Execution Time :  "<<float(duration.count()/1000000)
            << " (seconds)" << endl;
    std::cout<< "Process id     :  " 
             << getpid() << endl;
    std::cout<< "Memory usage   :  "<<r_usage.ru_maxrss<<endl;
    std::cout<<"----------------------------------------"<<endl;
//////////////////////////////////////////////////////
    return 0; 
} 
