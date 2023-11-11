#include<iostream>
#include<vector>

using namespace std;

class TreeNode {

public :

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};

vector<int> path;
bool flag = false; // assume, we have not yet found the path to the target node

void generatePath(TreeNode* root, int target) {

	// base case

	if (root == NULL) {

		return;

	}

	if (root->val == target) {

		// you've reached the target node

		flag = true;

		path.push_back(target);

		for (int i = 0; i < path.size(); i++) cout << path[i] << " ";

		path.pop_back();

		return;

	}

	// recursive case

	path.push_back(root->val);

	generatePath(root->left, target);

	if (flag == true) {

		// you've found the path to the target

		return;

	}

	generatePath(root->right, target);

	path.pop_back(); // backtracking

}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(2);

	root->left = new TreeNode(7);
	root->left->left = new TreeNode(3);
	root->left->left->left = new TreeNode(1);
	root->left->left->right = new TreeNode(9);
	root->left->right = new TreeNode(8);

	root->right = new TreeNode(6);
	root->right->left = new TreeNode(4);
	root->right->right = new TreeNode(5);

	int target = 4;

	generatePath(root, target);

	return 0;
}