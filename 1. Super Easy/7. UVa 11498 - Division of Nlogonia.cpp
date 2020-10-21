/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 7. UVa 11498 - Division of Nlogonia
 * Created on  : Tuesday, 20th October 2020 12:53:38 pm
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
	// cin >> t;
	while(t){
        int k;
        cin >> k;
        if(k==0) return 0;
        int  n,m;
        cin >> n >> m;
        for (int i = 0; i < k; i++) {
            int x,y;
            cin >> x >> y;
            if(x > n && y > m)
                cout << "NE" << endl;
            else if(x < n && y > m)
                cout << "NO" << endl;
            else if(x > n && y < m)
                cout << "SE" << endl;
            else if(x < n && y < m)
                cout << "SO" << endl;
            else
                cout << "divisa" << endl;
        }
	}
	return 0;
}