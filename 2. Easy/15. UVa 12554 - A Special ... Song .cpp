/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 15. UVa 12554 - A Special ... Song 
 * Created on  : Thursday, 22nd October 2020 9:39:56 pm
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
  int n;
  cin >> n;
  string names[105];
  string song[16];
  for(int i = 0; i < n; i++){
      cin >> names[i];
  }
  for(int i = 0; i < 16; i++){
      if(i % 4 == 0){
          song[i] = "Happy";
      }
      else if(i % 4 == 1){
          song[i] = "birthday";
      }
      else if(i % 4 == 2){
          song[i] = "to";
      }
      else if(i % 4 == 3){
          if(i == 11){
              song[i] = "Rujia";
          }
          else{
              song[i] = "you";
          }
      }
  }
  int j = 0;
  int f = 0;
  for(int i = 0; i < 16; i++){
      cout << names[j] << ": " << song[i] << endl;
      j++;
      if(j == n && i <= 15){
          j = 0;
          f = 1;
      }

      if(i == 15 && f != 1){
          i = -1;
      }
  }
  return 0;
}