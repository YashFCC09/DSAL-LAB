#include<iostream>
#include<vector>
using namespace std;


class Node {
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    Node* newnode = new Node(val);
    if(root == NULL) {
        root = newnode;
        return root;
    }
    
    if(val < root->data) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return root;
}

bool search(Node* root, int val) {
    if (root == NULL) return false; 
    
    if (root->data == val) return true;  
    
    if (val < root->data) {
        return search(root->left, val); 
    } else {
        return search(root->right, val);  
    }
}
int gcount=0;

int max(Node* root){
  
	if(root->right==NULL)return root->data;
	return max(root->right);
	}
int min(Node* root){
	if(root->left==NULL)return root->data;
    if(root==NULL)return -1;
	
	return max(root->left);
	}
	

void display(Node* root) {
    if (root == NULL) return;
    
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

int main() {
    Node* root = NULL;
    int ch = 10;
    	//Node * temp1=insert(root,45);
//	Node * temp2=insert(temp1,43);
	//Node* temp3=insert(temp2,41);
	//Node* temp4=insert(temp3,34);
	//Node* temp5=insert(temp4,67);
	//display(temp5);
	
    
    do {
        cout << "Enter the choice:\n";
        cout << "1. Insert the node\n";
        cout << "2. Search the node\n";
        cout << "3. Display the tree\n";
        cout<< "4.maximum value\n";
        cout<<"5.minimum value\n";
        
        cout << "4. Exit\n";
        cin >> ch;
        
        switch(ch) {
            case 1: {
                int val;
                cout << "Enter the value: ";
                cin >> val;
                root = insert(root, val);
                break;
            }
            case 2: {
                int val;
                cout << "Enter the value to search: ";
                cin >> val;
                Node* temp=root;
                if (search(temp, val)==true) {
                    cout << "Node found!" << endl;
                } else {
                    cout << "Node not found!" << endl;
                }
                break;
            }
            case 3: {
                cout << "Tree elements inorder order: ";
                Node* temp1=root;
                display(temp1);
                cout << endl;
                break;
            }
            case 4: {
            	cout<<"The maximum value is: ";
            	Node* temp2=root;
                cout<<max(temp2)<<endl;
                break;
            }
            case 5:
            	cout<<"The minimum value is: ";
            	Node* temp6=root;
            	cout<<min(temp6)<<endl;
            	break;
          // default:
                //cout << "Invalid input" << endl;
            //    break;
        }
    } while(ch != 6);
    
    return 0;
}

