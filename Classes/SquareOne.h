#include<iostream>
#include<fstream>
#include<windows.h>
#include "./Placement.h"
#include "./Student.h"
using namespace std;


class SquareOne
{
    // int user_input;
    public:
    // int indexPage(int user_input); 
    SquareOne() {
    system("color a");

         std::cout << R"(
                                                    .__ ._..  .._. __.._..__..  .  .__..___  .__ .   .__. __ .___.  ..___.  ..___.
                                                    |  \ | \  / | (__  | |  ||\ |  |  |[__   [__)|   [__]/  `[__ |\/|[__ |\ |  |  
                                                    |__/_|_ \/ _|_.__)_|_|__|| \|  |__||     |   |___|  |\__.[___|  |[___| \|  | 
	                                                                    V E R S I O N : 1.0 B E T A                                                                                 
                        )" << '\n';
                        Sleep(200);
        cout << "\t\t\t\t\t\t\t\t\tSelect from the following options: \n" << endl;Sleep(150);
        cout << "\t\t\t\t\t\t\t1. For Student";Sleep(150);
        cout << "\t2. For Placement cell";Sleep(150);
        cout << "\t3. Exit";Sleep(150);
        cout << "\t4. Developers" << endl;Sleep(150);
        cout << "Enter your options: (1-4) ";
    }
    
    int indexPage(int user_input) // initial index page of the project
    {
        Student s1;
        Placement p1;
        int user_ipt, reg_num = 0;
        string registration_no, location = "none", mode = "none", role = "none",  salary = "none", vacancy = "n";
        string  student_name = "none", branch = "none", desc = "none", job_code = "none", email = "none", log_title = "none", lol="l", date = "none";

        if (user_input == 1) {
            cout<<"\n\n\n\n";
            cout << "\t\t\t||========================================================================================================================================||"<<endl;
            cout << "\t\t\t\tWelcome to Division of Placement (Student)                                                 Lovely Professional University, Phagwara" << endl;
            cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;


            cout << "Select for the following: \n" << endl;
            cout << "1. Visited Companies" << endl;
            cout << "2. Internships Available" << endl;
            cout << "3. Companies today" << endl;
            cout << "4. Placement Cell Announcements" << endl;
            cout << "5. Apply for Job / Internship Position" << endl;
            cout << "6. Log request\n" << endl;
            

            cout << "To select enter the 1, 2, 3, 4, 5, 6 according to your requirements: "; cin >> user_input;


            switch (user_input)
            {
                case 1:
                s1.list_visited_companies();
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;

                case 2:
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                s1.internships_available();
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;

                
                case 3:
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                s1.companies_today();
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;


                case 4:
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                s1.get_announcements();
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;


                case 5:
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout << endl;

                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\t Apply for JOB / Internships                                                      Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;   

                cout << "-- Enter the following Details (* means Mandatory) --\n" << endl;
                cout << "Registration number:* "; cin >> reg_num;
                getline(cin, lol);
                cout << "Name:* "; 
                getline(cin, student_name);
                cout << "Branch:* "; 
                getline(cin, branch);
                cout << "Message: "; 
                getline(cin, desc);
                cout << "Job Code (Available in the companies details):* "; 
                getline(cin, job_code);
                cout << "Email ID:* ";
                getline(cin, email);
                
                s1.apply_position(reg_num, student_name, branch, desc, job_code, email);
                cout << "Your Request has been successfully sent to the Division of Placement.\n Division of Placement" << endl;

                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;


                case 6:
                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\t Log request to Division of Placement                                                      Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;  
     
                // string name, branch, title, body, lol;

                cout << "-- Enter the following Details (* means Mandatory) --\n\n" << endl;
                cout << "Registration number:* "; cin >> reg_num;
                cout << ""; 
                getline(cin,lol);
                
                cout << "Name:* ";
                getline(cin,student_name);
                cout << "Branch:* ";
                getline(cin,branch);
                cout << "Title:* ";
                getline(cin,log_title);
                cout << "Message: ";
                getline(cin,desc);

                s1.log_request(reg_num, student_name, branch, log_title, desc);
                cout << "Your Request has been successfully sent to the Division of Placement.\n Division of Placement" << endl;
                cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                return 3;
                break;

                // default:
                // cout << "Invalid Input";
                // break;
            }

            // s1.list_visited_companies(); // module for listing visited companies
            // s1.internships_available(); // module for listing internships available
            // s1.companies_today(); // module for listing out companies available today in the campus
            // s1.log_request("12212215", "Bhanupratap singh", "Computer Application",  "TEsting", "This module is I guess working file as of now"); // This module is to log request from the students
            // s1.get_announcements(); // to get all the announcements done by the division of placements
            // s1.apply_position("12212215", "Bhanupratap", "Computer Application", "I want to apply for this company.", "546", "pratapsinghbhanu444@gmail.com");
            return 0;
        }
        else if (user_input == 2) {
            cout<<"\n\n\n\n";
            cout << "\t\t\t||========================================================================================================================================||"<<endl;
            cout << "\t\t\t\tWelcome to Division of Placements (Faculty)                                                  Lovely Professional University, Phagwara" << endl;
            cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;

            cout << "Select from the following options: \n" << endl;
            cout << "1. Write a placement announcement" << endl;
            cout << "2. Student requests" << endl;
            cout << "3. Add new company" << endl;
            cout << "4. Add previous visited company" << endl;
            cout << "5. Placed Students" << endl;
            cout << "6. Registered Students" << endl;
            cout << "7. Student Job / Placement Requests\n\n" << endl;

            cout << "To select enter the 1, 2, 3, 4, 5, 6, 7 according to your requirements: "; cin >> user_input;



            switch (user_input) {

                case 1:

                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\tWrite an Announcement                                                           Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;
                
                cout << "Enter the following details: \n\n" << endl;
                cout << "Title: "; cin >> log_title;
                getline(cin, lol);
                cout << "Message: ";
                getline(cin, desc);
                cout << "Faculty: ";
                getline(cin, student_name);
                cout << "Date: ";
                getline(cin, date);

                p1.placement_announcement(log_title, desc, student_name, date);
                cout << "your announcement was successfully made. " << endl;
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;

                case 2:
                p1.student_requests();
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;

                
                case 3:
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\tAdd New Company (Division of Placements)                                                      Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;
                cout << "Enter the following details: " << endl;
                cout << "Company Name: "; cin >> log_title;
                getline(cin, lol);
                cout << "Salary: ";
                getline(cin, salary);
                cout << "Location: ";
                getline(cin, location);
                cout << "Mode: ";
                getline(cin, mode);
                cout << "Number of vacancy: ";
                getline(cin,  vacancy);
                cout << "Role: ";
                getline(cin, role);
                cout << "Job code: ";
                getline(cin, job_code);

                p1.add_companies(log_title, salary, location, mode, vacancy, role, job_code);
                cout << "You have successfully posted the job opportunity." << endl;
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;

                case 4:
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\tAdd Visited Company (Division of Placements)                                                  Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;

                cout << "Enter the following details: \n" << endl;
                cout << "Company Name: "; cin >> log_title;
                getline(cin, lol);
                cout << "Place: "; getline(cin, location);
                cout << "Stream: "; getline(cin, branch);

                p1.add_visited_companies(log_title, location, branch);
                cout << "Company has been successfully added to the list." << endl;
                 break;

                case 5:
                  cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\tPlaced Students (Division of Placements)                                                  Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;
                p1.placed_students();
                   cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;

                break;

                case 6:
                   cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\tRegistered Students (Division of Placements)                                                  Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;
                p1.registered_users();
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                break;

                case 7:
                    cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"\n\n\n\n";
                cout << "\t\t\t||========================================================================================================================================||"<<endl;
                cout << "\t\t\t\tStudent Job / Internship Requests (Division of Placements)                                       Lovely Professional University, Phagwara" << endl;
                cout << "\t\t\t||========================================================================================================================================||\n\n"<<endl;
                p1.student_job_requests();
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;

                break;



                }
            // p1.placement_announcement("Bhnaupratap", "google is one of the biggest companies in the world", "Suraj pratap", "November 27"); // module for dropping announcements for students
            // p1.student_requests(); // module to see all the requests from user
            // p1.add_companies("Kindle", "24000", "Pouradhar", "Online", "4", "SDE", "879"); // to add companies in the campus
            // p1.add_visited_companies("XIaomi", "Balgladesh", "Commerce"); // all the numbers of companies visited companies
            // p1.placed_students(); // to list all the placed students
            // p1.registered_users(); // to list all the registered users in the placements 
            // p1.student_job_requests(); // to list all the job requests from the students 
            
            return 0;
        }
        else if (user_input == 3) {
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;

            std::cout << R"(
                        
                                                                          .__ .__ .__. __ ._..___ __.
                                                                          [ __[__)[__]/  ` | [__ (__ 
                                                                          [_./|  \|  |\__._|_[___.__)
                               
                        )" << '\n';
                cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------------------" << endl;

            return 1;
        }
        else if (user_input == 4)
        {

                        Sleep(200);
    system("color a");

            std::cout << R"(

                                                                          PLACEMENT MANAGEMENT SYSTEM 
                                                                           V E R S I O N : 1.0 BETA 
                                                                          Bhanupratap Singh (12212215)
                                                                © Wantedbear Productions | All Rights Reserved
                                                                           
                        )" << '\n'; 
        return 1;
        }
        else 
        // else {
            cout << "Invalid Input" << endl;
            return -1;
        // }
        // return 2;

    }

};
