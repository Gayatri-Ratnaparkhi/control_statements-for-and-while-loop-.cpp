#include<iostream>
using namespace std;
int main(){
    //int i, j;
    // for(i=5;i<=1;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    int n=5; int i, j,k=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=k){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        k--;
        cout<<"\n";
    }

        
    return 0;
}