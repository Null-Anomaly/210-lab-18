#include <iostream>
using namespace std;

struct Node {
    float value;
    Node *next;
};



int main() 
{
    int hot;
    double rating;
    string comment;
    cout << "Which linked list method should we use?\n";
    cout << "[1] New nodes are added to the head of each linked list\n";
    cout << "[2] New nodes are added to the tail of each linked list\n";
    cin >> hot;
    if (hot == 1)
    {
        cout << "Enter review rating 0-5: \n";
        cin >> rating;
        cout << "Enter review comment: \n";
        cin >> comment;
    }
    else if (hot == 2)
    {

    }
    else
    {
        cout << "Invalid input. Please enter 1 or 2." << endl;
    }

    return 0;
}