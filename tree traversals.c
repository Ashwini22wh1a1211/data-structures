#include <stdio.h> 
#include <stdlib.h> 
struct TreeNode 
{ 
int data; 
struct TreeNode *left; 
struct TreeNode *right; 
}; 
struct TreeNode *createNode(int data) 
{ 
struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode)); 
newNode->data = data; 
newNode->left = newNode->right = NULL; 
return newNode; 
} 
void inorderTraversal(struct TreeNode *root) 
{ 
if (root != NULL) 
{ 
inorderTraversal(root->left); 
printf("%d ", root->data); 
inorderTraversal(root->right); 
} 
} 
void preorderTraversal(struct TreeNode *root) 
{ 
if (root != NULL) 
{ 
printf("%d ", root->data); 
preorderTraversal(root->left); 
preorderTraversal(root->right); 
} 
} 
void postorderTraversal(struct TreeNode *root) 
{ 
if (root != NULL) 
{ 
postorderTraversal(root->left); 
postorderTraversal(root->right); 
printf("%d ", root->data); 
} 
} 

 
struct TreeNode *insertNode(struct TreeNode *root, int key) 
{ 
    if (root == NULL) 
    { 
        return createNode(key); 
    } 
 
    if (key < root->data) 
    { 
        root->left = insertNode(root->left, key); 
    } 
    else if (key > root->data) 
    { 
        root->right = insertNode(root->right, key); 
    } 
 
    return root; 
} 
int main() 
{ 
    struct TreeNode *root = NULL; 
    int choice, key; 
    printf("\nMenu\n"); 
    printf("1. Insert Element into BST\n"); 
    printf("2. Inorder Traversal\n"); 
    printf("3. Preorder Traversal\n"); 
    printf("4. Postorder Traversal\n"); 
    printf("5. Exit\n"); 
 
    while (1) 
    { 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
        case 1: 
 printf("Enter the element to insert into BST: "); 
            scanf("%d", &key); 
            root = insertNode(root, key); 
            printf("Element %d inserted into BST.\n", key); 
            break; 
        case 2: 
            printf("Inorder Traversal: "); 
            inorderTraversal(root); 
            printf("\n"); 
            break; 
        case 3: 
            printf("Preorder Traversal: "); 
            preorderTraversal(root); 
            printf("\n"); 
            break; 
        case 4: 
            printf("Postorder Traversal: "); 
            postorderTraversal(root); 
            printf("\n"); 
            break; 
        case 5: 
            exit(0); 
        default: 
            printf("Invalid choice. Please enter a valid option.\n"); 
}
}
}
