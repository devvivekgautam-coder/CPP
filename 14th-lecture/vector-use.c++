#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr = {10,20,30,40,50,60,100,90};
    
    arr.push_back(56);
    arr.push_back(5);
    arr.pop_back();
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << arr.at(5);
    cout << arr.front();
    cout << arr.back();
    arr.insert(arr.begin() + 6,501);
    arr.insert(arr.end() + 5,501);
    arr.erase(arr.begin() + 3);
    arr.erase(arr.end() + 1);
    
    for (int data : arr)
    {
        cout << data << " ";
    }
    
    arr.clear();
    cout << arr.empty();

    return 0;
}