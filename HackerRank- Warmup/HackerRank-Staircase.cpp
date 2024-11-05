//Staircase detail

//This is a staircase of size = 4.
//    #
//   ##
//  ###
// ####
//Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

//Write a program that prints a staircase of size n.
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout << "What will be the value of n?"<<endl;
    cin >> n;
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++){
            
                cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout <<"#";
        }
        cout << endl;
    }
return 0;
}