#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <fstream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

class Identity : public QMainWindow {
    public:
        std::string first_name;
        std::string last_name;
        int day;
        int month;
        int year;
        std::string birthday;
        std::string phone_number;
        std::string age;

        void generate_identity(){
            std::vector<std::string> all_names;
            std::ifstream file("dataset/male_first_names.txt");
            std::string str;
            while(std::getline(file, str)){
                all_names.push_back(str);
            }
            file.close();
            std::ifstream file2("dataset/last_names.txt");

            std::string str2;
            std::vector<std::string> first_names;
            while(std::getline(file2, str2)){
                first_names.push_back(str2);
            }
            file2.close();

            srand (time(NULL));
            int random_name = rand()% all_names.size();
            int random_day = rand()% 31 + 1;
            int random_month = rand()% 12 + 1;
            int random_year = rand()% 51 + 1950;
            std::string random_phone_num;
            for(int i=0; i < 10; i++){
                int random_num = rand()% 9;
                random_phone_num = random_phone_num + std::to_string(random_num);
            }

            first_name = first_names[random_name];
            last_name = all_names[random_name];
            day = random_day;
            month = random_month;
            year = random_year;
            std::string gen_birthday;
            std::vector<int> gen_birthday_vec; gen_birthday_vec.push_back(day); gen_birthday_vec.push_back(month); gen_birthday_vec.push_back(year);
            for(int i=0; i<3; i++){
                gen_birthday = gen_birthday + std::to_string(gen_birthday_vec[i]);
                if(i==2){
                    gen_birthday = gen_birthday + "";
                }
                else{
                    gen_birthday = gen_birthday + "/";
                }
            }
            birthday = gen_birthday;
            phone_number = random_phone_num;
            age = std::to_string(2019 - random_year);
        }
};

#endif // MAINWINDOW_H
