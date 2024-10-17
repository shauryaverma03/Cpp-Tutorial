# include <iostream>
# include <queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;
    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }   
};

node* buildTree(node* root) {
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node (data);

    if (data == -1) {
        return NULL;
    }

    cout<<"Enter data for inserting  in left: "<<data<<endl;
    root -> left = buildTree(root->left);
    cout<<"Enter data for inserting in right: "<<data<<endl;
    root->right = buildTree(root->right);
    return root;

}

void LevelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front(); 
        q.pop();

        if (temp == NULL) { // Purana level complete ho chuka hai
            cout<<endl;
            if (!q.empty()) {  // queue still have some child nodes
                q.push(NULL);
            }
        }
        else {
            cout<<temp->data<<" ";
            if (temp -> left) {
                q.push(temp->left);
            }

            if (temp -> right) {
                q.push(temp->right);
            }
        }
    }
}

int main() {
    node* root = NULL;

    // Creating a tree 
    root = buildTree(root);

    // 1 3 7-1-1 11 -1 -1 5 17 -1 -1 -1
    // Level Order
    cout<<"Printing the level order of traversal output: "<<endl;
    LevelOrderTraversal(root);

    return 0;
}
