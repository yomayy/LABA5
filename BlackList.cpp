#include "BlackList.h"

bool BlackList::isBlack(string IP){

    for (int i = 0; i < ips.size(); i++)
        if(ips[i]==IP)
            return true;

    return false;
}


BlackList::BlackList(){

    ifstream in("blacklist.txt");
    char text[32];

    while(!in.eof()){
        in.getline(text, 32);
        string buf(text);
        ips.push_back(buf);
    }

}