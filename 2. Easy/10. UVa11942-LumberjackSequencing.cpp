/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 10. UVa11942-LumberjackSequencing
 * Created on  : Thursday, 22nd October 2020 7:22:29 pm
 */


#include <bits/stdc++.h>
#define F first
#define S second 
#define PB push_back 
#define MP make_pair
#define rep(i,a,b) for(int i = a; i <= b; i++)
#define inputarr(arr,n) for(int i = 0; i < n; i++) cin>>arr[i];
#define inputmat(arr,a,b) for(int i=0; i < a; i++)for(int j=0; j < b; j++)cin>>arr[i][j];
#define print(arr) for(auto a:arr) cout<<a<<" "; cout<<"\n";
#define endl '\n'

template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}

constexpr unsigned int shash(const char *s, int off = 0) {                        
    return !s[off] ? 5381 : (shash(s, off+1)*33) ^ s[off];                           
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
	cout<<"Lumberjacks:"<<endl;
	while(t--){
		vector<int> v(10);
		inputarr(v,10);
		if(is_sorted(v.begin(), v.end()))
			cout<<"Ordered"<<endl;
		else if(is_sorted(v.begin(), v.end(),greater<int>()))
			cout<<"Ordered"<<endl;
		else{
			cout<<"Unordered"<<endl;
		}
	}	
	return 0;
}