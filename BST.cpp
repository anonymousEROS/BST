//
// Created by BLKKAP on 2/14/22.
//

#include "BST.h"
#include <iostream>
#include <cmath>
#include <stddef.h>


using namespace std;
int n =1;

BST::BST()
{
    root = nullptr;
}

void BST::insert(TreeNode *t, int val){
    if (!t) {
        t = new TreeNode(val);
        root = t;
    } else if (val < t->val) {
        if (!t->left) {
            TreeNode *treeTemp = new TreeNode(val);
            t->left = treeTemp;
        } else
            insert(t->left, val);
    } else {
        if (!t->right) {
            TreeNode *treeTemp = new TreeNode(val);
            t->right = treeTemp;
        } else
            insert(t->right, val);
    };
}

void BST::search(TreeNode *t, int val){
    int depth = 0;
    TreeNode *temp = new TreeNode(val);
    temp = root;
    while(temp != nullptr) {
        depth++;
        if(temp->val == val) {
            cout<<" 1 "<< endl;
            return;
        } else if(temp->val > val)
            temp = temp->left;
        else
            temp = temp->right;
    }
    cout<<"\n -1";
    return;
}


int BST::getHeight(TreeNode* t)
{
    if (t == NULL)
        return 0;
    else
    {
        int lDepth = getHeight(t->left);
        int rDepth = getHeight(t->right);


        if (lDepth >= rDepth)
            return(lDepth + 1);
        else
            return(rDepth + 1);
    }
}

int BST::numOfNodes(TreeNode *t) {
    if( t == NULL)
        return 0;
    else
    if( t->left == NULL && t->right == NULL)
        return 1;
    else
        return(1 + (numOfNodes(t->left) + numOfNodes(t->right)));
}



BST::TreeNode * BST::deleteNode(TreeNode *t, int val) {
    if (!t)
        return t;
    if (t->val > val) {
        t->left = deleteNode(t->left, val);
    } else if (t->val < val) {
        t->right = deleteNode(t->right, val);
    } else {
        // Left child NULL
        if (t->left == nullptr) {
            TreeNode *temp = t->right;
            free(t);
            return temp;
        }
            // Right child NULL
        else if (t->right == nullptr) {
            TreeNode *temp = t->left;
            free(t);
            return temp;
        }
        else {

            TreeNode *temp = t -> right;
            // Finding the leftmost node in right subtree
            while (temp -> left != nullptr) temp = temp -> left;
            // Changing value of root
            t -> val = temp -> val;
            // Deleting the leftmost node;
            t -> right = deleteNode(t -> right, temp -> val);
        }
    }
    return t;
}




void BST::inOrder(TreeNode * t){
    if(!t)
        return;
    inOrder(t->left);
    cout<< t-> val << " ";
    inOrder(t->right);
}

void BST::preOrder(TreeNode * t){
    if(!t)
        return;
    cout<< t-> val << " ";
    preOrder(t->left);
    preOrder(t->right);
}

void BST::postOrder(TreeNode * t){
    if(!t)
        return;
    postOrder(t->left);
    postOrder(t->right);
    cout<< t-> val << " ";
}


//Check whether tree is balanced or not
bool BST:: HeightBal(TreeNode* t) {
    if (!t) {
        return true;
    }

    int leftHt = getHeight(root->left);
    int rightHt = getHeight(root->right);

    if (abs(leftHt - rightHt) > 1)
        return false;
    return HeightBal(root->left) && HeightBal(root->right);
}





void BST::deleteTree(TreeNode *t){
    if (!t)
        return;

    /* first delete both subtrees */
    deleteTree(t->left);
    deleteTree(t->right);

    /* then delete the node */
    cout << "\n Deleting node: " << t->val;
    delete t;
}

bool BST::AncestorsNodes(TreeNode *t, int val) {
    if (!t)
        return false;
    if (t->val == val)
        return true;
    if (AncestorsNodes(t->left, val) || AncestorsNodes(t->right, val)) {
        cout << t->val << " ";
        return true;
    }
    return false;

}
