#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	string textline;
	cout << "-------------------- BOOM ---------------------\n";
	while(getline(source,textline)){
	    cout << textline << endl;
	}
	cout << "-------------------- HA!! ---------------------\n";
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ

    source.close();
    dest.close();
	return 0;
}
