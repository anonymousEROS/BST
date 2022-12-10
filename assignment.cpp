//
// Created by BLKKAP on 2/14/22.
//

#include "BST.h"
#include <iostream>

using namespace std;
struct Treenode * t;

//void BST:: getHeightDis(){
//    cout<< getHeight(root);
//}

int main(){


    int x,y;
    BST myBST;




    do{
        cout << "Please select an operation to test:\n" << endl;
        cout << "1. Insert a node" << endl
             << "2. Search for a value" << endl
             << "3. Find predecessor for an existing value" << endl
             << "3. Find successor for an existing value" << endl
             << "5. Find height of tree" << endl
             << "6. Find total number of nodes in tree" << endl
             << "7. Delete a node" << endl
             << "8. Traverse inorder and display" << endl
             << "9. Traverse preorder and display" << endl
             << "10. Traverse postorder and display" << endl
             << "11. Check if tree is balanced" << endl
             << "12. Destroy tree" << endl
             << "0. Quit" << endl;
        cout << "Enter operation to test (0 to quit): ";
        cin >> x;



        switch(x){
            case 1:
                cout<< "Insert node: " ;
                cin>> y;
                myBST.insert(y);
                break;

        }
        switch(x) {
            case 2:
                cout << "Search: " ;
                cin>> y;
                myBST.search(y); cout << endl;
                break;
        }
        switch(x) {
            case 3:
                cout << "Find min and max: " ;
                cin>> y;
                myBST.MaxMin(y); cout << endl;
                break;
        }

        switch(x) {
            case 4:
                cout<< "Height: ";
                cout <<  myBST.getHeightDis(); cout<< endl;
                break;
        }
        switch(x) {
            case 5:
                cout<< "Num of Nodes: ";
                cout <<  myBST.getNumOfNodes(); cout<< endl;
                break;
        }

        switch(x) {
            case 6:
                cout << "Delete node: " << endl;
                cin >> y;
                myBST.deleteNode(y); cout << endl;
                break;
        }
        switch(x) {
            case 7:
                cout << "inOrder: " << endl;
                myBST.inOrder(); cout << endl;
                break;
        }
        switch(x) {
            case 8:
                cout << "preOrder: " << endl;
                myBST.preOrder(); cout << endl;
                break;
        }
        switch(x) {
            case 9:
                cout << "postOrder: " << endl;
                myBST.postOrder(); cout << endl;
                break;
        }
        switch(x) {
            case 10:
                cout << "Balance check: ";
                if(myBST.BalCheck()){
                    cout<< "1" << endl;
                }else{
                    cout << "-1" << endl;
                }
                break;
        }

        switch(x) {
            case 11:
                cout << "Tree DELETED" << endl;
                myBST.deleteTree(); cout<< endl;
                break;
        }




    }


    while (x != 0);

    return 0;
    }

//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 1
//Insert node: 1
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 1
//Insert node: 2
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 1
//Insert node: 3
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 1
//Insert node: 4
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 7
//inOrder:
//1 2 3 4
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 6
//Delete node:
//2
//
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 7
//inOrder:
//1 3 4
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 1
//Insert node: 2
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 2
//Search: 1
//1
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 2
//Search: 5
//-1
//
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 4
//Height: 2
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 5
//Num of Nodes: 2
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 8
//preOrder:
//1 3 2 4
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 9
//postOrder:
//2 4 3 1
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 10
//Balance check: -1
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 11
//Tree DELETED
//
//Deleting node: 2
//Deleting node: 4
//Deleting node: 3
//Deleting node: 1
//Please select an operation to test:
//
//1. Insert a node
//2. Search for a value
//3. Find predecessor for an existing value
//4. Find successor for an existing value
//5. Find height of tree
//6. Find total number of nodes in tree
//7. Delete a node
//8. Traverse inorder and display
//9. Traverse preorder and display
//10. Traverse postorder and display
//11. Check if tree is balanced
//12. Destroy tree
//0. Quit
//        Enter operation to test (0 to quit): 0
//
//Process finished with exit code 0