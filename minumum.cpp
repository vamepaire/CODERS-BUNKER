#include<bits/stdc++.h>
using namespace std;

struct node
{
    int max;
    int min;
};
node Get(int arr[],int x)
{
    struct node M1;
    int y;

    if(x==1)
    {
        M1.max=arr[0];
        M1.min=arr[0];
        return M1;
    }

    if(arr[0]>arr[1])
    {
        M1.max=arr[0];
        M1.min=arr[1];
    }
    else
    {
        M1.max=arr[1];
        M1.min=arr[0];
    }
    for(y=2;y<x;y++)
    {
        if(arr[y]>M1.max)
        M1.max=arr[y];

        else if(arr[y]>M1.min)
        M1.min=arr[y];
    }
    return M1;
}

int main()
{
    int arr[]={342,675,876,987,5643};
    int arr_size=5;

    struct node M1= Get(arr,arr_size);

    cout<< "Minimum element in the array:" << M1.min<< endl;
    cout<< "Maximum element in the array:" << M1.max<<endl;
       
       return 0;
}