#include <cctype>

class Identity {
	public:
		std::string first_name;
		std::string last_name;
		int day;
		int month;
		int year;
		
		void generate_identity(std::vector<std::string> all_names, std::vector<std::string> first_names){
			srand (time(NULL));
			int random_name = rand()% all_names.size();
			int random_day = rand()% 31 + 1;
			int random_month = rand()% 12 + 1;
			int random_year = rand()% 51 + 1950;
			
			first_name = first_names[random_name];
			last_name = all_names[random_name];
			day = random_day;
			month = random_month;
			year = random_year;
		}

};

void convert_to_lowercase(std::vector<std::string> vector_to_convert){

	std::ofstream outfile;
   	outfile.open("last_names.txt");
	for (unsigned int i = 0; i < vector_to_convert.size(); i++)
	{
		std::string str = vector_to_convert[i];

		int j = 0;
		while (str[j]) { str[j] = tolower(str[j]); str[0] = toupper(str[0]); j++;}
		vector_to_convert[i] = str;
		outfile << vector_to_convert[i] << "\n";
	}	
}