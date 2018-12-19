#include <iostream>
#include <fstream>
using namespace std;
class userdata
{
  std::string user_name;
  int user_id;
  std::string user_phonenumber;

public:
  userdata(std::string & input_name, int input_id, std::string input_phonenumber); // this is constructor
  ~userdata(){}; // this is destructor
  int get_id();
  std::string get_name();
  std::string get_phonenumber();

};

userdata::userdata(std::string & input_name, int input_id, std::string input_phonenumber)
{
  user_name = input_name;
  user_id = input_id;
  user_phonenumber = input_phonenumber;
}

int userdata::get_id()
{
  return user_id;
}

std::string userdata::get_name()
{
  return user_name;
}

std::string userdata::get_phonenumber()
{
  return user_phonenumber;
}

class hw6 : public userdata
{
 int zip_code;
 std::string blood_type;
 std::string address;
}

int main()
{
  // "ID First_Name Last_Name phone_number Zip_Code Blood_Type Address";
  ifstream firstFile("entry1.txt");
    while(file_ >> user_id >> first_name >> last_name >> phone_number >> zip_code >> blood_type >> address)
    {
      ofstream myfile;
      myfile.open("newfile1.txt");
      myfile << first_name << endl;
      myfile.open("newfile2.txt");
      myfile << last_name << endl;
      myfile.open("newfile3.txt");
      myfile << zip_code << endl;
    }
  ifstream firstFile("entry2.txt");
    while(file_ >> user_id >> first_name >> last_name >> phone_number >> zip_code >> blood_type >> address)
    {
      ofstream myfile;
      myfile.open("newfile1.txt");
      myfile << first_name << endl;
      myfile.open("newfile2.txt");
      myfile << last_name << endl;
      myfile.open("newfile3.txt");
      myfile << zip_code << endl;
    }
  ifstream firstFile("entry3.txt");
    while(file_ >> user_id >> first_name >> last_name >> phone_number >> zip_code >> blood_type >> address)
    {
      ofstream myfile;
      myfile.open("newfile1.txt");
      myfile << first_name << endl;
      myfile.open("newfile2.txt");
      myfile << last_name << endl;
      myfile.open("newfile3.txt");
      myfile << zip_code << endl;
    }
  ifstream firstFile("entry4.txt");
    while(file_ >> user_id >> first_name >> last_name >> phone_number >> zip_code >> blood_type >> address)
    {
      ofstream myfile;
      myfile.open("newfile1.txt");
      myfile << first_name << endl;
      myfile.open("newfile2.txt");
      myfile << last_name << endl;
      myfile.open("newfile3.txt");
      myfile << zip_code << endl;
    }
  ifstream firstFile("entry5.txt");
    while(file_ >> user_id >> first_name >> last_name >> phone_number >> zip_code >> blood_type >> address)
    {
      ofstream myfile;
      myfile.open("newfile1.txt");
      myfile << first_name << endl;
      myfile.open("newfile2.txt");
      myfile << last_name << endl;
      myfile.open("newfile3.txt");
      myfile << zip_code << endl;
    }
  return 0;
}