#include<iostream>
using namespace std;
int main()
{
  int i;
  float arr[i],max;

   cout<<"enter 10 numbers";
   for(i=0;i<=9;i++)
      cin>>arr[i];

      max=arr[0];

      for(i=1;i<=9;i++)
         if(max<arr[i])
            max=arr[i];


    cout<<"maximum number in array is"<<max;

     return 0;
 }
