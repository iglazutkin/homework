#include <cstddef>

using namespace std;

struct node
{
    int k;
    int h;
    node *r;
    node *l;
    node(int k): k(k), h(1), l(NULL), r(NULL) {};
};


int height(node *p)
{
    if (p) return p->h;
    else return 0;
}


int BF(node *p)
{ return height(p->r)-height(p->l); }


void OverHeight(node *p)
{
    int hleft=height(p->l);
    int hright=height(p->r);
    p->h = (hleft > hright ? hleft : hright)+1;
}


node* Right(node *x)
{
    node *y = x->l;
    x->l = y->r;
    y->r = x;
    OverHeight(x);
    OverHeight(y);
    return y;
}


node *Left(node *y)
{
    node *x = y->r;
    y->r = x->l;
    x->l = y;
    OverHeight(y);
    OverHeight(x);
    return x;
}

node *Balance(node *x)
{
    OverHeight(x);
    if (BF(x) == 2)
    {
        if (BF(x->r)<0) x->r = Right(x->r);
        return Left(x);
    }
    if (BF(x) == -2)
    {
        if (BF(x->l)>0) x->l = Left(x->l);
        return Right(x);
    }
    return x;
}


node *Add (node *x, int k)
{
    if (!x) return new node(k);
    if (k < x->k) x->l = Add(x->l, k);
    else x->r = Add(x->r, k);
    return Balance(x);
}

node *SearchMin(node *x)
{
    if (x->l) return SearchMin(x->l);
    else return x;
}

node *DelMin(node *x)
{
    if (x->l == 0) return x->r;
    x->l = DelMin(x->l);
    return Balance(x);
}

node *del(node *x, int k)
{
    if (!x) return 0;
    if (k < x->k) x->l = del(x->l, k);
    else if (k > x->k) x->r = del(x->r, k);
    else
    {
        node *y = x->l;
        node *z = x->r;
        delete x;
        if (!z) return y;
        node* Min = SearchMin(z);
        Min->r = DelMin(z);
        Min->l = y;
        return Balance(Min);
    }
    return Balance(x);
