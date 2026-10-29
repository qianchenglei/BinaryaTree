#include"SqBinaryTree.h"


static  int BiTreeDepth_Depth(const SqBinaryTree *T,int index);

void InItBinaryTree(SqBinaryTree *T){

    T->n = 0;
    memset(T->data,0,sizeof(T->data)); 
}
void CreateBinaryTree(SqBinaryTree *T,const ElemType *S){
    InItBinaryTree(T);
    for(int i = 1;S[i-1]!='\0'&& i <MaxChindUnit+1;i++){
        if(S[i-1]=='#'){
            T->data[i] = 0;
        }else{
            T->data[i] = S[i-1];
            T->n=i;
        }
    }
}

bool IsBiTreeEmpty(const SqBinaryTree *T) {
    if(T->n==0) {
        return true;
    }else return false;
}

int BiTreeDepth(const SqBinaryTree *T) {
    if(IsBiTreeEmpty(T)) {
        return 0;
    }
    return BiTreeDepth_Depth(T,1);
}

int BiTreeDepth_Depth(const SqBinaryTree *T, int index) {
    if (index >T->n||!T->data[index]) {return 0;}
    int Lside = BiTreeDepth_Depth(T,2*index);
    int Rside = BiTreeDepth_Depth(T,2*index+1);
    return 1+(Lside>Rside?Lside:Rside);
}

void PreOrder(const SqBinaryTree *T, int index) {
}

void InOrder(const SqBinaryTree *T, int index) {
}

void PostOrder(const SqBinaryTree *T, int index) {
}

int NodeCount(const SqBinaryTree *T) {
}

int LeafCount(const SqBinaryTree *T) {
}

int IsComplete(const SqBinaryTree *T) {
}
