/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 11. UVa 12015 - Google is Feeling Lucky 
 * Created on  : Thursday, 22nd October 2020 7:39:32 pm
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

template <class Container>
void split(const std::string& str, Container& cont){
    std::istringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>(),
         std::back_inserter(cont));
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
	int n=t;
	while(t--){
		string s;
		int val,best=-1;
		map<string,int> mp;
		vector<string> web;
		for(int i = 0;i < 10;++i){
            cin >> s >> val;
            if(val > best){
                best = val;
                web.clear();
                web.push_back(s);
            }
			else if(val == best) 
				web.push_back(s);
        }
		cout << "Case #" << n-t << ":\n";
		for(auto a:web)
			cout<<a<<endl;
	}
	return 0;
}