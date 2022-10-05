#include <iostream>
#include <string>

#define MAX 1000

using namespace std;

struct contacts
{
	string name;
	string gender;
	int age;
	string phoneNumber;
	string address;
};

struct Addressbook
{
	struct contacts contactArray[MAX];

	int contacts_size;
};

void addContacts(Addressbook* abs)
{
	if (abs->contacts_size > 1000)
	{
		cout << "通讯录已满" << endl;
	}
	else
	{
		cout << "请输入姓名:";
		cin >> abs->contactArray[abs->contacts_size].name;
		
		cout << "请输入性别:";
		cin >> abs->contactArray[abs->contacts_size].gender;

		cout << "请输入年龄:";
		cin >> abs->contactArray[abs->contacts_size].age;

		cout << "请输入电话号码:";
		cin >> abs->contactArray[abs->contacts_size].phoneNumber;

		cout << "请输入地址:";
		cin >> abs->contactArray[abs->contacts_size].address;
		
		abs->contacts_size++;
		cout << "添加成功!" << endl;

	}
}

void showContacts(Addressbook* abs)
{
	if (abs->contacts_size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->contacts_size; i++)
		{
			cout << "联系人" << i+1 << "\t"
				<< " 姓名:" << abs->contactArray[i].name << "\t"
				<< " 性别:" << abs->contactArray[i].gender << "\t"
				<< " 年龄:" << abs->contactArray[i].age << "\t"
				<< " 电话号码:" << abs->contactArray[i].phoneNumber << "\t"<<"\t"
				<< " 地址:" << abs->contactArray[i].address << endl;
		}
	}

	system("pause");
	system("cls");

}

int isExist(Addressbook* abs, string name)
{
	for (int i = 0; i < abs->contacts_size; i++)
	{
		if (abs->contactArray[i].name == name)
		{
			return i;
		}
	}
	return -1;
}

void WannaEditList(Addressbook* abs)
{
	if (abs->contacts_size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->contacts_size; i++)
		{
			cout << "联系人" << abs->contacts_size << "\t"
				<< " 姓名:" << abs->contactArray[i].name << "\t"
				<< " 性别:" << abs->contactArray[i].gender << "\t"
				<< " 年龄:" << abs->contactArray[i].age << "\t"
				<< " 电话号码:" << abs->contactArray[i].phoneNumber << "\t" << "\t"
				<< " 地址:" << abs->contactArray[i].address << endl;
		}
	}

}

void deleteContacts(Addressbook* abs)
{
	WannaEditList(abs);
	cout << "请输入您想删除的联系人的姓名:";

	string name;
	cin >> name;

	int id = isExist(abs, name);
	if (id == -1)
	{
		cout << "该联系人不存在!\n";
	}
	else
	{
		for (int i = id; i < abs->contacts_size; i++) //从删除的那一项开始遍历数组,将后一位联系人覆盖到前一位的位置上
		{
			abs->contactArray[i] = abs->contactArray[i + 1];
			abs->contacts_size--;
			cout << "删除成功!\n";
		}
	}

	system("pause");
	system("cls");
}

void findContacts(Addressbook* abs)
{
	cout << "请输入想要查询的联系人名:\n";
	string name;
	cin >> name;
	for (int i = 0; i < abs->contacts_size; i++)
	{
		if (abs->contactArray[i].name == name)
		{			 
			cout << " 姓名:" << abs->contactArray[i].name << "\t"
				<< " 性别:" << abs->contactArray[i].gender << "\t"
				<< " 年龄:" << abs->contactArray[i].age << "\t"
				<< " 电话号码:" << abs->contactArray[i].phoneNumber << "\t" << "\t"
				<< " 地址:" << abs->contactArray[i].address << endl;
		}
		else if (i == abs->contacts_size && abs->contactArray[i].name != name)
		{
			cout << "该联系人不存在!\n";
		}
	}
	system("pause");
	system("cls");
}

void editContacts(Addressbook* abs)
{
	cout << "请输入想要修改的联系人名:\n";
	WannaEditList(abs);

	string name;
	cin >> name;
	for (int i = 0; i < abs->contacts_size; i++)
	{

		if (abs->contactArray[i].name == name)
		{
			int select = 0;
			while (select == 0)
			{
				cout << "请输入想要修改的项目\n" << "1 姓名\t2 性别\t3 年龄\t4 电话号码  5 地址\t退出请按0\n";
				int option;
				cin >> option;
				switch (option)
				{
				case 1:
					cout << "请输入修改后姓名:\n";
					cin >> abs->contactArray[i].name;
					cout << "修改成功!\n";
					break;
				case 2:
					cout << "请输入修改后性别:\n";
					cin >> abs->contactArray[i].gender;
					cout << "修改成功!\n";
					break;
				case 3:
					cout << "请输入修改后年龄:\n";
					cin >> abs->contactArray[i].age;
					cout << "修改成功!\n";
					break;
				case 4:
					cout << "请输入修改后电话号码:\n";
					cin >> abs->contactArray[i].name;
					cout << "修改成功!\n";
					break;
				case 5:
					cout << "请输入修改后地址:\n";
					cin >> abs->contactArray[i].name;
					cout << "修改成功!\n";
					break;
				case 0:
					select = 1;
					break;
				default:
					cout << "请输入正确的选项!\n";
					break;
				}

			}

		}

		else if (i == abs->contacts_size && abs->contactArray[i].name != name)
		{
			cout << "该联系人不存在!\n";
		}

	}
			
	system("pause");
	system("cls");
}

void wipeOut(Addressbook* abs)
{
	cout << "是否清空?(是/否)\n";
	string option;
	cin >> option;
	if (option == "是")
	{
		abs->contacts_size = 0;
		cout << "已清空联系人!\n";
		system("pause");
		system("cls");
	}
	else
	{
		system("pause");
		system("cls");
	}

}

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{
	//创建通讯录结构体变量
	Addressbook abs;
	abs.contacts_size = 0;

	int option = 0;

	while (true)
	{
		showMenu();

		cin >> option;

		switch (option)
		{
		case 1:
			addContacts(&abs);
			break;
		case 2:
			showContacts(&abs);
			break;
		case 3:
			deleteContacts(&abs);
			break;
		case 4:
			findContacts(&abs);
			break;
		case 5:
			editContacts(&abs);
			break;
		case 6:
			wipeOut(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "请输入正确的数字" << endl;
		}
	}

	system("pause");
	return 0;
}