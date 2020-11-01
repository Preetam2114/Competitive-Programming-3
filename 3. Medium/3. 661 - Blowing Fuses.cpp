/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 3. 661 - Blowing Fuses
 * Created on  : Sunday, 1st November 2020 9:22:07 am
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
	int n,m,c;
	while(cin>>n>>m>>c){
		if(c==0 && m==0 && n==0)
      break;
    int maxpow = 0,total =0;
    bool blown = false;
    vector<int> val(n);
    vector<int> stat(n);
    rep(i,0,n-1){
      cin>>val[i];
      stat[i]=0;
    }
    rep(i,0,m-1){
      cin>>n;
			if (!stat[n - 1]) {
				total += val[n - 1];
				stat[n - 1] = !stat[n - 1];
			}
			else {
				total -= val[n - 1];
				stat[n - 1] = !stat[n - 1];
			}
			if (total > c) blown = true;
			else {
				if (total > maxpow) maxpow = total;
			}
    }
    if (blown) {
			cout << "Sequence " << t << endl << "Fuse was blown." << endl;
		}
		else {
			cout << "Sequence " << t << endl << "Fuse was not blown."<<endl<< "Maximal power consumption was " << maxpow << " amperes." << endl;
		}
    cout<<endl;
    t++;
	}
	return 0;
}