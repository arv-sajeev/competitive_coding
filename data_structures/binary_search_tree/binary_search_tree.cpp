#include <iostream>

using namespace std;

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	Node(int key)
	{
		this->key   	= key;
		this->left	= nullptr;	
		this->right	= nullptr;
	}
};

struct Node* insert_node(struct Node* head,int key)
{
	if (head == NULL)
		return new struct Node(key);
	if (key <= head->key)
		head->left = insert_node(head->left,key);
	else
		head->right = insert_node(head->right,key);
	return head;
}

struct Node* find_min(struct Node* head)
{
	if (head->left == nullptr)
		return head;
	return find_min(head->left);
}

struct Node* search_key(struct Node* head,int key)
{
	if (head == nullptr)
		return head;
	if (head->key == key)
		return head;
	if (key < head->key)
		return search_key(head->left,key);
	if (key > head->key)
		return search_key(head->right,key);
	return nullptr;
}

struct Node* delete_node(struct Node* head,int key)
{
	cout << "In delete node for" << key << "at :: " << head->key << endl;
	if (head == nullptr)
		return head;
	if (key < head->key)
		head->left = delete_node(head->left,key);
	if (key > head->key)
		head->right = delete_node(head->right,key);
	// WE found our guy
	else {
		// Node with no children or children only larger than it 
		cout << "found key" << endl;
		if (head->left == nullptr)
		{
			cout << "\tCase 1"  << endl;
			struct Node* temp = head->right;
			delete head;
			return temp;	// This handles the case where there are no children as well since temp would become nullptr
		}

		if (head->right == nullptr)
		{
			cout << "\tCase 2"  << endl;
			struct Node* temp = head->left;
			delete head;
			return temp;	// This handles the case where there are no children as well since temp would become nullptr
		}

		// When it has both children 

		cout << "\tCase 3"  << endl;
		struct Node* temp = find_min(head->right);
		head->key = temp->key;
		head->right = delete_node(head->right,temp->key);
	}
	return head;
}

void inorder(struct Node *head)
{
	if (head == NULL)
		return;
	inorder(head->left);
	cout << head->key  << " ";
	inorder(head->right);
}

int main()
{
	int n;
	cout << "Enter the key";
	cin  >>  n;
	struct Node *head = nullptr;
	struct Node* temp;
	head = insert_node(head,n);
	inorder(head);
	cout << endl;
	head = insert_node(head,2);
	inorder(head);
	cout << endl;
	temp = find_min(head);
	cout << temp->key << endl;
	temp = search_key(head,n);
	cout << temp->key << endl;
	temp = search_key(head,123451235);
	if (temp == nullptr)
		cout << "Not found" << endl;
	for (int i = 7;i < 20;i++)
	{
		head = insert_node(head,i);
	}
	inorder(head);
	delete_node(head,7);
	cout << endl;
	inorder(head);
	delete_node(head,19);
	cout << endl;
	inorder(head);
	delete_node(head,2);
	cout << endl;
	inorder(head);
}
