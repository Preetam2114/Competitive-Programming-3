/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : UVa 11559 - Event Planning
 * Created on  : Thursday, 22nd October 2020 10:24:53 am
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
	ll N, B, H, W,p, a;
	while(scanf("%lld %lld %lld %lld", &N, &B, &H, &W) == 4){
		ll cost=0;
        rep(i,0,H-1){
            scanf("%lld", &p);
            rep(j,0,W-1){
                scanf("%lld", &a);
                if(a >= N && N * p <= B)
                    if(cost == 0 || N * p < cost)
                        cost = N * p;
            }
        }
        printf(cost == 0? "stay home\n" : "%lld\n", cost);
	}
	return 0;
}