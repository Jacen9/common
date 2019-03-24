/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> list;
        if (root)
        {
            stack<TreeNode*> stack;
            TreeNode* cur = root;
            while (!stack.empty() || cur != nullptr)
            {
                while (cur != nullptr)
                {
                    stack.push(cur);
                    cur = cur->left;

                }

                cur = stack.top();
                stack.pop();
                list.push_back(cur->val);
                cur = cur->right;
            }
        }
        return list;
    }
};
