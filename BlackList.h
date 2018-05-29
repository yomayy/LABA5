#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class BlackList
{

public:
    BlackList();
    bool isBlack(string IP);
    
    
    vector<string> ips;

};

