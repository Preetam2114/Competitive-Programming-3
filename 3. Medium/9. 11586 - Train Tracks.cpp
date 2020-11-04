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
pair<KeyType,ValueType> get_max( const map<KeyType,ValueType>& x ) {
  using pairtype=pair<KeyType,ValueType>; 
  return *max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}

template <class Container>
void split(const string& str, Container& cont){
    istringstream iss(str);
    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         back_inserter(cont));
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

string removeSpaces(string &str){ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t=1;
	cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while(t--){
    string pieces;
    getline(cin, pieces);
    unordered_map<string,int> counter;
    string piece;
    istringstream iss(pieces);
    while(iss >> piece){
        if(piece == "FM") piece = "MF";
        ++counter[piece];
    }

    bool loop = false;
    if(counter["MF"]){
        if(!counter["MM"] && !counter["FF"]){
            if(counter["MF"] > 1) {
                loop = true;
            }
        } 
        else if(counter["MM"] == counter["FF"]){
            loop = true;
        }
    } 
    else if(counter["MM"] > 0 && counter["FF"] > 0 && counter["MM"] == counter["FF"]) {
        loop = true;
    }

    if(loop){
        cout << "LOOP"<<endl;
    } else{
        cout << "NO LOOP"<<endl;
    }
	}
	return 0;
}