/*Exercise 3 of FSM asignment 1*/

#include <iostream>
#include <string>

using namespace std;

int accept;

string state;
int ProcessChar(char in_char){
    
    if (state == "s0"){
        if(in_char == '0'){
            state = "s1";
            accept = 1;
        }
        if(in_char != '0'){
            state = "s2";
            accept = 1;
        }
    } else
    if (state == "s1"){
            state = "s3";
            accept = 0;
        }
    return accept;
}

int main(){
	while(true){
   string input;
   cout<<"enter input string:";
   getline(std::cin,input);
   cout<<"Input is "<<input<<" state is"<<state<<endl;
   state = "s0";
   accept = 0;
   for (char s:input){
       ProcessChar(s);
   } 
   cout<<" accepted = "<<accept<<endl;
       
}
}
