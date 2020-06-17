#include <bits/stdc++.h>
using namespace std;

void breadthFirstSearch(string binaryTree[], int nodeNum);
void preorder(string binaryTree[], int nodeNum, int nodeIndex);
void inorder(string binaryTree[], int nodeNum, int nodeIndex);
void postorder(string binaryTree[], int nodeNum, int nodeIndex);

void breadthFirstSearch(string binaryTree[], int nodeNum)
{
    for (int i = 0; i < nodeNum; i++)
    {
        cout << binaryTree[i] + " ";
    }
    cout << endl;
}

void preorder(string binaryTree[], int nodeNum, int nodeIndex)
{
    if (nodeIndex >= nodeNum)
    {
        return;
    }

    cout << binaryTree[nodeIndex] + " ";
    preorder(binaryTree, nodeNum, 2 * nodeIndex + 1);
    preorder(binaryTree, nodeNum, 2 * nodeIndex + 2);
}

void inorder(string binaryTree[], int nodeNum, int nodeIndex)
{
    if (nodeIndex >= nodeNum)
    {
        return;
    }

    inorder(binaryTree, nodeNum, 2 * nodeIndex + 1);
    cout << binaryTree[nodeIndex] + " ";
    inorder(binaryTree, nodeNum, 2 * nodeIndex + 2);
}

void postorder(string binaryTree[], int nodeNum, int nodeIndex)
{
    if (nodeIndex >= nodeNum)
    {
        return;
    }

    postorder(binaryTree, nodeNum, 2 * nodeIndex + 1);
    postorder(binaryTree, nodeNum, 2 * nodeIndex + 2);
    cout << binaryTree[nodeIndex] + " ";
}

int main()
{
    string binaryTree[7] = {"社長", "デザイン部長", "エンジニア部長", "キャラデザイナー",
                            "UIデザイナー", "サーバエンジニア", "インフラエンジニア"};

    breadthFirstSearch(binaryTree, 7);

    preorder(binaryTree, 7, 0);
    cout << endl;
    inorder(binaryTree, 7, 0);
    cout << endl;
    postorder(binaryTree, 7, 0);
    cout << endl;
}
