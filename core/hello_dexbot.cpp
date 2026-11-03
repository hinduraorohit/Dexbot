#include<iostream>
#include<string>

int main(){
	std::string name = "Dexbot";
	int battery = 15;

	std::cout<< name<<" online. Battery: "<< battery<<"%\n";

	if(battery < 20) {
		std::cout<<"low battery. running to dock.\n";
	}else{
		std::cout<<"ready for mission.\n";
	}

	return 0;

}
