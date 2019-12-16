#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main(){

	std::vector<std::string> all_names;
	std::ifstream file("names/names_dataset/first_names.all.txt");
	std::string str;
	while(std::getline(file, str)){
		all_names.push_back(str);
	}
	file.close();

	std::ifstream file2("names/names_dataset/last_names.all.txt");
	
	std::string str2;
	std::vector<std::string> first_names;
	while(std::getline(file2, str2)){
		first_names.push_back(str2);
	}
	file2.close();

	srand (time(NULL));
	int random_name = rand()% first_names.size();
	int random_day = rand()% 31 + 1;
	int month = rand()% 12 + 1;
	int year = rand()% 51 + 1950;

	std::cout << "[first_names.all.txt]: " << all_names.size() 
	<< "   [last_names.all.txt]: " << first_names.size() << "\n\n";
	std::cout << "First Name: " << all_names[random_name] << "\n";
	std::cout << "Last Name: " << first_names[random_name] << "\n";
	std::cout << "Birthday: " << random_day << "/" << month << "/" << year 
	<< "\n";
}