#include <iostream>
using namespace std;

struct Node {
    float value;
    string review;
    Node *next;
};

void addToHead(Node *&, float, string); 
    

int main() 
{
    int hot;
    double rating;
    string comment;
    Node *head = nullptr;

    cout << "Which linked list method should we use?\n";
    cout << "[1] New nodes are added to the head of each linked list\n";
    cout << "[2] New nodes are added to the tail of each linked list\n";
    cin >> hot;
    if (hot == 1)
    {
        char adder;
        while(adder == 'y')
        {
            cout << "Enter review rating 0-5: \n";
            cin >> rating;
            cout << "Enter review comment: \n";
            cin >> comment;
            cout << "Enter another review? Y/N: \n";
            cin >> adder;
            adder = tolower(adder);
        }


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

void addToHead(Node *&head, float val, string com) 
{
    Node *newNode = new Node();
    newNode->value = val;
    newNode->review = com;
    newNode->next = head;
    head = newNode;
}