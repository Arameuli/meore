#include <iostream>
#include<vector>
#include<algorithm>
#include"Mdinare.h"
using namespace std;
istream& operator >>(istream& in, Mdinare& f) {
    in>>f.name>>f.location>>f.length;
    return in;
}
ostream& operator <<(ostream& out, Mdinare& f) {
    out << f.name << " " << f.location << " " << f.length;
    return out;
}

int main()
{
    Mdinare a;
    vector<Mdinare> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s[i].name >> s[i].location >> s[i].length;
    }
    int c=0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size() - 1; j++) {
            if (s[j].length > s[j + 1].length)
                swap(s[j], s[j + 1]);
        }
    }
    cout << endl;
    cout << s[0].name << " " << s[0].location << " " << s[0].length << endl;
}


