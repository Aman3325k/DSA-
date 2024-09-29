#include<iostream>
#include<vector>
using namespace std;

void find(int n, vector<string>& ans, string& temp, int zero, int one) 
{
    if(temp.size() == n) 
    {
        ans.push_back(temp);  // Corrected this line to add 'temp'
        return;
    }

    // You can add '0' only if 'one' is greater than 'zero'
    if(one > zero) 
    {
        temp.push_back('0');
        find(n, ans, temp, zero + 1, one); // Recursively call for next state
        temp.pop_back();
    }

    // Always allowed to add '1'
    temp.push_back('1');
    find(n, ans, temp, zero, one + 1);  // Recursively call for next state
    temp.pop_back();
}

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<string> ans;
    string temp = "";
    
    find(n, ans, temp, 0, 0);

    // Output the results
    for(auto &s : ans)
    {
        cout << s << endl;
    }

    return 0;
}