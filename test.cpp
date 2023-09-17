// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>


int _tmain(int argc, _TCHAR* argv[])
{
	std::string s="100";
	s.length();



	int i,j,ret;
	while ( ret=scanf("%d %d",&i,&j)!=EOF)
	{
		printf("i=%d j=%d\n",i,j);
	}
	return 0;
}

