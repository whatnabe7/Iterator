// Iterator.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "Iterator.h"
int main()
{
	MyTeacher m = MyTeacher();
	m.createStudentList();
	m.callStudents();
	getchar();
    return 0;
}
