#include<bits/stdc++.h>
using namespace std;

class Student
{
    
    public:
    void student_login(int reg_num, string passwd); // student login
    void student_registration(string name, int reg_num, string passwd, string department, string email_address); // student registration
    void log_request(string title, int reg_num, string body); // to log request to placement cell
    void companies_today(); // to list out the companies available today
    void list_visited_companies(); // to list all the companies visited to our campus 

};

class Placement
{
    public:
    void placement_cell_login(int reg_num, string passwd); // login from placement cell
    void placement_announcement(string title, string body, string author, string date); // function for making public announcement 
    void student_requests(); // to view all the request from the student
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

        if (user_input == 1) {
            cout << "Welcome to Student Portal" << endl;
            // select from the following
            // login
            // register
            return 0;
        }
        else if (user_input == 2) {
            cout << "Welcome to Placements Portal" << endl;
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