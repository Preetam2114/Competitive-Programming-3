/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 119 - Greedy Gift Givers
 * Created on  : Friday, 23rd October 2020 8:54:46 pm
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
#define printmp(mp) for(auto a:mp) cout<<a.F<<" "<<a.S<<endl; cout<<"\n";
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
	ll t=1,n;
	// cin >> t;
	while(cin>>n){
    map<string, int> balance;
    vector<string> names;
    rep(i,0,n-1){
        string name;
        cin >> name;
        balance[name] = 0;
        names.push_back(name);
    }
    rep(i,0,n-1){
        string name;
        cin >> name;
        int spentMoney, nPeople;
        cin >> spentMoney >> nPeople;
        if (nPeople == 0)
            continue;
        int gift = spentMoney / nPeople;
        balance[name] -= gift * nPeople;
        rep(i,0,nPeople-1){
            cin >> name;
            balance[name] += gift;
        }
    }
    if (t++ > 1)
      cout << endl;
    for (size_t i = 0; i < n; ++i)
        cout << names[i] 
              << " "
              << balance[names[i]]
              << endl;
	}
	return 0;
}