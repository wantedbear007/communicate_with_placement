#include<iostream>
#include<fstream>
// #include<windows.h>
using namespace std;

class Student
{
    // File management classes
    ifstream readFile; 
    ofstream writeFile;
    
    string salary, place, mode, role, vacancy, code, company, country, branch;
    string title, announcement, date, author_name, division, college;

    public:

    void apply_position(int reg_num, string name, string branch, string desc, string job_code, string email) {
        writeFile.open("CSVs/studentsJobReq.csv", ios_base::app);
        writeFile << reg_num << "," << name << "," << branch << "," << desc << "," << job_code << "," << email << "," << endl;
        writeFile.close();
    }; // this function will allow student to register for a job or internship

    void get_announcements() {
        readFile.open("CSVs/announcements.csv");

        cout<<"\n\n\n\n";
        cout << "\t\t\t||========================================================================================================================================||"<<endl;
        cout << "\t\t\t\tAnnouncements (Division of Placements)                                             Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t||========================================================================================================================================||"<<endl;

        while(readFile.good()) {
            getline(readFile, title, ',');
            getline(readFile, announcement, ',');
            getline(readFile, date, ',');
            getline(readFile, author_name, ',');

            cout << endl; 
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << "Title: " <<  title << endl;
            cout << announcement << endl;
            cout << "Date: " << date << endl;
            cout << "By: " << author_name << endl;
            cout << "\nDivision of Placements" << endl;
            cout << "Lovely Professional University, Phagwara, Punjab" << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;
        }
        readFile.close();
    }; // to get the announcements given by the placement wing 


        void log_request(int reg_num, string name, string branch, string title, string body) {


        writeFile.open("CSVs/student_logs.csv", ios_base::app);
        writeFile << reg_num << "," << name << "," << branch << "," << title << "," << body << "," << endl;
        writeFile.close();

    }; // to log request to placement cell

    void companies_today() {
        readFile.open("CSVs/companies_today.csv");

        time_t now = time(0);
        char* date = ctime(&now);

        cout<<"\n\n\n\n";
        cout << "\t\t\t||======================================================================================================================||"<<endl;
        cout << "\t\t\t\tCompanies Today                                         Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t\tDate: "<< date << endl;
        cout << "\t\t\t||======================================================================================================================||\n\n"<<endl;

        while(readFile.good()) {
            getline(readFile, company, ',');
            getline(readFile, salary, ',');
            getline(readFile, place, ',');
            getline(readFile, mode, ',');
            getline(readFile, vacancy, ',');
            getline(readFile, role, ',');
            getline(readFile, code, ',');

            cout << "-----------------------------------------" << endl;
            cout << "Company: " <<  company << endl;
            cout << "Salary: " << salary << endl;
            cout << "Place: " << place << endl;
            cout << "Mode: " << mode << endl;
            cout << "Vacancy: " << vacancy << endl;
            cout << "Role: " << role << endl;
            cout << "Job-Code: " << code << endl;
            cout << "-----------------------------------------" << endl;
        }
        readFile.close();
    }; // to list out the companies available today

    void list_visited_companies() {

        readFile.open("CSVs/companies.csv");
 
        cout<<"\n\n\n\n";
        cout << "\t\t\t||==============================================================================================||"<<endl;
        cout << "\t\t\t\tVisited Companies (2019-2022)              Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t||==============================================================================================||\n\n\n"<<endl;

        while(readFile.good()) {
            getline(readFile, company, ',');
            getline(readFile, country, ',');
            getline(readFile, branch, ',');

            cout << "*************************************" << endl;
            cout  <<"Company: " <<  company  << endl;
            cout  <<"\nBranch: " << branch    << endl;
            cout  <<"Country: " << country  << endl;
            cout << "*************************************" << endl;
        }

        readFile.close();

    }; // to list all the companies visited to our campus 

    void internships_available() {

        readFile.open("CSVS/internships.csv");
        // string salary, place, mode, role, vacancy, code;

        // cout << "List of internships available: " << endl;
        cout<<"\n\n\n\n";
        cout << "\t\t\t||==============================================================================================||"<<endl;
        cout << "\t\t\t\tInternships Available                        Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t||==============================================================================================||\n\n"<<endl;
        while(readFile.good()) {
            getline(readFile, salary, ',');
            getline(readFile, place, ',');
            getline(readFile, mode, ',');
            getline(readFile, role, ',');
            getline(readFile, vacancy, ',');
            getline(readFile, code, ',');

            cout << "-----------------------------------------" << endl;
            cout << "Stipend: " << salary << endl;
            cout << "Place: " << place << endl;
            cout << "Mode of Internship: " << mode << endl;
            cout << "Role: " << role << endl;
            cout << "No. of Vacancy available: " << vacancy << endl;
            cout << "Internship Code: " << code << endl;
            cout << "-----------------------------------------" << endl;

        }
        readFile.close();

    }; // to see all the internships available today

};