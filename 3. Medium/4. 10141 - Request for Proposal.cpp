/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 4. 10141 - Request for Proposal
 * Created on  : Monday, 2nd November 2020 7:41:41 pm
 */


#include <bits/stdc++.h>

using namespace std;

#ifndef preetam
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#endif

#define F first
#define S second 
#define pb push_back 
#define mp make_pair
#define rep(i,a,b) for(int i = a; i <= b; i++)
#define inputarr(arr,n) for(int i = 0; i < n; i++) cin>>arr[i];
#define inputmat(arr,a,b) for(int i=0; i < a; i++)for(int j=0; j < b; j++)cin>>arr[i][j];
#define print(arr) for(auto a:arr) cout<<a<<" "; cout<<"\n";
#define all(ar) ar.begin(), ar.end()
#define foreach(it, ar) for (auto it = ar.begin(); it != ar.end(); it++)
#define fil(ar, val) memset(ar, val, sizeof(ar))
#define endl '\n'

#ifndef preetam
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

constexpr unsigned int shash(const char *s, int off = 0){                        
    return !s[off] ? 5381 : (shash(s, off+1)*33) ^ s[off];                           
}

typedef long long ll;
typedef long double ld;
typedef long double f80;
typedef pair<int, int> pii;
const ll mod = 1e9;
#endif

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t=1;
	// cin >> t;
  int n, p; int cnt = 0;
	while(cin >> n>>p,n>0){
    cnt++;
		string input,out, name; int r;double price, fin_price = 1e20; int max = -1;
		rep(i,0,n-1){
			cin.ignore();
			getline(cin, input);
		}

		while(p--) {
			getline(cin,name);
			cin >> price >> r;
			if (r > max) {
				max = r ;
				out = name;
				fin_price= price;
			}
			else if (r  == max && price <fin_price ) {
				max = r ;
				out = name;
				fin_price = price;
			}
			cin.ignore();
			rep(j,0,r-1){
				getline(cin, input);
			}

		}

		if (cnt > 1) cout<<"\n";
		cout<<"RFP #"<<cnt<<"\n";
		cout << out << "\n";
	}
	return 0;
}