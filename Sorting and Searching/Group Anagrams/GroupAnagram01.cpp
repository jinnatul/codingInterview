#include<bits/stdc++.h>

using namespace std;

void GroupAnagrams()
{
    int num;
    cin >> num;

    vector <string> inputStr;
    for (int i = 0; i < num; ++i) {
        string str;
        cin >> str;
        inputStr.push_back(str);
    }

    // the first value will hold the key, the second vector is used to hold the multiple values.
    unordered_map<string, vector<string> > mp_map;
    vector <vector<string> > finalSet;

    for (int i = 0; i < inputStr.size(); ++i) {
        // take value at the index as a key
        string key = inputStr[i];

        //sort the key
        sort(key.begin(), key.end());

        // add the value to that key
        mp_map[key].push_back(inputStr[i]);
    }

    for (auto each : mp_map) {
        // add all the values in the map to the final set
        finalSet.push_back(each.second);
    }

    // print the output
    for (int i = 0; i < finalSet.size(); ++i) {
        if(finalSet[i].size() > 0) {
            for (int j = 0; j < finalSet[i].size(); ++j) {
                cout << finalSet[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {

    GroupAnagrams();

}
