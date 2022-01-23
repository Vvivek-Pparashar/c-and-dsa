#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;

    cout<<"The stored value of ptr is :: "<<ptr<<endl;
    cout<<"The stored value of ptr is :: "<<*ptr<<endl;

    // new keyword

    int* p= new int(01);
    cout<<"\n\nThe stored at P is :: "<<p<<endl;
    cout<<"The stored at *P is :: "<<*p<<endl;

    // at int place we can use any type of data type .......

    int *arr=new int[3];
    arr[0]=100;
    arr[1]=200;
    arr[2]=300;

    delete[] arr;

    cout<<"\n\nThe value of arr[0] is  :  "<<arr[0]<<endl;
    cout<<"The value of arr[1] is  :  "<<arr[1]<<endl;
    cout<<"The value of arr[2] is  :  "<<arr[2]<<endl;


    cout<<"\n\nThe value of arr[0] is  :  "<<*arr<<endl;
    cout<<"The value of arr[1] is  :  "<<*(arr+1)<<endl;
    cout<<"The value of arr[2] is  :  "<<*(arr+2)<<endl;

}
