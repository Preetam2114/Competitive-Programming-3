#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long T, n, m, d;
    ////
    // cin >> T;
    //     while(T--){
        ////
        cin >> n >> m >> d;
        vector<int> answer(n, 0);
        vector<int> bd(m);
        for(int i=0; i<m; i++){
            cin >> bd[i];
            //TODO
        }
        int sum = 0;
        for(int i : bd)
            sum += i;
        int r = n-sum;
        if(d>r){
            cout<<"YES"<<endl;
            int count = 0;
            for(int i=0; i<m; i++){
                for(int j=0; j<bd[i]; j++){
                    answer[count++]=i+1;
                }
            }

            for(int i: answer){
                cout << i << " ";
            }
            return 0;
        }
        int pos=0, current = 0;
        while(pos<n && current<m){
            
            //if(pos + d <= r){
                r += bd[current];
                
                for(int i = pos+d-1; i < pos+d-1+bd[current] && i< answer.size(); i++){ //001 01
                    //cout<<pos<<endl<<current<<endl;
                    cout<<i<<endl;
                    answer[i] = current+1;
                }
                cout<<answer[11]<<"lol"<<endl;
                pos+= d-1 + bd[current++];
                //cout<<"next pos"<<pos<<endl; 
                if(pos+d>=r){
                    int count = n-1;
                    for(int i=m-1; i>=current; i--){
                        for(int j=0; j<bd[i]; j++){
                            answer[count--] = i+1;
                        }
                    }
                }

        }
        if(current == m && n-pos>=d){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i: answer)
                cout<<i<<" ";
           
        }



    
}
/*
5
12 3 2 
1 2 1
12 1 1
12
12 1 1
1
100 10 10
1 1 1 1 1 1 1 1 1 1
100 9 10
1 1 1 1 1 1 1 1 1

//wrong ans
ans :
100 9 10
1 1 1 1 1 1 1 1 1
NO

100 8 10
1 1 1 1 1 1 1 1
NO

12 1 1
12
YES
1 1 1 1 1 1 1 1 1 1 1 1

12 3 2 
1 2 1
NO

12 1 1
1
NO

100 10 10
1 1 1 1 1 1 1 1 1 1
YES
0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 5 0 0 0 0 0 0 0 0 0 6 0 0 0 0 0 0 0 0 0 7 0 0 0 0 0 0 0 0 0 8 0 0 0 0 0 0 0 0 0 9 0 0 0 0 0 0 0 0 0 10

// should get no

12 1 1
12

12 1 1
1
//no


100 10 10
1 1 1 1 1 1 1 1 1 1

100 9 10
1 1 1 1 1 1 1 1 1
// no



*/

