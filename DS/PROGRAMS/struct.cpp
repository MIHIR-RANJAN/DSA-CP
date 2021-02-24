#include<bits/stdc++.h>
using namespace std;

struct human {
	int body_temperature, temper;
	string name;
	human(string name, int body_temperature, int temper) :
	name(name), body_temperature(body_temperature), temper(temper) {}
	string feeling() { //answers "how do I feel"
		if(body_temperature >= 97 && body_temperature <= 99) return "good";
		else return "bad";
	}
	string emotion() {
		if(temper <= 10) return "sad";
		else if(temper <= 30) return "happy";
		else return "angry";
	}
};

void condition(human h) {
	cout << h.name() << " feels " << h.feeling() << " and is " << h.emotion();
}


int main(){
    human Sal("Sal", 98, 25);
    //condition(Sal); //get Sal's initial condition
    //Sal.name = "Sally" //Sal's friends sometimes call him Sally
    //Sal.body_temperature = 102; //Sal gets sick
    //Sal.temper = 40; //he develops bad temper
    //condition(Sal); //now, get Sal's new condition

}