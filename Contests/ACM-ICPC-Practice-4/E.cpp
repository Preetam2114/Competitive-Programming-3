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
    ll cse = 1;
    while(t--){
        double x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        double centroid_x=(x1+x2+x3)/3;
        double centroid_y=(y1+y2+y3)/3;

        double r_circle = sqrt(pow((x1-centroid_x),2)+pow((y1-centroid_y),2));
        double distance = sqrt(pow((x4-centroid_x),2)+pow((y4-centroid_y),2));
        cout<<"Case #"<<cse<<":";
        if(distance>r_circle){
            cout<<" safe"<<endl;
        }
        else{
            cout<<" Danger"<<endl;
        }
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
