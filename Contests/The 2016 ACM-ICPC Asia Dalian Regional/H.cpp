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
    
    vector<int> k(50,-1);
    int i = 0,a;
    while(scanf("%d",&a)!=EOF){
        k[i++] = a;
    }
    i=0;
    while(i<50 && k[i]!=-1){
        int b = k[i]-1;
        int t = k[i];
        if(k[i]==1){
            cout<<0<<endl;
            i++;
            continue;
        }else if(k[i]==2){
            cout<<1<<endl;
            i++;
            continue;
        }
        if(k[i]%2 == 0){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
        i++;
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
