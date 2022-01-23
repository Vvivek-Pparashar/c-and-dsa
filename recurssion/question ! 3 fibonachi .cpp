 #include<bits/stdc++.h>
 using namespace std;

 int fac(int n)
 {
     if(n==2 || n==1) return n-1;
     return fac(n-1)+fac(n-2);
     cout<<(2*n-3)<<endl;
 }

 int main()
 {
     int n;
     cin>>n;

     cout<<fac(n);
 }
