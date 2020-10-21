/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 10. UVa 12250 - Language Detection
 * Created on  : Wednesday, 21st October 2020 10:43:07 am
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
	string s;
	cin >> s;
	map<string,int> m;
	m.insert({"HELLO",1});
	m.insert({"HOLA",2});
	m.insert({"HALLO",3});
	m.insert({"BONJOUR",4});
	m.insert({"CIAO",5});
	m.insert({"ZDRAVSTVUJTE",6});
	int t=1;
	while(s!="#"){
		switch (m[s]){
			case 1:
				cout<<"Case "<<t<<": "<<"ENGLISH"<<endl;
				break;
			case 2:
				cout<<"Case "<<t<<": "<<"SPANISH"<<endl;
				break;
			case 3:
				cout<<"Case "<<t<<": "<<"GERMAN"<<endl;
				break;
			case 4:
				cout<<"Case "<<t<<": "<<"FRENCH"<<endl;
				break;
			case 5:
				cout<<"Case "<<t<<": "<<"ITALIAN"<<endl;
				break;
			case 6:
				cout<<"Case "<<t<<": "<<"RUSSIAN"<<endl;
				break;	
			default:
				cout<<"Case "<<t<<": "<<"UNKNOWN"<<endl;
				break;
		}
		cin>>s;
		t++;
	}
	return 0;
}