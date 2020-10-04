//
// Created by arseny on 04.10.2020.
//
#include <cast.h>

using namespace nlohmann;
using namespace std;

string cast_group(any g)
{
  if(g.type()==typeid(size_t)){
    return "| "+to_string(any_cast<size_t>(g))+" ";
  }else{
    return "| "+any_cast<string>(g);
  }
}

string cast_avg(any a)
{
  if(a.type()==typeid(size_t)){
    return "| "+to_string(any_cast<size_t>(a));
  }else if(a.type()==typeid(string)){
    return "| "+any_cast<string>(a);
  }else if(a.type()==typeid(float)){
    return "| "+to_string(any_cast<float>(a));
  }
  return "";
}


string cast_debt(any d)
{
  if(d.type()==typeid(nullptr)){
    return "| null";
  }else if(d.type()==typeid(string)){
    return "| "+any_cast<string>(d);
  }else if(d.type()==typeid(vector<string>)){
    auto debts=any_cast<vector<string>>(d);
    if(debts.size() > 1)
    {
      return "| "+to_string(debts.size())+ " items";
    }
    else
    {
      string s="| ";
      return s+debts[0].data();
    }
  }
  return "";
}