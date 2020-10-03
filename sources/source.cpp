// Copyright 2018 Your Name <your_email>
#include <header.hpp>
#include <fstream>
#include <iostream>
#include <any>
using namespace nlohmann;
using namespace std;




struct Student {
  string Name;
  any Group;
  any Avg;
  any Debt;

};
/*
void to_debt(const json& j,vector<string>& d ){

  for (auto const& debt : j) {
    d.push_back(debt);
  }

}

void from_json(const json& j, Student& s) {
  j.at("name").get_to(s.Name);
  j.at("group").get_to(s.Group);
  j.at("avg").get_to(s.Avg);
  to_debt(j.at("debt"), s.Debt);


}*/

auto get_name(const json& j) -> std::string {
  return j.get<std::string>();
}

auto get_debt(const json& j) -> std::any {
  if (j.is_null())
    return nullptr;
  else if (j.is_string())
    return j.get<std::string>();
  else
    return j.get<std::vector<std::string> >();
}

auto get_avg(const json& j) -> std::any {
  if (j.is_null())
    return nullptr;
  else if (j.is_string())
    return j.get<std::string>();
  else if (j.is_number_float())
    return j.get<double>();
  else
    return j.get<std::size_t>();
}

auto get_group(const json& j) -> std::any {
  if (j.is_string())
    return j.get<std::string>();
  else
    return j.get<std::size_t>();
}

void from_json(const json& j, Student& s) {
  s.Name = get_name(j.at("name"));
  s.Group = get_group(j.at("group"));
  s.Avg = get_avg(j.at("avg"));
  s.Debt = get_debt(j.at("debt"));
}

void cast_group(any g)
{
  if(g.type()==typeid(size_t)){
    cout<<"| "<<any_cast<size_t>(g)<<" ";
  }else{
    cout<<"| "<<any_cast<string>(g);
  }
}

void cast_avg(any a)
{
  if(a.type()==typeid(size_t)){
    cout<<"| "<<any_cast<size_t>(a);
  }else if(a.type()==typeid(string)){
    cout<<"| "<<any_cast<string>(a);
  }else if(a.type()==typeid(double)){
    cout<<"| "<<any_cast<double>(a);
  }
}


void cast_debt(any d)
{
  if(d.type()==typeid(nullptr)){
    cout<<"| null";
  }else if(d.type()==typeid(string)){
    cout<<"| "<<any_cast<string>(d);
  }else if(d.type()==typeid(vector<string>)){
    auto debts=any_cast<vector<string>>(d);
    if(debts.size() > 1)
    {
      cout <<"| "<< debts.size() << " items";
    }
    else
    {
      cout <<"| "<< debts[0].data();
    }
  }
}
int main(){
  json j;
  ifstream file;
  file.open("students.json");
  file>>j;
  file.close();
  vector<Student> students;
  for (auto const& student : j.at("items")) {
    Student st;
    nlohmann::from_json(student,st);
    students.push_back(st);

  }
  /*
  cout<<endl;
  cout<<"| name          | group  | avg  | debt          |"<<endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  for(auto it=students.begin();it!=students.end();it++){
    cout<<"| "<<it->Name<<" ";
    cast_group(it->Group);
    cast_avg(it->Avg);
    cast_debt(it->Debt);
    cout << endl;
    cout<<"|---------------|--------|------|---------------|"<<endl;
  }*/
  /*
  cout<<"| name          | group  | avg  | debt          |"<<endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  cout<<"| "<<students[0].Name<<"\t| "<<students[0].Group<<students[0].Avg<<"\t| "<<students[0].Debt<<"|"<<endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  cout<<"| "<<students[0].Name<<"\t| "<<students[0].Group<<students[0].Avg<<"\t| "<<students[0].Debt<<"|"<<endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  cout<<"| "<<students[0].Name<<"\t| "<<students[0].Group<<students[0].Avg<<"\t| "<<students[0].Debt<<"|"<<endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  */
  cout<<endl;
  cout<<"| name          | group  | avg  | debt          |"<<endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  auto it=students.begin();
  cout<<"| "<<it->Name<<"   ";
  cast_group(it->Group);
  cout<<"\t\t ";
  cast_avg(it->Avg);
  cout<<" ";
  cast_debt(it->Debt);
  cout<<"\t\t\t|";
  cout << endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  it++;
  cout<<"| "<<it->Name<<"  ";
  cast_group(it->Group);
  cout<<"\t ";
  cast_avg(it->Avg);
  cout<<"\t";
  cast_debt(it->Debt);
  cout<<"\t\t\t|";
  cout << endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  it++;
  cout<<"| "<<it->Name<<" ";
  cast_group(it->Group);
  cout<<" ";
  cast_avg(it->Avg);
  cout<<" ";
  cast_debt(it->Debt);
  cout<<"\t\t|";
  cout << endl;
  cout<<"|---------------|--------|------|---------------|"<<endl;
  it++;
  students.end();
  return 0;
}