#include "../include/BST.h"

BST::BST(){
    root = nullptr;
}

bool BST::insert(int val, TreeNode *&node){
    if(node == nullptr){
        node = new TreeNode(val);
        return true;
    }

    if(node->val > val){
        return insert(val, node->left);
    }
    else if(node->val < val){
        return insert(val, node->right);
    }
    else{
        return false;
    }
}


bool BST::insert(int val){
    return insert(val, root);
}


bool BST::search(int val, TreeNode* node){
    if(node == nullptr){
        return false;
    }
    if(node->val == val){
        return true;
    }
    else if(node->val < val){
        return search(val, node->right);
    }
    else{
        return search(val, node->left);
    }
}


bool BST::search(int val){
    return search(val, root);
}


int BST::count(TreeNode *node){
    if(node == nullptr){
        return 0;
    }
    else{
        return 1 + count(node->left) + count(node->right);
    }
}


int BST::count(){
    return count(root);
}


int BST::height(TreeNode *node){
    if(node == nullptr){
        return -1;
    }

    int left = height(node->left);
    int right = height(node->right);

    if(left > right){
        return 1 + left;
    }
    else{
        return 1 + right;
    }
}


int BST::height(){
    return height(root);
}

bool BST::remove(int val, TreeNode *&node){
    if(node == nullptr){
        return false;
    }

    if(node->val < val){
        return remove(val, node->right);
    }
    else if(node->val > val){
        return remove(val, node->left);
    }
    else{
        if(node->right == nullptr && node->left == nullptr){
            delete node;
            node = nullptr;
            return true;
        }
        else if(node->right == nullptr){
            TreeNode *temp = node;
            node = node->left;
            delete temp;
            return true;
        }
        else if(node->left ==nullptr){
            TreeNode *temp = node;
            node = node->right;
            delete temp;
            return true;
        }
        else{
            TreeNode *candidate = node->left;
            while(candidate->right != nullptr){
                candidate = candidate->right;
            }
            node->val = candidate->val;
            return remove(candidate->val, node->left);
        }
    }
}


bool BST::remove(int val){
    return remove(val,root);
}