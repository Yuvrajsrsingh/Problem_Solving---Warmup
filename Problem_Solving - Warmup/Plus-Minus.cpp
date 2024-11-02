//Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
// Print the decimal value of each fraction on a new line with  places after the decimal.
 // link to solve the question - https://www.hackerrank.com/challenges/plus-minus/problem
#include <bits/stdc++.h>

using namespace std;

int main(){
     vector<int> arr = {-1,9,5,0,4,-3,-5};
     int n = arr.size();

int positive = 0,negative=0,null=0;
 for(int i=0;i<n;i++){
    if(arr[i]>0){
        positive++;

    }
    else if(arr[i]<0){
        negative++;
    
    }
    else{
        null++;
    }

 }
  double postiveRatio = (double)positive/n;
  double negativeRatio = (double)negative/n;
  double nullRatio = (double)null/n;

  cout << fixed << setprecision(6)<< postiveRatio << endl;
  cout << fixed << setprecision(6)<< negativeRatio << endl;
  cout << fixed << setprecision(6)<< nullRatio << endl;


}
