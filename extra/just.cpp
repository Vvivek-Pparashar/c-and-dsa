#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

int main()
{
    int a[10] = {6, 3, 4, 9, 0, 1, 2, 7, 5, 8};

    for(int i=0; i<10; i++)
    {
        int index = -1;
        int temp = a[i];
        for(int j=i+1; j<10; j++)
        {
            if(a[j]<temp)
            {
                temp = a[j];
                index = j;
            }
        }
        if(index != -1) swap(a[i], a[index]);
    }

    loop(i, 0, 10) cout<<a[i]<<" ";
}
