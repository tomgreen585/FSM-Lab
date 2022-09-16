/*Exercise 3 of FSM asignment 1*/

#include <iostream>
#include <string>

using namespace std;

int accept;

string state;
int ProcessChar(char in_char){
    
  if(state == "s0"){
	  if(in_char != ','){
		  state = "s0";
		  cout<<in_char;
	  }
	  if(in_char == ','){
		  state = "s1";
		  cout<<in_char;
		
	  }
  } else
  if(state == "s1"){
	  if(in_char != ','){
		  state = "s0";
	cout<<in_char;
	  }
	  if(in_char == ','){
		  state = "s1";
	  }
  } return accept;
} 

int main(){
   string input;
   cout<<"enter input string:";
   getline(std::cin,input);
   cout<<"Input is "<<input<<" state is"<<state<<endl;
   state = "s0";
   for (char s:input){
       ProcessChar(s);
   }       
}
