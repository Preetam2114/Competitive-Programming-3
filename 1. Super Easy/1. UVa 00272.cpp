/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 1. UVa 00272
 * Created on  : Tuesday, 20th October 2020 11:43:09 am
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
	// ll t=1;
	// cin >> t;
	char s[1024];
	bool is_open=true;
	while(gets(s)){
		loop(i,0,strlen(s)-1){
			if(s[i]=='"'){
				if(is_open)
					cout<<"``";
				else 
					cout<<"''";
				is_open=!is_open;
			}
			else
				cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}