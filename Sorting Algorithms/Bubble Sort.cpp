/*
  Bubble Sort:
        In this algorithm we take two adjacent element and swap them if econd one is smaller than first one.
        It is the simplest sorting Algorithm.
*/
#include<iostream> 


using namespace std;

void bubbleSort(int arr[],int n)
{
    //flag indicates if we require more passes or array is already sorted
    int flag = 0;
    for(int i=0;i<n-1;i++)
    {
        flag = 0;
        for(int j=0;j<n-i-1;j++)
        {
            //We choose two consecutive Element and swap them if later element is smaller than previous element.
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter no of elements in the array : ";
    
    //Input the number of Elements in the array
    
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements : ";

    //Input the Elements of the Array to be sorted

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Calling Bubble Sort Function to sort the Iput Array

    bubbleSort(arr,n);

    //Printing the Sorted Array

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
