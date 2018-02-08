//Author:
#include<iostream>

using namespace std;

int main()
{
   int ASCII;
   char characterz;
   
  cout<<"What character do you want to know about?\n";
 
  cin>> characterz;
   ASCII=characterz;
   if ((ASCII >= 97) && (ASCII <=122)) {

  //when user's entry is between a-z...
  //
    cout<<characterz<< " is an lower case letter!\n";
   }  else if ((ASCII >=65) && (ASCII <=90)) {

  //when user's entry is between A-Z...
    cout<<characterz<<" is an upper case letter!\n";
   } else {

  //in all other cases...
    cout<<"?! Pssh. What are you talking about?\n";
   } 

  //no matter what they enter...
  cout<<"The ASCII value is: "<<ASCII<< endl ;

  return 0;
}
