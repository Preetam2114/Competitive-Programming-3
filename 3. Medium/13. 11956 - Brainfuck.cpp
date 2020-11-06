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
// #define fil(ar, val) memset(ar, val, sizeof(ar))
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

vector<int>output(110);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  int index;
  int cases;
  string instruction;
  char option;
  scanf("%d", &cases);

  rep(i,1,cases){
      cin>>instruction;
      fill(output.begin(), output.end(), 0);
      index = 0;

      rep(j,0,instruction.size()-1){
          option = instruction[j];

          if(option == '>'){
              index++;

              if(index >= 100)
                  index = 0;
          }
          else if(option == '<'){
              index--;

              if(index <=-1)
                  index = 99;
          }
          else if(option == '+'){
              output[index]++;

              if(output[index] > 255)
                  output[index] = 0;
          }

          else if(option == '-'){
              output[index]--;
              if(output[index] < 0)
                  output[index] = 255;
          }
          else if(option == '.')
              continue;
      }

      printf("Case %d: ", i);

      rep(i,0,99){
          if(i<99)
              printf("%02X ", output[i]);
          else
              printf("%02X\n", output[i]);
      }
    }
	return 0;
}