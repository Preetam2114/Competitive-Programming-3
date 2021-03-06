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
	    freopen("inp2.txt","r",stdin);
	    freopen("out.txt","w",stdout);
    #endif
    struct rusage r_usage;
    int ret = getrusage(RUSAGE_SELF,&r_usage);
///////////////////// CODE HERE ///////////////////////
    ll t=1;
    // cin>>t;
    int n1,d1;
    while(scanf("%d %d\n", &n1, &d1)!=EOF){
        // cout << "n1 " << n1 << endl; 
        vector<int> v1(n1);

        for(int i=0;i<n1;i++){
            // cin>>v1[i];
            scanf("%d",&v1[i]);
            // cout << "Hello" << v1[i] << endl;
        }
        double area = 0;
        for(int i=0; i<n1; i++){

            area += d1*d1*sin(v1[i]*3.14159/360)*cos(v1[i]*3.14159/360);
        }

        // cout << area << endl; 
        // cout.precision(3);
        // cout<<area<<endl;
        printf("%.3lf\n", area);
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
