class Node {
 public:
  int value;
  int minSoFar;
  Node* next;
  ~Node() { delete next; }
  Node(int x) : value{x}, next{nullptr} {};
  Node() : next{nullptr}, minSoFar{INT_MAX} {};
  Node(int x, Node* next_) : value{x}, next{next_} {};
  Node(int x, Node* next_, int min) : value{x}, next{next_}, minSoFar{min} {};

};

class MinStack {
 public:
  Node* head;

  MinStack() : head{new Node()} {}

  void push(int val) { 
    int newMin = head->minSoFar;
    head = new Node(val, head, min(val, newMin)); 
    }

  void pop() {
    Node* temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;
  }

  int top() { return head->value; }

  int getMin() {
    return head->minSoFar;
  }
};
