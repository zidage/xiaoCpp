#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
	string FartLanguage[] =
	{
		"高尔基曾经说过：“一个温存的目光，一句由衷的话语，能使人忍受生活给他的许多磨难。”",
		"如雨果所言：“吼叫是狼的安慰，羊毛是羊的安慰，白颊鸟是森林的安慰，爱情是女人的安慰，真理是哲学家的安慰。”",
		"莎士比亚说：“宽恕人家不能宽恕的，是一种高贵的行为。”","像莎士比亚说的：“正像有了白昼才有黑夜一样，对自己忠实，才不会对别人欺诈。”",
		"泰戈尔说：“功利是一部机器的目的和检验机器价值的根据，而善良只是人的目的和意愿。”",
		"泰戈尔在诗中这样写道：“自我的包袱，自嘲时便减轻了。”",
		"罗曼·罗兰说过：“放弃独立思考，是一切不幸的核心。”",
		"狄更斯笔下的：“一片用努力换来的面包皮比一桌继承来的酒席好吃得多。”",
		"狄更斯说：“别骄傲，别怀恨，别不肯原谅人。”","托尔斯泰曾谈到：“习惯正一天天地把我们的生活变成某种定型的化石，我们的心灵正在失去自由，成为平静而没有激情的时间之流的奴隶。”",
		"有人说:“纵使黑夜吞噬了一切，太阳还可以重新回来。”",
		"屠格涅夫说：“人生的最美，当是一边走，一边捡散落在路旁的花朵。那么你的一生，都将美丽而芬芳。”",
		"奥斯特洛夫斯基的这句话:“人的生命，似洪水奔流，不遇到岛屿与暗礁，难以激起美丽的浪花。”",
		"英国诗人塞·约翰逊如是说:“诗歌的灵魂在于创新，即创造出使人意想不到的，惊叹不已和赏心悦目的东西。”",
		"俗话说：“车到山前必有路，船到桥头自然直。”",
		"苏轼曾高吟:“门前流水尚能西，休将白发唱黄鸡”。",
		"蒋勋曾在《品味四讲》忠言逆耳:“纯棉衬衫就像爱人”。"
	};


	string Conjunction[] = { "但","而","且","然而","诚然","就" };

	string AssociateFormer[] = { "说起","回到","再说","现在看" };

	string AssociateLater[] = { "这个问题，","这个摆在我们面前的问题，","可以说是十分重要。","而言" };

	cout << "请输入文章标题" << endl;
	string title;
	cin >> title;

	cout << "请输入字数：" << endl;
	int amount;
	cin >> amount;
	int sentence = amount / 30;

	Sleep(1000);

	cout << "即将生成" << amount << "字作文" << endl;

	Sleep(1000);

	cout << "生成中…" << endl;

	Sleep(5000);

	srand((unsigned)time(NULL));

	for (int i = 0; i < sentence; i++)
	{

		int F_langA;
		F_langA = rand() % 15 + 0; //引用名人名言的随机数
		int F_langB = rand() % 15 + 0;
		int F_langC = rand() % 15 + 0;
		int F_langD = rand() % 15 + 0;  //在并列语句中使用名人名言避免重复

		int rand_conj = rand() % 6 + 0; //介词和前后关联词提取的平均数
		int rand_assf = rand() % 4 + 0;
		int rand_assl = rand() % 4 + 0;

		int rand_passagestruct = rand() % 3 + 1;

		if (i == 0)
		{
			cout << "    " << "今天我谈论的话题是" << title << "。";
		}

		//文章中心结构
		switch (rand_passagestruct)
		{
		case 1:
			cout << AssociateFormer[rand_assf] << title << AssociateLater[rand_assl] << Conjunction[rand_conj] << FartLanguage[F_langC];
			//屁话开始
		case 2:
			cout << Conjunction[rand_conj] << FartLanguage[F_langA];
			//承上启下
		case 3:
			cout << Conjunction[rand_conj] << title << AssociateLater[rand_assl] << FartLanguage[F_langA];
		}


		//来点骈散结合
		int paragraph = i % 10;
		if (paragraph == 5)
			cout << "有如" << FartLanguage[F_langA] << "有如" << FartLanguage[F_langB] << "也有如" << FartLanguage[F_langC] << "还有如" << FartLanguage[F_langD];

		//分段
		if (paragraph == 7)
		{
			cout << endl << "" << endl << "    ";
		}

		//结尾,附带点题
		if (i == sentence)
		{
			cout << endl << " " << "最后回到" << title << "这个问题,我想说" << title << "就如" << FartLanguage[F_langA] << "那样,愿诸位归来仍是少年,永远" << title;
		}

	}

	cout << endl << " " << endl << "文章生成完毕" << endl;

	system("pause");
	return 0;
}