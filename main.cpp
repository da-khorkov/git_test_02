#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

void MyFunc();

using namespace std;

struct ListItem
{
    int num;
    string str;
};

int main()
{
    cout << "Hello world!" << endl;
    cout << "Another hello!" << endl;

    vector<ListItem> v;
    for(int i=0; i<100; i++)
    {
        ListItem cur = {i, "string"};
        v.push_back(cur);
    }

    for(int i=0; i<v.size(); i++)
    {
        const ListItem *cur = &v[i];
        const string *p_str = &cur->str;
        cout << cur << " : " << p_str << endl;
    }

    return 0;
}
