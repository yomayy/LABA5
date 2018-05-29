#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>
#include <map>

using namespace std;

class Auth
{
  private:
    map<string, string> logins;

    // functions
    vector<string> split(const string &s, char delim);

    template <typename Out>
    void split(const string &s, char delim, Out result);

  public:
    Auth();
};