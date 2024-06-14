//Binary Search Tree
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;
    
    //constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = NULL; // initializing ROOT to null
    }

    void insert(string element) // insert a node in the binary search tree
    {
        Node* newNode = new Node(element, NULL, NULL); // Allocate memory for thee new node
        newNode->info = element; //assign valuce to the data field of the new node
        newNode->leftchild = NULL; //make the left child of the new node point to NULL
        newNode->rightchild = NULL; // Make the right child of the neew node point to NULL

        Node* parent = NULL;
        Node* currentNode = NULL;
        search(element, parent, currentNode); // Locate the node which will be the parent of the node to be inserted
        
       
    }

};




int main()
{
    std::cout << "Hello World!\n";
}

