#include <iostream>
#include <vector>
using namespace std;

struct Node {
    string data;
    vector<Node*> children;
};

class HierarchicalDB {
    Node* root;

public:
    HierarchicalDB(const string& rootData) {
        root = new Node{rootData};
    }

    Node* addChild(Node* parent, const string& data) {
        Node* child = new Node{data};
        parent->children.push_back(child);
        return child;
    }

    void display(Node* node, int depth = 0) {
        if (!node) return;
        cout << string(depth * 2, ' ') << node->data << "\n";
        for (Node* child : node->children) {
            display(child, depth + 1);
        }
    }

    Node* getRoot() { return root; }
};

int main() {
    HierarchicalDB db("Company");
    Node* dept1 = db.addChild(db.getRoot(), "HR");
    Node* dept2 = db.addChild(db.getRoot(), "IT");
    db.addChild(dept1, "Recruitment");
    db.addChild(dept2, "Development");

    cout << "Hierarchical DB Structure:\n";
    db.display(db.getRoot());
    return 0;
}
