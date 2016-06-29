/*************************************************************************
	> File Name: horse_race.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月05日 星期日 10时10分09秒
 ************************************************************************/

#include<stdio.h>

#define HORSE_NUM 25
#define TRACK_NUM 5

#define STATUS_INIT 0
#define STATUS_GOON 1
#define STATUS_OUT  (-1)
#define STATUS_WIN  (2)


typedef struct tagHORSE
{
	int track;
	int status;
    int rate;
	int rank;
	int index;
}stHORSE;

int main()
{
	int capacity[HORSE_NUM]={37 , 91 , 26 , 26 , 23 , 36 , 88 , 51 , 100 , 94 , 56 , 100 , 29 , 36 , 62 , 86 , 65 , 58 , 66 , 64 , 28 , 51 , 64 , 92 , 83  };
    int i  = 0;
    stHORSE stHorses[HORSE_NUM] ={0};

	for (i = 0 ; i < HORSE_NUM ; i++)
	{
		stHorse[i].index =i;
		stHorse[]
	}

    return 0;
}

