#include <iostream>
#include <queue>
using namespace std;

typedef char element;
struct Node {
	element data;
	Node* left;
	Node* right;
};

Node* CreateNode(element data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}


Node* InsertNode(Node* root, element data) {
	queue<Node*> q;
	q.push(root);
	if (root == NULL) {
		CreateNode(data);
		return root;
	}
	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if (temp->left != NULL)
			q.push(temp->left);
		else {
			temp->left = CreateNode(data);
			return root;
		}

		if (temp->right != NULL)
			q.push(temp->right);
		else {
			temp->right = CreateNode(data);
			return root;
		}
	}
}

Node* findNode(Node* node, element data) {
	if (node == NULL) return NULL;
	if (node->data == data) return node;
	Node* found = findNode(node->left, data);
	if (found != NULL) return found;
	return findNode(node->right, data);
}

void preorder(struct Node* node) {
	if (node == NULL) return;
	cout << node->data;
	preorder(node->left);
	preorder(node->right);
}
void inorder(struct Node* node) {
	if (node == NULL) return;
	inorder(node->left);
	cout << node->data;
	inorder(node->right);
}
void postorder(struct Node* node) {
	if (node == NULL) return;
	postorder(node->left);
	postorder(node->right);
	cout << node->data;
}
int main(){
	int n;
	cin >> n;
	Node* root = CreateNode('A');
	for (int i = 0; i < n; i++) {
		char mid, left, right;
		cin >> mid >> left >> right;
		Node* current = findNode(root, mid);
		if (left != '.') {
			Node* Left = CreateNode(left);
			current->left = Left;
		}
		if (right != '.') {
		    Node * Right = CreateNode(right);
			current->right = Right;
		}
	}
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	return 0;
}