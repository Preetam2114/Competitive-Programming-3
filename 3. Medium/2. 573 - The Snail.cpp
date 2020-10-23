/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 2. 573 - The Snail
 * Created on  : Friday, 23rd October 2020 10:12:05 pm
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
	// cin >> t;
	while(t){
      double H, U, D, F;
      cin>>H>>U>>D>>F;
      if(H==0.0) 
        break;
      double dis = 0.0;
      double rate = U*(F/100.0);
      int i;
      int flag = 1;
      for(i=1; ; i++) {
          dis += U;
          if(dis>H) break;
          U -= rate;
          if(U<=0.0) U = 0.0;
          dis -= D;
          if(dis<0.0) {
              flag = 0;
              break;
          }
      }
      if(flag) 
        cout<<"success on day "<<i<<endl;
      else 
        cout<<"failure on day "<<i<<endl;
	}
	return 0;
}