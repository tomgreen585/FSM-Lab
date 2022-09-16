/*Exercise 1 of FSM asignment 1*/
/*recognize cat" anywhere in the string*/
#include <iostream>
#include <string>

using namespace std;

string state;
int ProcessChar(char in_char){
	int accept = 0;
	
	if (state == "s0"){
		if(in_char == 'c'){
			state = "s1";
		} else if (in_char != 'c'){
			state = "s0";
		}
	} 
	
	else
	if (state == "s1"){
		if(in_char == 'a'){
			state = "s2";
		}else if(in_char == 'c'){
			state = "s1";
			}else if(in_char != 'c'){
				state = "s0";
			}else if(in_char != 'a'){
				state = "s0";
			}
		}
		
	else 
	if (state == "s2"){
		if(in_char == 't'){
			state = "s3";
			accept = 1;
		}else if(in_char == 'c'){
			state = "s1";
		}else if(in_char != 'c'){
				state = "s0";
			}else if(in_char != 't'){
				state = "s0";
			}
		}
		
	else
	if (state == "s3") {
		accept = 1;
	}
	return accept;
}	

int main(){
   string input;
   cout<<"enter input string:";
   getline(std::cin,input);
   cout<<"Input is "<<input<<" state is"<<state<<endl;
   bool string_accepted = 0;
   state = "s0";
   for (char s:input){
	   string_accepted = ProcessChar(s);
   } 
   cout<<" accepted = "<<string_accepted<<endl;
   	
}
