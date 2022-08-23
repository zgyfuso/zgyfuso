#include<iostream>
using namespace std;

struct LinkNode {
public:
    LinkNode(int value = 0) {
        nValue = value;
        pNext = NULL;
    }
    ~LinkNode() { pNext = NULL; }
private:
    friend class LinkList;
    int nValue;
    LinkNode* pNext;
};

class LinkList {
public:
    LinkList();
    ~LinkList();
    void Insert(int nData);
    void Delete(int nData);
    void Sort();
    bool IsEmpty();
    void Reverse();
    void Destroy();
    int Length();
    LinkNode* Find(int nData);
    bool IsLoop();
    void Print();
private:
    LinkNode* pHead;
};

LinkList::LinkList() {
    pHead = new LinkNode();  // new可以在申请空间的同时调用构造函数
}

LinkList::~LinkList() {
    Destroy();
}

//从大到小插入
void LinkList::Insert(int nData) {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return;
    }
    LinkNode* pCur = pHead;
    while (pCur->pNext != NULL) {
        if (pCur->pNext->nValue < nData) {
            break;
        }
        pCur = pCur->pNext;
    }
    LinkNode* pTmp = new LinkNode(nData);
    pTmp->pNext = pCur->pNext;
    pCur->pNext = pTmp;
}

void LinkList::Delete(int nData) {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return;
    }
    if (pHead->pNext == NULL) {
        cout << "list empty" << endl;
        return;
    }
    LinkNode* pCur = pHead;
    while (pCur->pNext != NULL) {
        if (pCur->pNext->nValue == nData) {
            LinkNode* pDel = pCur->pNext;
            pCur->pNext = pCur->pNext->pNext;

            pDel->pNext = NULL;
            delete(pDel);
        }
        else {
            pCur = pCur->pNext;
        }
    }
}

void LinkList::Sort() {  //从小到大排列
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return;
    }
    if (pHead->pNext == NULL) {
        cout << "list empty" << endl;
        return;
    }
    LinkNode* pCur = pHead->pNext;

    LinkNode* pNewHead = new LinkNode();
    while (pCur) {
        LinkNode* pTmp = pCur;
        pCur = pCur->pNext;

        //将pTmp结点插入到pNewHead指向的新链表中
        LinkNode* p = pNewHead;
        while (p->pNext) {
            if (p->pNext->nValue > pTmp->nValue)
                break;
            p = p->pNext;
        }
        pTmp->pNext = p->pNext;
        p->pNext = pTmp;
    }
    delete pHead;
    pHead = pNewHead;
}

bool LinkList::IsEmpty() {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return false;
    }
    return pHead->pNext == NULL;
}

int LinkList::Length() {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return 0;
    }
    int nLength = 0;
    LinkNode* pCur = pHead->pNext;
    while (pCur) {
        nLength++;
        pCur = pCur->pNext;
    }
    return nLength;
}

void LinkList::Reverse() {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return;
    }
    if (pHead->pNext == NULL) {
        cout << "list empty" << endl;
        return;
    }
    LinkNode* pCur = pHead->pNext->pNext;
    LinkNode* pPre = pHead->pNext;
    LinkNode* pnext = NULL;
    while (pCur) {             //倒序操作
        pnext = pCur->pNext;
        pCur->pNext = pPre;
        pPre = pCur;
        pCur = pnext;
    }
    pHead->pNext->pNext = NULL; //链表末尾指向NULL
    pHead->pNext = pPre;   //头指针指向倒序后的首结点
}

void LinkList::Destroy() {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return;
    }
    while (pHead->pNext) {
        LinkNode* pDel = pHead->pNext;
        pHead->pNext = pDel->pNext;
        delete pDel;
        pDel = NULL;
    }
    delete pHead;
    pHead = NULL;
    return;
}

LinkNode* LinkList::Find(int nData) {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return NULL;
    }
    if (pHead->pNext == NULL) {
        cout << "list empty" << endl;
        return NULL;
    }
    LinkNode* pCur = pHead->pNext;
    while (pCur) {
        if (pCur->nValue == nData)
            return pCur;
    }
    return NULL;
}

void LinkList::Print() {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return;
    }
    if (pHead->pNext == NULL) {
        cout << "list empty" << endl;
        return;
    }
    LinkNode* pCur = pHead->pNext;
    while (pCur) {
        cout << pCur->nValue << " ";
        pCur = pCur->pNext;
    }
    cout << endl;
}

bool LinkList::IsLoop() {
    if (pHead == NULL) {
        cout << "creat failed" << endl;
        return false;
    }
    if (pHead->pNext == NULL) {
        cout << "list empty" << endl;
        return false;
    }
    LinkNode* pFast = pHead->pNext;
    LinkNode* pSlow = pHead->pNext;
    while (pFast != NULL && pSlow != NULL && pFast->pNext != NULL) {
        pFast = pFast->pNext->pNext;
        pSlow = pSlow->pNext;
        if (pFast == pSlow)
            return true;
    }
    return false;
}

int main() {
    LinkList list;
    list.Insert(12);
    list.Insert(14);
    list.Insert(2);
    list.Insert(4);
    list.Insert(5);
    list.Print();

    list.Reverse();
    list.Print();

    list.Insert(4);
    list.Insert(7);
    list.Insert(1);
    list.Print();

    list.Delete(5);
    list.Print();



    list.Sort();
    list.Print();

    list.Destroy();
    list.Print();

    cout << endl;
    system("pause");
    return 0;
}
