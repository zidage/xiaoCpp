#include "Linklist.h"

//初始化链表
struct LinkNode* Init_LinkList()
{
	struct LinkNode* header = (struct LinkNode*)malloc(sizeof(struct LinkNode));
	header->data = 1;
	header->next = NULL;

	//尾部指针
	struct LinkNode* pRear = header;

	int val = -1;
	while (true)
	{
		printf("输入插入的数据:\n");
		scanf_s("%d", &val);
		if (val == -1)
		{
			break;
		}

		//先创建新节点
		struct LinkNode* newnode = (struct LinkNode*)malloc(sizeof(struct LinkNode));
		newnode->data = val;
		newnode->next = NULL;

		pRear->next = newnode;

		//更新尾部指针指向
		pRear = newnode;
	}

	return header;
}
//在值为oldval的位置插入一个新的数据newval
void InsertByValue_LinkList(struct LinkNode* header, int oldval, int newval)
{
	if (header == NULL)
	{
		return;
	}

	//定义两个辅助指针变量
	struct LinkNode* pPrev = header;
	struct LinkNode* pCurrent = header->next;

	while (pCurrent != NULL)
	{
		if (pCurrent->data == oldval)
			break;
		else
		{
			pPrev = pCurrent;
			pCurrent = pCurrent->next;
		}
	}

	//如果pCurrent为空，说明链表中不存在值为oldval的节点
	/*if (pCurrent == NULL)
	{
		return;
	}*/

	//先创建新节点
	struct LinkNode* newnode = (struct LinkNode*)malloc(sizeof(struct LinkNode));
	newnode->data = newval;
	newnode->next = NULL;

	//新节点插入到链表中
	newnode->next = pCurrent;
	pPrev->next = newnode;
}
//删除值为val的结点
void RemoveByValue_Linklist(struct LinkNode* header, int delValue)
{
	if (header == NULL)
	{
		return;
	}
	
	//两个辅助指针变量
	struct LinkNode* pPrev = header;
	struct LinkNode* pCurrent = header->next;

	while (pCurrent != NULL)
	{
		if (pCurrent->data == delValue)
		{
			break;
		}
		pPrev = pCurrent;
		pCurrent = pCurrent->next;
	}

	if (pCurrent == NULL)
	{
		return;
	}
	//重新建立待删除结点的前驱和后继结点关系
	else
	{
		pPrev->next = pCurrent->next;
		//释放删除节点内存
		free(pCurrent);
		pCurrent = NULL;
	}

}
//遍历
void Foreach_LinkList(struct LinkNode* header)
{
	if (header == NULL)
	{
		return;
	}

	//辅助指针变量
	struct LinkNode* pCurrent = header->next;

	while (pCurrent != NULL)
	{
		printf("%d ", pCurrent->data);
		pCurrent = pCurrent->next;
	}
}
//销毁
void Destory_LinkList(struct LinkNode* header)
{
	if (header == NULL)
	{
		return;
	}

	struct LinkNode* pCurrent = header->next;

	while (pCurrent != NULL)
	{
		//先保存当前节点的下一节点地址
		struct LinkNode* pNext = pCurrent->next;

		//释放当前节点内存
		free(pCurrent);

		//pCurrent指向下一节点
		pCurrent = pNext;

	}
}
//清空
void Clear_LinkList(struct LinkNode* header)
{
	if (header == NULL)
	{
		return;
	}

	struct LinkNode* pCurrent = header->next;

	while (pCurrent != NULL)
	{
		//先保存当前节点的下一节点地址
		struct LinkNode* pNext = pCurrent->next;

		//释放当前节点内存
		free(pCurrent);

		//pCurrent指向下一节点
		pCurrent = pNext;

	}
}