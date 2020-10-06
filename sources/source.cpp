// Copyright 2020 arsenkhoIod

#include <cast.h>
//using namespace nlohmann;
//using namespace std;




struct Student {
  std::string Name;
  std::any Group;
  std::any Avg;
  std::any Debt;
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

auto get_name(const nlohmann::json& j) -> std::string {
  return j.get<std::string>();
}

auto get_debt(const nlohmann::json& j) -> std::any {
  if (j.is_null())
    return nullptr;
  else if (j.is_string())
    return j.get<std::string>();
  else
    return j.get<std::vector<std::string> >();
}

auto get_avg(const nlohmann::json& j) -> std::any {
  if (j.is_null())
    return nullptr;
  else if (j.is_string())
    return j.get<std::string>();
  else if (j.is_number_float())
    return j.get<float>();
  else
    return j.get<std::size_t>();
}

auto get_group(const nlohmann::json& j) -> std::any {
  if (j.is_string())
    return j.get<std::string>();
  else
    return j.get<std::size_t>();
}

void from_json(const nlohmann::json& j, Student& s) {
  s.Name = get_name(j.at("name"));
  s.Group = get_group(j.at("group"));
  s.Avg = get_avg(j.at("avg"));
  s.Debt = get_debt(j.at("debt"));
}


int main(){
  nlohmann::json j;
  std::ifstream file;
  file.open("students.json");
  file >> j;
  file.close();
  std::vector<Student> students;
  for (auto const& student : j.at("items")) {
    Student st;
    nlohmann::from_json(student, st);
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
  std::cout << std::endl;
  std::cout << "| name          | group  ";
  std::cout <<"| avg      | debt          |"<< std::endl;
  std::cout << "|---------------|--------";
  std::cout <<"|----------|---------------|"<< std::endl;
  auto it = students.begin();
  std::cout << "| " << it->Name << "   ";
  std::cout << cast_group(it->Group);
  std::cout << "\t\t ";
  std::cout << cast_avg(it->Avg);
  std::cout << " \t";
  std::cout << cast_debt(it->Debt);
  std::cout << "\t\t\t|";
  std::cout << std::endl;
  std::cout << "|---------------|--------";
  std::cout <<"|----------|---------------|"<< std::endl;
  it++;
  std::cout << "| " << it->Name << "  ";
  std::cout << cast_group(it->Group);
  std::cout << "\t ";
  std::cout << cast_avg(it->Avg);
  std::cout << "\t\t";
  std::cout << cast_debt(it->Debt);
  std::cout << "\t\t\t|";
  std::cout << std::endl;
  std::cout << "|---------------|--------";
  std::cout <<"|----------|---------------|"<< std::endl;
  it++;
  std::cout << "| " << it->Name << " ";
  std::cout << cast_group(it->Group);
  std::cout << " ";
  std::cout << cast_avg(it->Avg);
  std::cout << " ";
  std::cout << cast_debt(it->Debt);
  std::cout << "\t\t|";
  std::cout << std::endl;
  std::cout << "|---------------|--------";
  std::cout <<"|----------|---------------|"<< std::endl;
  it++;
  students.end();
  return 0;
}
