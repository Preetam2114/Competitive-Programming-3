/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 3. UVa 10550 - Combination Lock
 * Created on  : Tuesday, 20th October 2020 12:07:04 pm
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
    int start, first, second, third;
    scanf("%d %d %d %d", &start, &first, &second, &third);
    while(start || first || second || third){
        printf("%d\n", 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);
        scanf("%d %d %d %d", &start, &first, &second, &third);
    }
	return 0;
}