#include <iostream>
#include <vector>
#include <fstream>

class Identity{
    public:
        std::string first_name;
        std::string last_name;
        int day;
        int month;
        int year;
        std::string birthday;
        std::string phone_number;
        std::string age;
        std::string country_code;
        std::string email;
        std::string car;
        std::string password;

        std::vector<std::string> generate_vector(std::string filename){
            std::vector<std::string> gen_vector;
            std::ifstream file(filename);
            std::string str;
            while(std::getline(file, str)){
                gen_vector.push_back(str);
            }
            file.close();
            return gen_vector;
        }

        std::string generate_birthday(int day, int month, int year){
            std::string gen_birthday;
            std::vector<int> gen_birthday_vec;
            gen_birthday_vec.push_back(day); gen_birthday_vec.push_back(month); gen_birthday_vec.push_back(year);
            for(int i=0; i<3; i++){
                gen_birthday = gen_birthday + std::to_string(gen_birthday_vec[i]);
                if(i==2){
                    gen_birthday = gen_birthday + "";
                }
                else{
                    gen_birthday = gen_birthday + "/";
                }
            }
            return gen_birthday;
        }

        void generate_identity(std::string gender){
            std::vector<std::string> all_names;
            if(gender == "male"){
                all_names = generate_vector("dataset/male_first_names.txt");
            }
            else if(gender == "female"){
                all_names = generate_vector("dataset/female_first_names.txt");
            }
            else{
                srand (time(NULL));
                int random_number = rand()% 2;
                if(random_number == 0){
                    all_names = generate_vector("dataset/male_first_names.txt");
                }
                else{
                    all_names = generate_vector("dataset/female_first_names.txt");
                }
            }
            std::vector<std::string> first_names;
            first_names = generate_vector("dataset/last_names.txt");
            std::vector<std::string> country_codes;
            country_codes = generate_vector("dataset/country_code.txt");
            std::vector<std::string> random_emails;
            random_emails = generate_vector("dataset/emails.txt");
            std::vector<std::string> random_cars;
            random_cars = generate_vector("dataset/cars.txt");
            std::vector<std::string> random_passwords;
            random_passwords = generate_vector("dataset/passwords.txt");

            srand (time(NULL));

            int random_first_name = rand()% all_names.size();
            first_name = first_names[random_first_name];

            int random_last_name = rand()% first_names.size();
            last_name = all_names[random_first_name];

            int random_day = rand()% 31 + 1;
            int random_month = rand()% 12 + 1;
            int random_year = rand()% 51 + 1950;
            std::string random_phone_num;
            for(int i=0; i < 10; i++){
                int random_num = rand()% 9;
                random_phone_num = random_phone_num + std::to_string(random_num);
            }
            int rand_email = rand()% random_emails.size();

            int random_country_code = rand()% country_codes.size();

            int random_car = rand()% random_cars.size();

            day = random_day;
            month = random_month;
            year = random_year;

            birthday = generate_birthday(day, month, year);

            phone_number = random_phone_num;
            age = std::to_string(2019 - random_year);
            country_code = country_codes[random_country_code];
            email = random_emails[rand_email];
            car = random_cars[random_car];

            int random_password = rand()% random_passwords.size();

            password = random_passwords[random_password];
        }
};

int main(){
  Identity random_identity;
  std::string gender;

  while(1<2){
    std::cout << "Male (m) or Female (f)?\n";
    std::cout << "<FIDG>: ";
    std::cin >> gender;

    if(gender=="f"){
      random_identity.generate_identity("female");
    }
    if(gender=="m"){
      random_identity.generate_identity("male");
    }

    std::cout << "\n" << "[First Name]: "<< random_identity.first_name << "\n";
    std::cout << "[Last Name ]: " << random_identity.last_name << "\n";
    std::cout << "[ Birthday ]: " << random_identity.birthday << "\n";
    std::cout << "[  Number  ]: " << "+" << random_identity.country_code << " " << random_identity.phone_number << "\n";
    std::cout << "[    Age   ]: " << random_identity.age << "\n";
    std::cout << "[   Email  ]: " << random_identity.email << "\n";
    std::cout << "[    Car   ]: " << random_identity.car << "\n";
    std::cout << "[ Password ]: " << random_identity.password << "\n\n";
  }
}
