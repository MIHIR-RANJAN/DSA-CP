#include <bits/stdc++.h>
using namespace std;

class human {
	private: //intrinsic properties
		int body_temperature, temper;
		string nam;
	public: //external reactions
		human(string _name, int _body_temperature, int _temper) {
			nam = _name;
			body_temperature = _body_temperature, temper = _temper;
		}
		string name() { //what do other people call him
			return nam;
		}
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

/*int main() {
	human Sal("Sal", 92, 35);
	cout << Sal.name() << " feels " << Sal.feeling() << " and is "
	 << Sal.emotion()  << "\n";
}*/
void condition(human h) {
	cout << h.name() << " feels " << h.feeling() << " and is " << h.emotion() <<" \n";
}

int main() {
	human Sal("Sal", 98, 25), Bob("Bob", 100, 9), Joe("Joe", 85, 35);
	condition(Sal), condition(Bob), condition(Joe) ;
}
