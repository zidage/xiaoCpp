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
		cout << "ͨѶ¼����" << endl;
	}
	else
	{
		cout << "����������:";
		cin >> abs->contactArray[abs->contacts_size].name;
		
		cout << "�������Ա�:";
		cin >> abs->contactArray[abs->contacts_size].gender;

		cout << "����������:";
		cin >> abs->contactArray[abs->contacts_size].age;

		cout << "������绰����:";
		cin >> abs->contactArray[abs->contacts_size].phoneNumber;

		cout << "�������ַ:";
		cin >> abs->contactArray[abs->contacts_size].address;
		
		abs->contacts_size++;
		cout << "��ӳɹ�!" << endl;

	}
}

void showContacts(Addressbook* abs)
{
	if (abs->contacts_size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->contacts_size; i++)
		{
			cout << "��ϵ��" << i+1 << "\t"
				<< " ����:" << abs->contactArray[i].name << "\t"
				<< " �Ա�:" << abs->contactArray[i].gender << "\t"
				<< " ����:" << abs->contactArray[i].age << "\t"
				<< " �绰����:" << abs->contactArray[i].phoneNumber << "\t"<<"\t"
				<< " ��ַ:" << abs->contactArray[i].address << endl;
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
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->contacts_size; i++)
		{
			cout << "��ϵ��" << abs->contacts_size << "\t"
				<< " ����:" << abs->contactArray[i].name << "\t"
				<< " �Ա�:" << abs->contactArray[i].gender << "\t"
				<< " ����:" << abs->contactArray[i].age << "\t"
				<< " �绰����:" << abs->contactArray[i].phoneNumber << "\t" << "\t"
				<< " ��ַ:" << abs->contactArray[i].address << endl;
		}
	}

}

void deleteContacts(Addressbook* abs)
{
	WannaEditList(abs);
	cout << "����������ɾ������ϵ�˵�����:";

	string name;
	cin >> name;

	int id = isExist(abs, name);
	if (id == -1)
	{
		cout << "����ϵ�˲�����!\n";
	}
	else
	{
		for (int i = id; i < abs->contacts_size; i++) //��ɾ������һ�ʼ��������,����һλ��ϵ�˸��ǵ�ǰһλ��λ����
		{
			abs->contactArray[i] = abs->contactArray[i + 1];
			abs->contacts_size--;
			cout << "ɾ���ɹ�!\n";
		}
	}

	system("pause");
	system("cls");
}

void findContacts(Addressbook* abs)
{
	cout << "��������Ҫ��ѯ����ϵ����:\n";
	string name;
	cin >> name;
	for (int i = 0; i < abs->contacts_size; i++)
	{
		if (abs->contactArray[i].name == name)
		{			 
			cout << " ����:" << abs->contactArray[i].name << "\t"
				<< " �Ա�:" << abs->contactArray[i].gender << "\t"
				<< " ����:" << abs->contactArray[i].age << "\t"
				<< " �绰����:" << abs->contactArray[i].phoneNumber << "\t" << "\t"
				<< " ��ַ:" << abs->contactArray[i].address << endl;
		}
		else if (i == abs->contacts_size && abs->contactArray[i].name != name)
		{
			cout << "����ϵ�˲�����!\n";
		}
	}
	system("pause");
	system("cls");
}

void editContacts(Addressbook* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ����:\n";
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
				cout << "��������Ҫ�޸ĵ���Ŀ\n" << "1 ����\t2 �Ա�\t3 ����\t4 �绰����  5 ��ַ\t�˳��밴0\n";
				int option;
				cin >> option;
				switch (option)
				{
				case 1:
					cout << "�������޸ĺ�����:\n";
					cin >> abs->contactArray[i].name;
					cout << "�޸ĳɹ�!\n";
					break;
				case 2:
					cout << "�������޸ĺ��Ա�:\n";
					cin >> abs->contactArray[i].gender;
					cout << "�޸ĳɹ�!\n";
					break;
				case 3:
					cout << "�������޸ĺ�����:\n";
					cin >> abs->contactArray[i].age;
					cout << "�޸ĳɹ�!\n";
					break;
				case 4:
					cout << "�������޸ĺ�绰����:\n";
					cin >> abs->contactArray[i].name;
					cout << "�޸ĳɹ�!\n";
					break;
				case 5:
					cout << "�������޸ĺ��ַ:\n";
					cin >> abs->contactArray[i].name;
					cout << "�޸ĳɹ�!\n";
					break;
				case 0:
					select = 1;
					break;
				default:
					cout << "��������ȷ��ѡ��!\n";
					break;
				}

			}

		}

		else if (i == abs->contacts_size && abs->contactArray[i].name != name)
		{
			cout << "����ϵ�˲�����!\n";
		}

	}
			
	system("pause");
	system("cls");
}

void wipeOut(Addressbook* abs)
{
	cout << "�Ƿ����?(��/��)\n";
	string option;
	cin >> option;
	if (option == "��")
	{
		abs->contacts_size = 0;
		cout << "�������ϵ��!\n";
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
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
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
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������ȷ������" << endl;
		}
	}

	system("pause");
	return 0;
}