#include<iostream>

using namespace std;

class BST
{
public:
    struct node
    {
        int data;
        node* left;
        node* right;
        node* parent;
    };

    node* root;

    node* makeEmpty(node* t)
    {
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }
    node* createRoot(node* t)
    {
       t = new node;
       t->data = 3;
       t->left = t->right = NULL;    
       t->parent = NULL;  
       t->left->data = 7;
    }
    node* printRoot()
    {
       cout << root->data << endl;
    }
    /*node* insertLeft(node* t)
    {
       t->left = insert(7, t->left);
    }*/
    /*node* createBranch(node* t)
    {
       t->data = '|';
       t->left = t->right = NULL;
    }*/
    /*node* createLeaf(node* t)
    {
       t->data = 'o';
    }*/
    node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }
    node* insertChildern(node* t, node* x, node* y)
    {
       if((x == NULL) && (y == NULL))
          t->data = 'o';
       else
       {
          t->right = x;
          t->left = y;
       }
    }
    node* findMin(node* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->left == NULL)
            return t;
        else
            return findMin(t->left);
    }

    node* findMax(node* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->right == NULL)
            return t;
        else
            return findMax(t->right);
    }

    node* remove(int x, node* t)
    {
        node* temp;
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            t->left = remove(x, t->left);
        else if(x > t->data)
            t->right = remove(x, t->right);
        else if(t->left && t->right)
        {
            temp = findMin(t->right);
            t->data = temp->data;
            t->right = remove(t->data, t->right);
        }
        else
        {
            temp = t;
            if(t->left == NULL)
                t = t->right;
            else if(t->right == NULL)
                t = t->left;
            delete temp;
        }

        return t;
    }

    void inorder(node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }
    void levelhelper(int x, int y, node* t)
    {
        if(t == NULL)
            return;
        else if(x == y)
        {
            cout << t->data << " ";
        }
        else
        {
           y++;
           levelhelper(x, y, t->left);
           levelhelper(x, y, t->right);
        }
    }

    node* find(node* t, int x)
    {
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            return find(t->left, x);
        else if(x > t->data)
            return find(t->right, x);
        else
            return t;
    }

//public:
    BST()
    {
        root = NULL;
    }

    ~BST()
    {
        root = makeEmpty(root);
    }
    void makeRoot()
    {
       root = createRoot(root);
    }
    void insert(int x)
    {
        root = insert(x, root);
    }
    void insertChilds(node* x, node* y)
    {
        cout << "insert" << endl;
    }
    void remove(int x)
    {
        root = remove(x, root);
    }

    void display()
    {
        inorder(root);
        cout << endl;
    }

    void search(int x)
    {
        root = find(root, x);
    }
    void printlevel(int x)
    {
       int y = 0;
       levelhelper(x, y, root);
    }
};

int main()
{
    BST t;
    t.makeRoot();
    //t.insert('a');
    //t.insert('b');
    //t.insert('c');
    //t.insert(10);
    //t.insert(30);
    t.display();
    t.printlevel(0);
    cout << endl;
    t.printlevel(1);
    cout << endl;
    t.printlevel(2);
    cout << endl;
    t.printlevel(3);
    t.printRoot();
}
