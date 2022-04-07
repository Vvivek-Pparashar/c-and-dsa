#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;

    vector<vector<int> > v_1;

    for(int i=0; i<n; i++){
        vector<int> v;
        int i_1 = 0;

        int k = n - i;

        int mi = 0;
        int j = 0;
        while(j<n){
            if(n - mi < k) v.push_back(n-mi+1);
            else{
                v.push_back(n-mi);
                mi++;
            }

            j++;
        }

        for(int i = v.size() - 2; i>=0; i--){
            v.push_back(v[i]);
        }

        v_1.push_back(v);
    }

    for(auto it : v_1){
        for(auto re : it){
            cout<<re<<"";
        }cout<<endl;
    }

    for(int i = v_1.size() - 2; i>= 0; i--){
        for(int j = 0; j<v_1[i].size(); j++){
            cout<<v_1[i][j]<<"";
        }
        cout<<endl;
    }
}
