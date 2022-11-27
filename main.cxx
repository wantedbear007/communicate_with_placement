#include<bits/stdc++.h>
using namespace std;

class Student
{
    // File management classes
    ifstream getCompanies; 
    ofstream writeFile;
    
    string salary, place, mode, role, vacancy, code, company, country, branch;
    // string reg_num, title, description;


    public:
    void student_login(int reg_num, string passwd); // student login
    void student_registration(string name, int reg_num, string passwd, string department, string email_address); // student registration
    void get_announcements(); // to get the announcements given by the placement wing 
    // forgot password ho ske to implement kr dena




    void log_request(string reg_num, string name, string branch, string title, string body) {

        writeFile.open("CSVs/student_logs.csv", ios_base::app);
        writeFile << reg_num << "," << name << "," << branch << "," << title << "," << body << "," << endl;
        writeFile.close();

    }; // to log request to placement cell


    void companies_today() {
        getCompanies.open("CSVs/companies_today.csv");
        // string salary, place, mode, role, vacancy, code;


        // to get date and time
        time_t now = time(0);
        char* date = ctime(&now);

        cout<<"\n\n\n\n";
        cout << "\t\t\t||========================================================================================================================================||"<<endl;
        cout << "\t\t\t\tCompanies Today in Campus Date: "<< date << " Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t||========================================================================================================================================||"<<endl;

        while(getCompanies.good()) {
            // string company, country, branch;
            getline(getCompanies, company, ',');
            getline(getCompanies, salary, ',');
            getline(getCompanies, place, ',');
            getline(getCompanies, mode, ',');
            getline(getCompanies, vacancy, ',');
            getline(getCompanies, role, ',');
            getline(getCompanies, code, ',');

            cout << endl; 
            cout << "-----------------------------------------" << endl;
            cout << "Company " <<  company << endl;
            cout << "Salary: " << salary << endl;
            cout << "Place: " << place << endl;
            cout << "Mode: " << mode << endl;
            cout << "Vacancy: " << vacancy << endl;
            cout << "Role: " << role << endl;
            cout << "Job Code: " << code << endl;

            cout << "-----------------------------------------" << endl;
            cout << endl;
        }
        getCompanies.close();


    }; // to list out the companies available today

    void list_visited_companies() {

        getCompanies.open("CSVs/companies.csv");
 
        cout<<"\n\n\n\n";
        cout << "\t\t\t||==============================================================================================||"<<endl;
        cout << "\t\t\t\tPrevious Visited Companies for Placement          Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t||==============================================================================================||"<<endl;

        while(getCompanies.good()) {
            // string company, country, branch;
            getline(getCompanies, company, ',');
            getline(getCompanies, country, ',');
            getline(getCompanies, branch, ',');

            cout << endl; 
            cout << "-----------------------------------------" << endl;
            cout << "Company " <<  company << endl;
            cout << "Country: " << country << endl;
            cout << "Branch: " << branch << endl;
            cout << "-----------------------------------------" << endl;
            cout << endl;
        }

        getCompanies.close();

    }; // to list all the companies visited to our campus 

    void internships_available() {

        getCompanies.open("CSVS/internships.csv");
        // string salary, place, mode, role, vacancy, code;

        // cout << "List of internships available: " << endl;
        cout<<"\n\n\n\n";
        cout << "\t\t\t||==============================================================================================||"<<endl;
        cout << "\t\t\t\tInternships Available                        Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t||==============================================================================================||"<<endl;
        while(getCompanies.good()) {
            getline(getCompanies, salary, ',');
            getline(getCompanies, place, ',');
            getline(getCompanies, mode, ',');
            getline(getCompanies, role, ',');
            getline(getCompanies, vacancy, ',');
            getline(getCompanies, code, ',');

            cout << "-----------------------------------------" << endl;
            cout << "Stipend is: " << salary << endl;
            cout << "Place: " << place << endl;
            cout << "Mode of Internship: " << mode << endl;
            cout << "Role: " << role << endl;
            cout << "No. of Vacancy available: " << vacancy << endl;
            cout << "Code Number: " << code << endl;

            cout << "-----------------------------------------" << endl;

        }
        getCompanies.close();

    }; // to see all the internships available today

};

class Placement
{

    ofstream writeFile;
    ifstream readFile;

    string reg_num, name, branch, title, body;

    public:
    void placement_cell_login(int reg_num, string passwd); // login from placement cell

    void placement_announcement(string title, string body, string author, string date) {
        writeFile.open("CSVs/announcements.csv");
        writeFile << title << "," << body << "," << date << "," << author << "," << "Division Of Placement" << "," << "Lovely Professional University, Phagwara, Punjab" << "," << endl;
        writeFile.close();

    } // function for making public announcement 

    void student_requests() {
        cout<<"\n\n\n\n";
        cout << "\t\t\t||========================================================================================================================================||"<<endl;
        cout << "\t\t\t\tStudents Requests (Division of Placements)                                         Lovely Professional University, Phagwara" << endl;
        cout << "\t\t\t||========================================================================================================================================||"<<endl;

        readFile.open("CSVs/student_logs.csv");

        while (readFile.good()) {
            getline(readFile, reg_num, ',');
            getline(readFile, name, ',');
            getline(readFile, branch, ',');
            getline(readFile, title, ',');
            getline(readFile, body, ',');

             cout << endl; 
            cout << "-----------------------------------------------------------" << endl;
            cout << "Registration Number:  " <<  reg_num << endl;
            cout << "Student Name: " << name << endl;
            cout << "Branch: " << branch << endl;
            cout << "Title: " << title << endl;
            cout << body << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << endl;




        }

    }; // to view all the request from the student
    void add_companies(string company_name, string company_desc, string profile_needed, string eligibility, string date); // to add companies available today
    void registered_users(); // to list all the registered users available 
    void placed_students(); // to list all the placed students 
    void add_visited_companies(string company_name); // to add visited companies 
};

class InitialOpening
{
    // int user_input;
    public:
    // int indexPage(int user_input); 
    InitialOpening() {
        cout << "Welcome to placement cell  \n" << endl;
        cout << "Select from the following options: " << endl;
        cout << "1 for Student" << endl;
        cout << "2 for Placement cell" << endl;
        cout << "3 to exit \n" << endl;
        cout << "Enter your options: ";
    }
    
    int indexPage(int user_input) // initial index page of the project
    {

        Student s1;
        Placement p1;

        if (user_input == 1) {
            cout << "Welcome to Student Portal \n" << endl;
            // s1.list_visited_companies(); // module for listing visited companies
            // s1.internships_available(); // module for listing internships available
            // s1.companies_today(); // module for listing out companies available today in the campus
            // s1.log_request("12212215", "Bhanupratap singh", "Computer Application",  "TEsting", "This module is I guess working file as of now"); // This module is to log request from the students
            // Placement modules
            return 0;
        }
        else if (user_input == 2) {
            cout << "Welcome to Division of Placements" << endl;
            // p1.placement_announcement("Bhnaupratap", "google is one of the biggest companies in the world", "Suraj pratap", "November 27"); // module for dropping announcements for students
            p1.student_requests();
            return 0;
        }
        else if (user_input == 3) {
            cout << "Bye Thankyou" << endl;
            return 1;
        }
        // else {
            cout << "Invalid Input" << endl;
            return -1;
        // }
        // return 2;

    }

};

int main() {
    bool start = true;
    int user_input, ret_val;
    while (start) {
        cout << endl;
        InitialOpening pStarts;
        cin >> user_input;
        ret_val = pStarts.indexPage(user_input);
        if (ret_val == 1) start = false;
        cout << ret_val << endl;
    }
    


}