// Add a node at the head
// Add a node at the Tail
// Add a node at the Position

# include <iostream>
using namespace std;

class Node{
    public:
    int val; 
    Node* next;

    Node (int data) {
        val = data;
        next = NULL;
    }
};

void InsertatHead(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void InsertatTail(Node* &head, int val) {
    Node* new_node = new Node(val);
    Node* temp = head;
    while (temp->next!=NULL) {
        temp=temp->next;
    }
    // temp has reached the last node
    temp->next = new_node;
}

void InsertatPosition(Node* head, int val, int pos) {
    if (pos==0) {
        InsertatHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1) {
        temp = temp->next;
        current_pos++;

    }
    // temp is pointing to node at pos - 1
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;

    }
    cout<<"NULL"<<endl; 
}

int main() {
    // Node* n = new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;

    Node* head = NULL;
    InsertatHead(head, 2);
    display(head);
    InsertatHead(head, 1);
    display(head);
    InsertatTail(head, 3);
    display(head);
    InsertatPosition(head,4,1);
    display(head);


    return 0;
}
