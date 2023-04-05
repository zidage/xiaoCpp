#include <stdio.h>
#include <stdlib.h>
#include "Linklist.h"

void test()
{
	//初始化链表
	struct LinkNode* header = Init_LinkList();
	//打印链表
	Foreach_LinkList(header);
	//插入数据
	InsertByValue_LinkList(header, 300, 666);
	//打印链表
	Foreach_LinkList(header);
	//清空链表
	Clear_LinkList(header);
}

int main()
{
	test();
	return 0;
}