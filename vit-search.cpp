#include <iostream>
#include <string>
#include <unordered_map>

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
  
  void put_course(string course){
    this->course = course;
  }

  string get_school(){
    return this->school;
  }

  void put_school(string school){
    this->school = school;
  }

  string get_specialization(){
    return this->specialization;
  }

  void put_specialization(string specialization){
    this->specialization = specialization;
  }

};

class VitianNode{
private:
public:
  unordered_map<char, VitianNode*> children;
  Vitian* contents;
};

class Trie{
private:
  VitianNode* node;
public:
  Trie(char letter){
    node->children[letter] = nullptr;
  }

  void insertion(string reg_no){
    // VitianNode* copy_node = node;
    // for(int i=0; i<reg_no.length()-1; i++){
    //   if(copy_node->children[reg_no[i]]){

    //   } else {

    //   }
    // }
    VitianNode* contents = nullptr;
    // if(isEnd){
    //   // inputs...
    // } 
    
  }

};  

int main(){
  
  return 0;
}

/*

There's gonna be n nodes, now each node will have a u_map within it that'll store the children

*/