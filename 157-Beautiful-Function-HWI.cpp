// #include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <cmath>

// #define ll long long
// #define MOD 1000000007

// using namespace std;

// int countans(string s)
// {
//   int ans = 0;
//   int rem = 0;
//   int i = s.size() - 1;

//   while (i > 0)
//   {
//     int currentval = 10 - (int(s[i] - 48) + rem);
//     rem = 1;
//     ans += currentval;
//     i--;
//   }

//   return ans + 9;
// }

// main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   cout << countans("29952") << endl;

//   return 0;
// }

int nodeht(node *p)
{
  int hl, hr;

  if (p->left)
    hl = p->left->ht; // Directly using the ht variable as its stored for every node in the node structure
  else
    hl = 0;

  if (p->right)
    hr = p->right->ht;
  else
    hr = 0;

  return hl > hr ? hl + 1 : hr + 1;
}

// -------->> Finding balance factor of the tree <<--------
int BalanceFactor(node *p)
{
  int hl, hr;

  hl = p && p->left ? p->left->ht : 0;
  hr = p && p->right ? p->right->ht : 0;

  return hl - hr;
}

// =============================>> PERFORMING ROTATIONS IN AN AVL TREE <<===========================
// ---------->> LL-Rotation <<----------
node *LLrotation(node *t)
{
  node *tl = t->left;
  node *tlr = t->left->right;

  tl->right = t;
  t->left = tlr;

  // --> Updating the hts
  t->ht = nodeht(t);
  tl->ht = nodeht(tl);

  if (root == t)
    root = tl;

  return tl;
}

// ---------->> LR-Rotation <<----------
node *LRrotation(node *t)
{
  node *tlr = t->left->right;
  node *tl = t->left;

  t->left = tlr->right;
  tl->right = tlr->left;

  tlr->right = t;
  tlr->left = tl;

  // --> Updating the hts
  t->ht = nodeht(t);
  tl->ht = nodeht(tl);
  tlr->ht = nodeht(tlr);

  if (t == root)
    root = tlr;

  return tlr;
}

// ---------->> RR-Rotation <<----------
node *RRrotation(node *t)
{
  node *tr = t->right;
  node *trl = t->right->left;

  tr->left = t;
  t->right = trl;

  // --> Updating the hts
  t->ht = nodeht(t);
  tr->ht = nodeht(tr);

  if (root == t)
    root = tr;

  return tr;
}

// ---------->> RL-Rotation <<----------
node *RLrotation(node *t)
{
  node *tr = t->right;
  node *trl = t->right->left;

  t->right = trl->left;
  tr->left = trl->right;

  trl->right = tr;
  trl->left = t;

  // --> Updating the hts
  t->ht = nodeht(t);
  tr->ht = nodeht(tr);
  trl->ht = nodeht(trl);

  if (t == root)
    root = trl;

  return trl;
}

// =============================>> INSERTING IN AN AVL TREE <<===========================
node *insertR(node *t, int key)
{
  if (t == NULL)
  {
    node *p = new node;
    p->val = key;
    p->right = p->left = NULL;
    p->ht = 1;
    return p;
  }
  else if (key < t->val)
    t->left = insertR(t->left, key);
  else if (key > t->val)
    t->right = insertR(t->right, key);

  t->ht = nodeht(t);

  // --> Checking if the tree is balanced or not by checking the Balance factors
  if (BalanceFactor(t) == 2 && BalanceFactor(t->left) == 1)
    return LLrotation(t);
  else if (BalanceFactor(t) == 2 && BalanceFactor(t->left) == -1)
    return LRrotation(t);
  else if (BalanceFactor(t) == -2 && BalanceFactor(t->right) == -1)
    return RRrotation(t);
  else if (BalanceFactor(t) == -2 && BalanceFactor(t->right) == 1)
    return RLrotation(t);

  return t;
}