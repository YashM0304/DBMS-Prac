#include<iostream> //input output stream
#define size 10    //
using namespace std; 
int n;  //global variable declaration 
template<class T>  //T Typename -carry all datatypes
void selection(T A[size])   //T-int array and float array
{ 
   int i,j,min;   //0,1,2,3,4....
    T temp;    //swap int and float 
    for(i=0;i<n;i++)    //pass 1 ,2,3....
    {  min=i;    // (2,14,23,1,19)
       for(j=i+1;j<n;j++)   //comapring 2 elements
         {   if(A[j]<A[min])
                min=j;
         }
         
          temp=A[i];
          A[i]=A[min];
          A[min]=temp;
    }
    cout<<"\n The sorted list is:.../n";
     for(i=0;i<n;i++)
      cout<<"\t"<<A[i];
}
int main()
{   
    int i,A[size];  // int type array
    float B[size];    //float array
cout<<"\n\t\tSelection Sort\n";
cout<<"\n\tHandling Interger Elements";
cout<<"\nHow Many Elements Are There???";
cin>>n;
cout<<"\nEnter the integer numbers";
 for(i=0;i<n;i++)
  cin>>A[i];
 selection(A);   //template function calling for Int array
cout<<"\n\t\tHandling Float Elements\n";
cout<<"\nHow Many Elements Are There???\n";
cin>>n;
cout<<"\n Enter the Float numbers";
for(i=0;i<n;i++)
  cin>>B[i];
selection(B);  //template function calling for float array
cout<<"\n";
return 0;
}
