#include <bits/stdc++.h>
typedef long long ll;
#define nline "\n";
using namespace std;

int main()
{
    map<string, int> populationMap;
    populationMap.insert({"Maharashtra", 123567});
    populationMap.insert({"Punjab", 4856592});
    populationMap.insert({"UP", 8788565});
    populationMap.insert({"Delhi", 7894568});
    populationMap.insert({"Kerala", 456889});
    populationMap.insert({"MP", 7894556});

    cout << "***************Population of states in India**************" << nline;
    cout << "Size of population map is " << populationMap.size() << nline;

    cout << "The population map is given as follow: " << nline;
    for (auto i : populationMap)
    {
        cout << i.first << ": " << i.second << nline;
    }

    string state_name;
    cout << nline;
    cout << "Enter the name of the state: ";
    cin >> state_name;

    auto it = populationMap.find(state_name);

    if (it != populationMap.end())
    {
        cout << "The population of the state " << state_name << " is : " << it->second;
    }
    else
    {
        cout << state_name << " is not present in the records" << nline;
    }
    populationMap.clear();
}