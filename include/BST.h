#ifndef BST_H
#define BST_H
#include "queue.h"

class BST {
    private:
        struct TreeNode {
            int val;
            TreeNode *left;
            TreeNode *right;
            TreeNode(int val) : val(val), left(nullptr), right(nullptr){}
        };
        
        TreeNode *root;
        bool insert(int value, TreeNode*& node);
        bool search(int value, TreeNode* node);
        int count(TreeNode *node);
        int height(TreeNode *node);
        bool remove(int value, TreeNode *&node);
        void in_order_traversal(TreeNode *node);
        void pre_order_traversal(TreeNode *node);
        void post_order_traversal(TreeNode *node);
        
    
    public:
        BST();
        bool insert(int val);
        bool search(int val);
        int count();
        int height();
        bool remove(int val);
        void in_order_traversal();
        void pre_order_traversal();
        void post_order_traversal();
        void level_order_traversal();

};
#endif
