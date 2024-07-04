#include<iostream>
using namespace std;

/*

****
*  *
*  *
****

*/

 int main(){
     int row,col;

     cout<<"\nEnter no. of rows"<<endl;
     cin>>row;
     cout<<"\nEnter no. of cols"<<endl;
     cin>>col;
                //i<+5
     for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                if(i==1 || i==row || j==1||j==col){
                    cout<<"*";
                }

            else{
                cout<<" ";
            }
            }

        cout<<endl;
        }

    return 0;

 }
