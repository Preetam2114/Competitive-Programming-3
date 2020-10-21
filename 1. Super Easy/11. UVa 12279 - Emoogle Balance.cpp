/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 11. UVa 12279 - Emoogle Balance
 * Created on  : Wednesday, 21st October 2020 11:03:38 am
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
	int x,n,y,a=1;
    while(scanf("%d",&x),x){
        int c_0 = 0 ,c_else = 0;
        while(x--){
            scanf("%d",&y);
            if(y==0)c_0++;
            else c_else++;
        }
        printf("Case %d: %d\n",a++,(c_else-c_0));
    }
	return 0;
}