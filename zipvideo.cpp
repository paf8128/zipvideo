#include <iostream>
#include <string>
void eatline();
using namespace std;
int main()
{
	string fi;
	string fo;
	cout << "输入原文件名：";
	cin >> fi;
	eatline();
	cout << "输入转换后文件名：";
	cin >> fo;
	string command =  "ffmpeg.exe -i "+fi+" -r 10 -pix_fmt yuv420p -vcodec libx264 -preset  veryslow -profile:v baseline -crf 23 -acodec aac -b:a 32k -strict -5 "+fo;
	system(command.c_str());
	return 0;
}
void eatline()
{
	char ch;
	while ((ch=cin.get())!='\n')
		continue;
}
