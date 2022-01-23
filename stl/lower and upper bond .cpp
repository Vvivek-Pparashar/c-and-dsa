#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    a[0]=4;
    a[1]=34;
    a[2]=65;
    a[3]=2;
    a[4]=9;

    sort(a,a+5);

    for(auto &it : a)   cout<<it<<endl;

    int*pt=lower_bound(a,a+5,65);

    if(pt==(a+5))  cout<<endl<<"not found ";
    else    cout<<endl<<(*pt)<<endl;


//    ***********  To find the index of any element that is present in array or vector or etc.
    cout<<distance(a, pt);  //iterator h
    return 0;
}

//    *****************if we want to use the lower bound and upper bound in(((((((( set and map ))))))) then we use this insted above***************
//     auto it =s.lower_bound(value);
//     in map the lower bound and upper bound

