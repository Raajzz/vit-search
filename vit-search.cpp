#include <iostream>
#include <string>

// since we're just doing a demo project, we're using std namespace globally to increase some time, this will be re-written later
using namespace std;

class Vitian{
private:
  string name;
  string reg_no;
  int current_year;
  string course;
  string school;
  string specialization;
public:

  Vitian(
    string name,
    string reg_no,
    int current_year,
    string course,
    string school,
    string specialization
    ){
      this->name = name;
      this->reg_no = reg_no;
      this->current_year = current_year;
      this->course = course;
      this->school = school;
      this->specialization = specialization;
    }
  
  // getters and setters

  string get_name(){
    return this->name;
  }

  void put_name(string name){
    this->name = name;
  }

  string get_reg_no(){
    return this->reg_no;
  }

  void put_reg_no(string reg_no){
    this->reg_no = reg_no;
  }

  int get_current_year(){
    return this->current_year;
  }

  void put_current_year(int current_year){
    this->current_year = current_year;
  }

  string get_course(){
    return this->course;
  }

  string get_school(){
    return this->school;
  }

  string get_specialization(){
    return this->specialization;
  }

};

int main(){
  
  return 0;
}