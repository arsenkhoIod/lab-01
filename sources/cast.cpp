//
// Created by arseny on 04.10.2020.
//
#include <cast.h>

//using namespace nlohmann;
//using namespace std;

std::string cast_group(std::any g)
{
  if (g.type() == typeid(size_t)){
    return "| "+std::to_string(std::any_cast<size_t>(g))+" ";
  }else{
    return "| "+std::any_cast<std::string>(g);
  }
}

std::string cast_avg(std::any a)
{
  if (a.type() == typeid(size_t)){
    return "| "+std::to_string(std::any_cast<size_t>(a));
  }else if (a.type() == typeid(std::string)){
    return "| "+std::any_cast<std::string>(a);
  }else if (a.type() == typeid(float)){
    return "| "+std::to_string(std::any_cast<float>(a));
  }
  return "";
}


std::string cast_debt(std::any d)
{
  if (d.type() == typeid(nullptr)){
    return "| null";
  }else if (d.type() == typeid(std::string)){
    return "| "+std::any_cast<std::string>(d);
  }else if (d.type() == typeid(std::vector<std::string>)){
    auto debts = std::any_cast<std::vector<std::string>>(d);
    if (debts.size() > 1)
    {
      return "| "+std::to_string(debts.size())+" items";
    }else{
      std::string s = "| ";
      return s+debts[0].data();
    }
  }
  return "";
}
