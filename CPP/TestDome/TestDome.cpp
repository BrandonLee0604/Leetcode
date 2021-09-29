// TestDome.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include <stdexcept>
#include <iostream>

class Node
{
public:
    Node(Node* leftChild, Node* rightChild)
    {
        this->leftChild = leftChild;
        this->rightChild = rightChild;
    }

    Node* getLeftChild() const
    {
        return this->leftChild;
    }

    Node* getRightChild() const
    {
        return this->rightChild;
    }

    int height()
    {
        int left = 0, right = 0;
        if (this == NULL or this->leftChild == NULL and this->rightChild == NULL) {
            return 0;
        }
        else {
            left = this->getLeftChild()->height() + 1;
            right = this->getRightChild()->height() + 1;
            return std::max(left, right);
        }

    }
private:
    Node* leftChild;
    Node* rightChild;
};

#ifndef RunTests
int main()
{
    Node* leaf1 = new Node(NULL, NULL);
    Node* leaf2 = new Node(NULL, NULL);
    Node* node = new Node(leaf1, NULL);
    Node* root = new Node(node, leaf2);

    std::cout << root->height();
}
#endif

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
