#include <iostream>
#include <string.h>
// #include <iomanip>
using namespace std;
int main(){
	/*
	char a = '4' , b = '5';
	string c,v;
	c = to_string((a)-48);
	v = to_string((b)-48);
	cout<<c+v;*/
	string pasword = "fhs?";
	char pasword2[4] , dpas[4];
	int hj = 0;
	for(char i : pasword){
		pasword2[hj] = i;
		hj++;
	}
	// for(char i : pasword2){cout<<i<<" ";}
	char hor[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}, //26
		bhor[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}, //26
		 num[] = {'0','1','2','4','5','6','7','8','9'}, //10
		 car[] = {'!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'}; //32

	bool qhor = false , qbhor = false , qnum = false , qcar = false;
	
	int number = 0;

	for(char i : hor){
		for(char j : pasword){
			if(i == j){qhor = true;}
		}
	}

	for(char i : bhor){
		for(char j : pasword){
			if(i == j){qbhor = true;}
		}
	}

	for(char i : num){
		for(char j : pasword){
			if(i == j){qnum = true;}
		}
	}

	for(char i : car){
		for(char j : pasword){
			if(i == j){qcar = true;}
		}
	}

	if(qhor == true){number += 26;}
	if(qbhor == true){number += 26;}
	if(qnum == true){number += 10;}
	if(qcar == true){number += 32;}

	char thepassword[number-1];
	int fg = 0;
	if(qhor == true){
		for(char i : hor){
			thepassword[fg] = i;
			fg++;
		}
	}

	if(qbhor == true){
		for(char i : bhor){
			thepassword[fg] = i;
			fg++;
		}
	}

	if(qnum == true){
		for(char i : num){
			thepassword[fg] = i;
			fg++;
		}
	}

	if(qcar == true){
		for(char i : car){
			thepassword[fg] = i;
			fg++;
		}
	}
	bool temp = false;

	for(char a : thepassword){
		for(char b : thepassword){
			for(char c : thepassword){
				for(char d : thepassword){
					if(pasword2[0] == a and pasword2[1] == b and pasword2[2] == c and pasword2[3] == d){
						temp == true;
						dpas[0] = a ; dpas[1] = b ; dpas[2] = c ; dpas[3] = d;
						break;
					}
				}
				if(temp == true){break;}
			}
			if(temp == true){break;}
		}
		if(temp == true){break;}
	}
	cout<<"password = ";
	for(char i : dpas){cout<<i;}
	

}