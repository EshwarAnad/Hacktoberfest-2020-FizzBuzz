//A simple C++ code to get FizzBuzz from 1 to any number n instead of just 1 to 100

#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
  int T,num, i;
  cin >> T;
   while(T--) {
   cin>>num;
   cout<<"number="<<num<<"T="<<T<<endl;
   i=1;
      while(i<=num){
      if( i%15 == 0)            //number divisible by 3 and 5 will always be divisible by 15
      {  
      cout << "FizzBuzz" << endl; 
      }
      else if(i%5 == 0 ){
      cout << "Buzz" << endl; 
      }
      else if(i%3 == 0) {
      cout << "Fizz" << endl;
      }
       else {
       cout<<i<< endl;
       }
   i++;
   }
 }
return 0;
}

//Author: @RishabhDevbanshi
