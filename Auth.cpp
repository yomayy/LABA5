#include "Auth.h"


template <typename Out>
void Auth::split(const string &s, char delim, Out result)
{
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim))
    {
        *(result++) = item;
    }
}

vector<string> Auth::split(const string &s, char delim)
{
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}


Auth::Auth()
{
    ifstream in("logins.txt");

    while(!in.eof()){
        char buf[64];
        in.getline(buf, 64);
        string str(buf);

        //0:incident

        vector<string> id_login = split(str, ':');
        pair <string, string> id_login_p (id_login[0], id_login[1]);

        cout << id_login[0] << endl;
        cout << id_login[1] << endl;

        logins.insert(id_login_p);
    }
}