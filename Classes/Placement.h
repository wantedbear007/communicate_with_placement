#include<iostream>
#include<fstream>
// #include<windows.h>
using namespace std;


class Placement
{

    ofstream writeFile;
    ifstream readFile;

    string reg_num, name, branch, title, body, job_code, desc;
    string student_name, student_email, ctc, id, company_name;

    public:

    void placement_announcement(string title, string body, string author, string date) {
        writeFile.open("CSVs/announcements.csv");
        writeFile << title << "," << body << "," << date << "," << author << "," << "Division Of Placement" << "," << "Lovely Professional University - Punjab" << "," << endl;
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
    void add_companies(string company_name, string salary, string place, string mode, string availability, string role, string company_code) {
        writeFile.open("CSVs/companies_today.csv", ios_base::app);
        writeFile << company_name << "," << salary << "," << place << "," << mode << "," << availability << "," << role << "," << company_code << "," << endl;
        writeFile.close();

    }; // to add companies available today

    void registered_users() {
        readFile.open("CSVs/registered_users.csv");

       
        while (readFile.good()) {
            getline(readFile, reg_num, ',');
            getline(readFile, student_name, ',');
            getline(readFile, branch, ',');
            getline(readFile, student_email, ',');

                cout << endl; 
            cout << "-----------------------------------------------------------" << endl;
            cout << "Registration Number: " <<  reg_num << endl;
            cout << "Student Name:  " << student_name << endl;
            cout << "Branch: " << branch << endl;
            cout << "Email-address: " << student_email << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << endl;
        }

        readFile.close();
    }; // to list all the registered users available 

    void placed_students() {
        readFile.open("CSVs/placed_students.csv");

     
        while (readFile.good()) {
            getline(readFile, id, ',');
            getline(readFile, student_name, ',');
            getline(readFile, student_email, ',');
            getline(readFile, ctc, ',');
            getline(readFile, company_name, ',');

            cout << endl; 
            cout << "-----------------------------------------------------------" << endl;
            cout << "Student Name: " <<  student_name << endl;
            cout << "Student Email:  " << student_email << endl;
            cout << "Cost to Company(CTC): " << ctc << endl;
            cout << "Company Name: " << company_name << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << endl;
        }
        readFile.close();

    }; // to list all the placed students 


    void add_visited_companies(string company_name, string country, string branch) {
        writeFile.open("CSVs/companies.csv", ios_base::app);
        writeFile << company_name << "," << country << "," << branch << "," << endl;
        writeFile.close();
    }; // to add visited companies 

    void student_job_requests() {
        readFile.open("CSVs/studentsJobReq.csv");

       
        while (readFile.good()) {
            getline(readFile, reg_num, ',');
            getline(readFile, student_name, ',');
            getline(readFile, branch, ',');
            getline(readFile, desc, ',');
            getline(readFile, job_code, ',');
            getline(readFile, student_email, ',');

            cout << endl; 
            cout << "-----------------------------------------------------------" << endl;
            cout << "Registration Number: " <<  reg_num << endl;
            cout << "Student Name:  " << student_name << endl;
            cout << "Student Email: " << student_email << endl;
            cout << "Student Branch: " << branch << endl;
            cout << desc << endl;
            cout << "Job code: " << job_code << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << endl;
        }

        readFile.close();
    }
};
