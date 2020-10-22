/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 2. UVa 10114 - Loansome Car Buyer
 * Created on  : Thursday, 22nd October 2020 9:21:54 am
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
	int months;
	float down, total;
	short k;
	while (scanf("%d %f %f %hd",&months,&down,&total, &k), months>0){
		float *arr = new float [months];
		for (int i = 0; i < k; i++) {
			int a; float per;
			scanf("%d %f", &a, &per);
			for (int j = a; j < months; j++) {
				arr[j] = per;
			}
		}
		int i = 0;
		float monthly = total / months;
		float value = down + total;
		value -= value * arr[0];
		while (value < total) {
			i++;
			value -= value * arr[i];
			total -= monthly;
		}
		if (i == 1)printf("1 month\n");
		else printf("%d months\n",i);
	}
	return 0;
}