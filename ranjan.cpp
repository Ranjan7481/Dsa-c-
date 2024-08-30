#include<iostream>
#include<climits>
using namespace std;

pair<int ,int> second_largest(int n,int*arr){

    int largest= INT_MIN;

    int secondlargest=INT_MIN;

    for(int i=0;i<n;i++)
    {

        if(arr[i]>largest)
        {   
            secondlargest = largest ;
            largest = arr[i];



        }

        if(arr[i]>secondlargest and arr[i]<largest)
        {


                secondlargest=arr[i];
        }
    }
    pair<int,int>ans ;
    ans.first = largest ;
    ans.second = secondlargest ;
    return ans ;

}

int main(){

int n;

cin>>n;

int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

pair<int , int>ans=second_largest(n,arr);
  
cout<<ans.first<<" "<<ans.second;


}
