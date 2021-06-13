//https://www.geeksforgeeks.org/search-a-node-in-binary-tree/
bool ifNodeExists(struct Node* node, int key)
{
	if (node == NULL)
		return false;

	if (node->data == key)
		return true;
	bool res1 = ifNodeExists(node->left, key);
	bool res2 = ifNodeExists(node->right, key);
	return res1==true||res2==true?true:false;
}
