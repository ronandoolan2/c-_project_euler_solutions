#include<iostream>
#include <fstream>
#include<bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std;

struct node
{
    int data;
    int x_pos;
    node *left;
    node *right;
};

class tree{
public:
   tree();
   ~tree();
   void destroy_tree();

   void destroy_tree(node *leaf);
   void insert(int value, int x, int y);
   void insert(int value, int x_pos, int y_pos, int x, int y, node *leaf);   

   node *root;
};

tree::tree(){
    root = NULL;
}

tree::~tree(){
    destroy_tree();
}

void tree::destroy_tree(node *leaf){
    if(leaf != NULL){
       destroy_tree(leaf->left);
       destroy_tree(leaf->right);
       delete leaf;
    }
}

void tree::insert(int value, int x, int y)
{
   if(( x == 0) && (y == 0))
   {
      cout << "created root of " << value << endl;
      root = new node;
      root->data = value;
      root->left = NULL;
      root->right = NULL;
   }
   else
   {
       int pos_x;
       int pos_y = 1;
       if(x == 0)
       {
          pos_x = 0;
          cout << "inserting left" << endl;
          insert(value, x, y, pos_x, pos_y, root);  
       }
       else
       {
          pos_x = 0;
          cout << "inserting right" << endl;
          insert(value, x, y, pos_x, pos_y, root);
       }
   }
}

void tree::destroy_tree(){
   destroy_tree(root);
}
void tree::insert(int value, int x, int y, int x_pos, int y_pos, node * leaf)
{
    cout << "enters insert leaf function with" << x << "," << y << " " << x_pos << "," << y_pos  << endl;
    if(y == y_pos)
    {
       if(x == x_pos)
       {
          cout << "inserting at " << x << " " << endl;
          leaf->left = new node;
          cout << "created node" << endl;
          leaf->left->data = value;
          leaf->left->left = NULL;
          leaf->left->right = NULL;
       } 
       else
       {
          cout << "inserting at " << x << " " << endl;
          leaf->right = new node;
          cout << "created node" << endl;
          leaf->right->data = value;
          leaf->right->left = NULL;
          leaf->right->right = NULL;

       }
    }
    else
    {
       y_pos++;
       if(x > x_pos)
       {
          x_pos++;
          insert(value, x, y, x_pos, y_pos, leaf->right);
       }
       else
       {
          cout << "inserting " << x << "," << y << " " << x_pos << " " << y_pos << endl;
          insert(value, x, y, x_pos, y_pos, leaf->left); 
       }
    }
}
bool printPath (struct node *root, 
                struct node *target_leaf)
{
    // base case
    if (root == NULL)
        return false;
 
    // return true if this node is the target_leaf 
    // or target leaf is present in one of its 
    // descendants
    if (root == target_leaf || 
        printPath(root->left, target_leaf) ||
        printPath(root->right, target_leaf) )
    {
        printf("%d ", root->data);
        return true;
    }
 
    return false;
}
 
// This function Sets the target_leaf_ref to refer
// the leaf node of the maximum  path sum.  Also, 
// returns the max_sum using max_sum_ref
void getTargetLeaf (struct node *node, int *max_sum_ref,
                    int curr_sum, struct node **target_leaf_ref)
{
    if (node == NULL)
        return;
 
    // Update current sum to hold sum of nodes on path
    // from root to this node
    curr_sum = curr_sum + node->data;
 
    // If this is a leaf node and path to this node has
    // maximum sum so far, then make this node target_leaf
    if (node->left == NULL && node->right == NULL)
    {
        if (curr_sum > *max_sum_ref)
        {
            *max_sum_ref = curr_sum;
            *target_leaf_ref = node;
        }
    }
 
    // If this is not a leaf node, then recur down 
    // to find the target_leaf
    getTargetLeaf (node->left, max_sum_ref, curr_sum, 
                   target_leaf_ref);
    getTargetLeaf (node->right, max_sum_ref, curr_sum, 
                   target_leaf_ref);
}
int maxSumPath (node *node)
{
    // base case
    if (node == NULL)
        return 0;
 
    struct node *target_leaf;
    int max_sum = INT_MIN;
 
    // find the target leaf and maximum sum
    getTargetLeaf (node, &max_sum, 0, &target_leaf);
 
    // print the path from root to the target leaf
    printPath (node, target_leaf);
 
    return max_sum;  // return maximum sum
}
node *root;
std::ifstream myfile("triangle.txt");
int main()
{
  tree *triangle = new tree();
  string line;
 //  root = new node;
 //  root->data = 3;
 //  node *one;
  int x = 0;
  int y = 0;
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
      std::stringstream stream(line);
      while(1) {
         int n;
         stream >> n;
         cout << n << "prior to insert at" << x << "," << y << endl;
         //triangle->insert(n, x, y);
         if(!stream)
            break;
         triangle->insert(n, x, y);

         std::cout << "Found integer: " << n << " at position " << x << " " << y  << "\n";
         x++;
         }
      y++;
      x = 0;
      
    }
    myfile.close();
  }

   /*one = new node;
   one->data = 7;
   root->left = one;
   node *one2;
   one2 = new node;
   one2->data = 4;
   root->right = one2;
   node *two1;
   two1 = new node;
   two1->data = 2;
   one->left = two1;
   node *two2;
   two2 = new node;
   two2->data = 4;
   one->right = two2;
   one2->left = two2;
   node *two3;
   two3 = new node;
   two3->data = 6;
   one2->right = two3;
   node *three1;
   three1 = new node;
   three1->data = 8;
   two1->left = three1;
   node *three2;
   three2 = new node;
   three2->data = 5;
   two1->right = three2;
   two2->left = three2;
   node *three3;
   three3 = new node;
   three3->data = 9;
   two2->right = three3;
   two3->left = three3;
   node *three4;
   three4 = new node;
   three4->data = 3;
   two3->right = three4;*/
   cout << "Max path sum is " << maxSumPath(root);   

//   one->data = 7;
}
