#include<iostream> 
using namespace std;
int main(){//Q 1
int err[5][5];
for(int i =0; i<5;i++){
    for(int j =0; j<5;j++){
        err[i][j] =10;
    }
}
// Q 2
// int m,n;
// cout<<"Enter number of rows: ";
// cin>>m;
// cout<<"Enter number of columns: ";
// cin>>n;
// int brr[m][n];
// int crr[m][n];
// cout<<"Enter elements of 1st array : ";
// for(int i =0;i<m;i++){
//     for(int j = 0;j<n;j++){
//         cin>>brr[i][j];
//     }
// }
// cout<<"Enter elements of 2nd array : ";
// for(int i =0;i<m;i++){
//     for(int j = 0;j<n;j++)
//     {
//         cin>>crr[i][j];
//     }
// }
// cout<<endl<<"Sum of given matrices : "<<endl;
// for(int i =0;i<m;i++){
//     for(int j = 0;j<n;j++){
//         brr[i][j]+=crr[i][j];
//         cout<<brr[i][j]<<" ";
//     }
//     cout<<endl;
//}
//Q 3
// int m,n;
// cout<<"Enter the values for n and m respctively : ";
// cin>>n>>m;
// int A[n][m];
// cout<<"Enter elements of array : ";
// for(int i =0;i<n;i++){
//     for(int j =0;j<m;j++){
//         cin>>A[i][j];
//     }
// }
// int I1,r1,I2,r2;
// cout<<"Enter values for I1,r1,I2,r2 respectively : ";
// cin>>I1>>r1>>I2>>r2;
// cout<<"Required sum is "<<A[I1][r1]+A[I2][r2];
// Q 4
// int m,n;
// cout<<"Enter the values for rows and column respctively : ";
// cin>>n>>m;
// int arr[n][m];
// cout<<"Enter elements of array : ";
// for(int i =0;i<n;i++){
//     for(int j =0;j<m;j++){
//         cin>>arr[i][j];
//     }
// }

// int max =arr[0][0];
// for(int i = 0; i<m ;i++){
//     for(int j = 0;j<n;j++){
// if(arr[i][j] >max){
//     max = arr[i][j];
// }
//     }
    
// }

// cout<<"Large element is "<<max;
//Q 5

// int p,q,k = 0,sum =0;
// cout<<"Enter the values for rows and column respctively : ";
// cin>>p>>q;
// int arr[p][q];
// cout<<"Enter elements of array : ";
// for(int i =0;i<p;i++){
//     for(int j =0;j<q;j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i =0;i<p;i++){int a =0;
//     for(int j =0;j<q;j++){
//         a+=arr[i][j];
//     }
    
    
//     if(sum<a){
//         sum =a ;
//         k = i;
// }}
// cout<<"The required row no .is "<<k;
// Q 6
int n;
cout<<"Enter number of columns or rows : ";
cin>>n;
int arr[n][n];
for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
        cin>>arr[i][j];
    }
}
cout<<" the required output : "<<endl;
for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){if(i == (n-1)/2 || j == (n-1)/2){
        cout<<arr[i][j]<<" ";}
        else 
        {cout<<"  " ;}
        
    }
cout<<endl;
}}