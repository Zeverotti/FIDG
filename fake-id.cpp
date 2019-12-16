#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "src/tools/generate.cpp"

int main(){
	Identity random_identity;

	std::vector<std::string> all_names;
	//std::ifstream file("names/names_dataset/first_names.all.txt");
	std::ifstream file("names/names_dataset/male_first_names.txt");
	std::string str;
	while(std::getline(file, str)){
		all_names.push_back(str);
	}
	file.close();

	std::ifstream file2("names/names_dataset/last_names.txt");
	
	std::string str2;
	std::vector<std::string> first_names;
	while(std::getline(file2, str2)){
		first_names.push_back(str2);
	}
	file2.close();
	
	random_identity.generate_identity(all_names, first_names);

	std::cout << "[first_names.all.txt]: " << all_names.size() 
	<< "   [last_names.all.txt]: " << first_names.size() << "\n\n";

	std::cout << "First Name: " << random_identity.first_name << "\n";
	std::cout << "Last Name: " << random_identity.last_name << "\n";

	std::cout << "Birthday: " << random_identity.day << "/" << 
	random_identity.month << "/" << random_identity.year << "\n";
}