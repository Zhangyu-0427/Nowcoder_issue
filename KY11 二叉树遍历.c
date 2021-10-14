#include <stdio.h>

typedef struct TreeNode {
    struct TreeNode* left;
    struct TreeNode* right;
    char val;
}TNode;

void InOrder(TNode* root) {

    if (root == NULL) {
        return;
    }
    InOrder(root->left);
    printf("%c ", root->val);
    InOrder(root->right);

}

TNode* CreateTree(char* s, int* pi) {
    if (s[*pi] == '#') {
        (*pi)++;
        return NULL;
    }

    TNode* root = (TNode*)malloc(sizeof(TNode));
    if (root == NULL) {
        exit(0);
    }
    root->val = s[*pi];
    (*pi)++;
    root->left = CreateTree(s, pi);
    root->right = CreateTree(s, pi);

    return root;
}

int main() {
    char str[100];
    scanf("%s", str);

    int i = 0;
    TNode* root = CreateTree(str, &i);

    InOrder(root);
    return 0;
}