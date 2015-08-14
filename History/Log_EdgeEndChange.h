#pragma once
#include "HistoryLog.h"

class Log_EdgeEndChange :
	public HistoryLog
{
public:
    const unsigned int index;

public:
	const int end;

public:
    Log_EdgeEndChange(unsigned int theTarget,unsigned int theIndex,int theEnd);
	std::string toString()
	{
		char temp[256];
        sprintf(temp,"\t\t\t<Log Type=\"EdgeEndChange\" Target=\"%d\" Index=\"%d\" End=\"%d\" />\n",target,index,end);
		std::string out(temp);
		return out;
    }

	void operator=(const Log_EdgeEndChange& in) 
	{
		in;
    }

public:
	~Log_EdgeEndChange(void);
};
