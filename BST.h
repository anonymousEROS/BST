//
// Created by BLKKAP on 2/14/22.
//

#ifndef UNTITLED_BST_H
#define UNTITLED_BST_H

#include <cstddef>
#include <iostream>

using namespace std;


class BST {
private:
    struct TreeNode {
        TreeNode(int value): val(value), left(NULL), right(NULL) {

        }
        int val;
        TreeNode* left;
        TreeNode* right;
    };
    TreeNode* root;
// private function declarations here
    void insert(TreeNode*t, int val);
    void search(TreeNode*t, int val);
    TreeNode * deleteNode(TreeNode *t, int val);
    void inOrder(TreeNode *t);
    void preOrder(TreeNode *t);
    void postOrder(TreeNode *t);
    void deleteTree(TreeNode * t);
    int getHeight(TreeNode *t);
    int numOfNodes(TreeNode * t);
    bool HeightBal(TreeNode *t);
    bool AncestorsNodes(TreeNode *t, int val);


public:
// public function declarations here
    BST();

    TreeNode * getRoot(){
        return root;
    }

    void insert(int val){
        insert(root, val);
    }

    void search(int val){
        search(root, val);
    }

    int getHeightDis(){
        getHeight(root);
}

    int getNumOfNodes(){
        numOfNodes(root);
    }


    void deleteNode(int val){
        deleteNode(root, val);
    }

    void inOrder(){
        inOrder(root);
    }

    void preOrder(){
        preOrder(root);
    }

    void postOrder(){
        postOrder(root);
    }

    void deleteTree() {
        deleteTree(root);
    }
    bool BalCheck(){
        HeightBal(root);

    }
    int MaxMin(int val ){
        AncestorsNodes(root, val);
    }





};




#endif //UNTITLED_BST_H
