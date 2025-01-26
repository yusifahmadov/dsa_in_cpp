class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree
{
private:
    Node *root;

public:
    BinarySearchTree(int value)
    {
        Node *newNode = new Node(value);
        root = newNode;
    }

    bool insert(int value)
    {

        Node *newNode = new Node(value);
        if (root == nullptr)
        {
            root = newNode;
            return true;
        }
        Node *loop = root;

        while (true)
        {
            if (newNode->value == loop->value)
                return false;

            if (value < root->value)
            {

                if (loop->left == nullptr)
                {
                    loop->left = newNode;
                    return true;
                }
                loop = loop->left;
            }
            else
            {
                if (loop->right == nullptr)
                {
                    loop->right = newNode;
                    return true;
                }

                loop = loop->right;
            }
        }
        return true;
    }
    bool contains(int value)
    {
        if (root == nullptr)
            return false;

        Node *temp = root;

        while (temp)
        {

            if (value < temp->value)
            {
                temp = temp->left;
            }
            else if (value > temp->value)
            {
                temp = temp->right;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
