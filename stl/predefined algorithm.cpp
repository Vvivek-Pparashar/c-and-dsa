#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*vector<int> v={1,90,3,8,5};

    for(auto &it : v)  cout<<it<<" ";

    cout<<endl<<endl<<*min_element(v.begin(),v.end())<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<accumulate(v.begin(),v.end(),0)<<endl;
    cout<<count(v.begin(),v.end(),90)<<endl<<endl;

    reverse(v.begin(),v.end());

    for(auto &it : v)  cout<<it<<" ";

     /   int a[5];
     a[0]=5;
     a[1]=10;
     a[2]=20;
     a[3]=40;
     a[4]=80;

     reverse(a,a+5);

     for(auto &it : a)  cout<<it<<" "; */


 //    *******lambda function *********************

 //        syntex  [](data type) {return condition ;}(value for x if we want );
 //        exmaple

         //**************** cout<<[](int x) {return x+4;}(4);

         vector<int> v={1,2,3,4,5};

         cout<<any_of(v.begin(),v.end(),[](int x) {return x<4;});

  //    any of siraf 1 true hone ke baat me h;
  //    all of me sub true hone chaoiyaw;
  //    none of is opp to all of;




}
