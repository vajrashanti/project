#include<iostream>
#include<string>
using namespace std;

class car{
	public:
	 string name;
	 string model;
};
class Toyota : public car{
	public:
		string fual_type;
		float speed;
};

int main(){
	Toyota t1;
	return 0;
}

