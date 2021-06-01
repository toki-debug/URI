#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    };
 
    Node(int data, Node *left, Node *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    };
};
 

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}


Node* construct(string postfix)
{
 
    stack<Node*> s;
    int a=0;
  
    for (char c: postfix)
    {
     
       
        if (isOperator(c))
        {

            if(a==1){
              s.push(new Node(c));
              a++;
            }else{
            
            Node* x = s.top();
            s.pop();
 
            Node* y = s.top();
            s.pop();
 
             Node* node = new Node(c, y, x);
 
           
            s.push(node);
        }
        }
      
        else {
            s.push(new Node(c));
            a++;
        }
    }
 
   
    return s.top();
}


void printLevelOrder(Node *root)
{
 
    if (root == NULL) return;
 
    
    queue<Node *> q;
 
    q.push(root);
    int k=0;
    while (q.empty() == false)
    {
        cout << "Nivel " << k << ": ";
        k++;
        
        int nodeCount = q.size();
        
        while (nodeCount > 0)
        {
            Node *node = q.front();
            if(node->data !='='){
            cout << node->data;
            }
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
        cout << endl;
    }
}
 

int main() {
  stack<char> pilha;
  map<char, int> s;
  string pos = "";
  int maximo = 0;
  int n;
  string a;
  s['^'] = 3;
  s['*'] = 2;
  s['/'] = 2;
  s['-'] = 1;
  s['+'] = 1;
  char c;
  int z=0;
  int o=0;
  string sa;
  while (getline(cin, sa)) {
    o++;
    if(o!=1){
       cout<<endl;
    }
    for(int j=0;j<=sa.size();j++){
      if(j!=sa.size()){
         c = sa[j];
      }
     
    if (j == sa.size()) {
      n = 0;
      while (!pilha.empty()) {
        pos += pilha.top();
        pilha.pop();
      }
     // cout << pos << endl;
      Node* root = construct(pos);
       printLevelOrder(root);
         
      z=0;

      pos = "";
    } else if (c != ' ') {

      if (c == '(') {
        pilha.push(c);
      } else if (c == ')') {
        while (pilha.top() != '(') {
          pos += pilha.top();
          pilha.pop();
        }
        pilha.pop();
      } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        z++;
        if(z==1){
          pos+='=';
        }
        if (pilha.empty()) {
          pilha.push(c);
        } else {
          if (s[pilha.top()] >= s[c] && pilha.top() != '(') {
            while (!pilha.empty()) {
              if (pilha.top() == '(') {
                break;
              }
              if (s[pilha.top()] >= s[c] && pilha.top() != '(') {
                pos += pilha.top();
                pilha.pop();
              } else {
                break;
              }
            }
            pilha.push(c);
          } else {
            pilha.push(c);
          }
        }
        
      } else {
        z++;
        pos += c;
      }
      
    }
  }}

  return 0;
}
