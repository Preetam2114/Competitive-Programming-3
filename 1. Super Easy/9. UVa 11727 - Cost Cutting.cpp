/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 9. UVa 11727 - Cost Cutting
 * Created on  : Wednesday, 21st October 2020 10:29:43 am
 */


#include <bits/stdc++.h>
#define F first
#define S second 
#define PB push_back 
#define MP make_pair
#define loop(i,a,b) for(int i = a; i <= b; i++)
#define print(arr) for(auto a:arr) cout<<a<<" "; cout<<"\n";
#define endl '\n'

template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}

using namespace std;
typedef long long ll;
const ll mod = 1e9;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t=1;
	cin >> t;
	int n=t;
	while(t--){
		int salary[3];
		loop(i,0,3-1){
			cin>>salary[i];
		}
		int mini = *min_element(salary,salary+3);
		int maxx = *max_element(salary,salary+3);
		loop(i,0,3-1){
			if(salary[i]!=maxx && salary[i]!=mini)
				cout<<"Case "<<n-t<<": "<<salary[i]<<endl;
		}
	}
	return 0;
}