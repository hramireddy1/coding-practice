/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(not root) return NULL;
        queue<Node*> q1, q2;
        q1.push(root);
        while(not q1.empty() or not q2.empty())
        {
            Node* next_node = NULL, curr;
            while(not q1.empty())
            {
                Node* curr = q1.front();
                q1.pop();
                curr->next = next_node;
                if(curr->left)
                {
                    q2.push(curr->right);
                    q2.push(curr->left);
                }
                
                next_node = curr;
            }
            
            next_node = NULL;
            while(not q2.empty())
            {
                Node* curr = q2.front();
                q2.pop();
                curr->next = next_node;
                if(curr->left)
                {
                    q1.push(curr->right);
                    q1.push(curr->left);
                }
                next_node = curr;
            }
        }
        return root;
    }
};