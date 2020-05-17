#include <iostream>

#include<bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
#define ll long long int

#include<string>
int _mergeSort(int arr[], int temp[], int left, int right);
int mergee(int arr[], int temp[], int left, int mid, int right);

/* This function sorts the input array and returns the
number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

/* An auxiliary recursive function that sorts the input array and
returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;

        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        /*Merge the two parts*/
        inv_count += mergee(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

/* This funt merges two sorted arrays
and returns inversion count in the arrays.*/
int mergee(int arr[], int temp[], int left,
          int mid, int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            /* this is tricky -- see above
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }

    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    /* Copy the remaining elements of right subarray
(if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];

    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin >> n>>k;
        int a[n];
        int aa[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
            aa[j]=a[j];
        }

        ll ree=mergeSort(aa,n);
        if(ree%2==0)
        {
            int i0=0;
            int i1=0,i2=0,i3=0;

            bool f = true;
            bool h1 = true;
            bool ff =true;
            vector<int > b1,b2,b3;

            int rr=0;
            bool h=true;
            while(i1<n&&rr<=k)
            {
                if(i1+1==a[i1])
                {
                    i1++;
                    //cout << "2nd\n";
                }
                else
                {
                    i2=a[i1]-1;
                    if(a[i2]==i1+1)
                    {
                        i1++;
                       // cout <<"3rd\n";
                    }
                    else
                    {

                        i3=a[i2]-1;
                        int ai3 =a[i3];
                            int ai2 =a[i2];
                            int ai1 =a[i1];
                            int c1=0;
                            int c2=0;
                        if(ai1==i2+1)
                            {
                                c1+=1;
                            }
                            if(ai2==i3+1)
                            {
                                c1+=1;
                            }
                            if(ai3==i1+1)
                            {
                                c1+=1;
                            }
                            if(ai1==i3+1)
                            {
                                c2+=1;
                            }
                            if(ai3==i2+1)
                            {
                                c2+=1;
                            }
                            if(ai2==i1+1)
                            {
                                c2+=1;
                            }
                            if(c2>c1)
                            {
                                a[i3]=ai1;
                                a[i1]=ai2;
                                a[i2]=ai3;
                            b1.push_back(i3+1);
                            b2.push_back(i2+1);
                            b3.push_back(i1+1);
                            //cout << i1+1<<" "<< i2+1<<" "<< i3+1<<" \n";
                            }
                            else
                            {
                                a[i1]=ai3;
                                a[i2]=ai1;
                                a[i3]=ai2;
                            b1.push_back(i1+1);
                            b2.push_back(i2+1);
                            b3.push_back(i3+1);
                            //cout << i3+1<<" "<< i2+1<<" "<< i1+1<<" \n";
                            }
                            rr++;
                    }
                }
            }
                i1=0;
                i0=0;
                bool g=true;
                while(i1<n&&rr<=k)
                {
                    if(i1+1==a[i1])
                    {
                        i1++;
                        //cout << "h1\n";
                    }
                    else
                    {
                        i2 = a[i1]-1;
                        if(g==true)
                        {
                            i3 = i1+1;
                            g=false;
                        //cout << "h2\n";
                        }
                        if(i3+1==a[i3]||i3==i2)
                        {
                            i3++;
                            if(i3==n)
                            {
                                ff=false;
                                break;
                            }
                        //cout << "h3\n";
                        }
                        else
                        {
                        //cout << "h4\n";
                           int ai3 =a[i3];
                            int ai2 =a[i2];
                            int ai1 =a[i1];
                            int c1=0;
                            int c2=0;
                        if(ai1==i2+1)
                            {
                                c1+=1;
                            }
                            if(ai2==i3+1)
                            {
                                c1+=1;
                            }
                            if(ai3==i1+1)
                            {
                                c1+=1;
                            }
                            if(ai1==i3+1)
                            {
                                c2+=1;
                            }
                            if(ai3==i2+1)
                            {
                                c2+=1;
                            }
                            if(ai2==i1+1)
                            {
                                c2+=1;
                            }
                            if(c2>c1)
                            {
                                a[i3]=ai1;
                                a[i1]=ai2;
                                a[i2]=ai3;
                            b1.push_back(i3+1);
                            b2.push_back(i2+1);
                            b3.push_back(i1+1);
                            //cout << i1+1<<" "<< i2+1<<" "<< i3+1<<" \n";
                            }
                            else
                            {
                                a[i1]=ai3;
                                a[i2]=ai1;
                                a[i3]=ai2;
                            b1.push_back(i1+1);
                            b2.push_back(i2+1);
                            b3.push_back(i3+1);
                            //cout << i3+1<<" "<< i2+1<<" "<< i1+1<<" \n";
                            }
                            g=true;
                            rr++;
                        }
                    }
            }
            if(rr==k+1||ff==false)
            {
                cout << -1 <<"\n";
            }
            else
            {
                cout << b1.size()<<"\n";
                for(int j=0;j<b1.size();j++)
                {
                    cout << b1[j]<<" "<< b2[j]<<" "<< b3[j]<<"\n";
                }
            }
        }
        else
        {
            cout <<-1<<"\n";
        }
    }
    return 0;
}

