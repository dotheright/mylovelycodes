#include <iostream>

using namespace std;

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TRUE    1
#define FALSE   0

#define MAXROW          10
#define MAXCOL          10
#define MAXBLOCKS       40

// 定義搜尋方向的順序

#define DIR_UP_RIGHT    0       // 右上
#define DIR_RIGHT       1       // 右
#define DIR_DOWN_RIGHT  2       // 右下
#define DIR_DOWN        3       //   下
#define DIR_DOWN_LEFT   4       // 左下
#define DIR_LEFT        5       // 左
#define DIR_UP_LEFT     6       // 左上
#define DIR_UP          7       //   上

#define MAXDIR          8       // 最大的搜尋方向

//
// 堆疊物件
//

class STACK {
   private:
      class node {                      // 節點資料
         public:
            int x;
            int y;
            int dir;
            node* prev;
      };
      node* top;                        // 堆疊頂端指標

   public:
      STACK()                           // 建構元 (constructor)
      {
         top = NULL;
      }

      int isEmpty()                     // 堆疊是否為空?
      {
         if ( top == NULL )
            return (TRUE);
         return (FALSE);
      }

      int push(int y, int x, int dir)   // 推入堆疊
      {
#ifdef DEBUG
         printf("debug (push) -> y=%d, x=%d, dir=%d\n", y, x, dir);
#endif
         node* newnode = new node;              // 建立新節點

         (*newnode).y = y;                      // 設定資料
         (*newnode).x = x;
         (*newnode).dir = dir;
         (*newnode).prev = top;                 // 將新節點的 prev 指向 top

         top = newnode;                         // 將 top 指向新節點
      }

      int pop(int* y, int* x, int* dir) // 取出堆疊
      {
         if ( isEmpty() == TRUE )               // 檢查堆疊是否為空?
            return(FALSE);

         node* ptr = top;                       // 記錄 top

         *y = (*top).y;                         // 設定資料
         *x = (*top).x;
         *dir = (*top).dir;

         top = (*top).prev;                     // 將 top 指向前一個節點

         delete ptr;                            // 釋放節點

#ifdef DEBUG
         printf("debug (pop)  -> y=%d, x=%d, dir=%d\n", *y, *x, *dir);
#endif
         return(TRUE);
      }

      ~STACK()                          // 解構元 (destructor)
      {
         while ( isEmpty() != TRUE )
         {
            node temp;

            pop(&temp.x, &temp.y, &temp.dir);
         }
      }
};

//
// 迷宮物件
//

class MAZE {                    // 迷宮物件
   private:
      int *data;                        // 迷宮資料
      int maxy;                         //     列數
      int maxx;                         //     行數
      int dirs[8][2];                   // 移動方向

   public:
      //
      // 建構元 (迷宮初始化, 移動方向初始化)
      //
      MAZE(int maxrow, int maxcol, int maxblocks)
      {
         maxy = maxrow;
         maxx = maxcol;

         data = new int[maxy*maxx];

         int y;
         int x;

         // 將迷宮數值設為 -1
         for(y=0; y<maxy; y++)
            for(x=0; x<maxx; x++)
               *(data+y*maxx+x) = -1;

         // 亂數
         time_t t;
         srand((unsigned) time(&t));

         // 產生阻礙物, 值設為 9
         int i;
         for(i=0; i<maxblocks; i++)
         {
            y = rand() % maxy;
            x = rand() % maxx;
            *(data+y*maxx+x) = 9;
         }

         // 將起始點及終點設為 -1
         *(data)= -1;
         *(data+(maxy-1)*maxx+(maxx-1)) = 10;

         // 移動方向初始化
         dirs[DIR_UP]        [0] = -1;  dirs[DIR_UP]        [1] =  0;   //   上
         dirs[DIR_DOWN]      [0] =  1;  dirs[DIR_DOWN]      [1] =  0;   //   下
         dirs[DIR_LEFT]      [0] =  0;  dirs[DIR_LEFT]      [1] = -1;   // 左
         dirs[DIR_RIGHT]     [0] =  0;  dirs[DIR_RIGHT]     [1] =  1;   // 右
         dirs[DIR_UP_LEFT]   [0] = -1;  dirs[DIR_UP_LEFT]   [1] = -1;   // 左上
         dirs[DIR_DOWN_LEFT] [0] =  1;  dirs[DIR_DOWN_LEFT] [1] = -1;   // 左下
         dirs[DIR_UP_RIGHT]  [0] = -1;  dirs[DIR_UP_RIGHT]  [1] =  1;   // 右上
         dirs[DIR_DOWN_RIGHT][0] =  1;  dirs[DIR_DOWN_RIGHT][1] =  1;   // 右下
      }

      //
      // 列印
      //
      print( )
      {
         int y;
         int x;

         for(x=0; x<maxx+2; x++)
            printf("█");
         printf("\n");

         for(y=0; y<maxy; y++)
         {
            printf("█");
            for(x=0; x<maxx; x++)
            {
               switch( *(data+y*maxx+x) )
               {
                  case -1 :
                     printf("  "); break;       // 空白
                  case DIR_UP :
                     printf("↑"); break;       // 上
                  case DIR_DOWN :
                     printf("↓"); break;       // 下
                  case DIR_LEFT :
                     printf("←"); break;       // 左
                  case DIR_RIGHT :
                     printf("→"); break;       // 右
                  case DIR_UP_LEFT :
                     printf("↖"); break;       // 左上
                  case DIR_DOWN_LEFT :
                     printf("↙"); break;       // 左下
                  case DIR_UP_RIGHT :
                     printf("↗"); break;       // 右上
                  case DIR_DOWN_RIGHT :
                     printf("↘"); break;       // 右下
                  case MAXDIR :
                     printf("  "); break;       // 已無可移動方向
                  case 9 :
                     printf("█"); break;       // 障礙物
                  default:
                     printf("★"); break;
               }
            }
            printf("█\n");
         }

         for(x=0; x<maxx+2; x++)
            printf("█");
         printf("\n");
      }

      //
      // 是否為目標
      //
      int isGoal(int y, int x)
      {
         if ( y == maxy-1 && x == maxx - 1 )
            return (TRUE);

         return(FALSE);
      }

      //
      // 依據 dir 來偵測 y, x 移動後的方向是否有障礙物 (或已經走過)
      //
      int isMove(int y, int x, int dir)
      {
#ifdef DEBUG
         printf("debug (check) -> y=%d, x=%d, dir=%d\n", y, x, dir);
#endif
         y += dirs[dir][0];
         x += dirs[dir][1];

         // 判斷是否超出邊界
         if ( y < 0 || y >= maxy || x < 0 || x >= maxx )
            return ( FALSE );

         if ( isGoal(y,x) == TRUE )
            return ( TRUE );

         // 判斷欲移動的方向是否可通行
         if ( *(data+y*maxx+x) != -1 )
            return ( FALSE );

         return ( TRUE );
      }

      //
      // 移動
      //
      void move(int *y, int *x, int *dir)
      {
         // 記錄目前方向
         *(data+(*y)*maxx+(*x)) = *dir;

         // 移動到新位置, 並將測試方向設為 0
         *y += dirs[(*dir)][0];
         *x += dirs[(*dir)][1];

         *dir = 0;
         *dir = *(data+(*y)*maxx+(*x));
      }

      //
      // 設定陣列值
      //
      void setdir(int y, int x, int dir)
      {
         *(data+y*maxx+x) = dir;
      }

      //
      // 解構元
      //
      ~MAZE()
      {
         delete data;                   // 釋放記憶體空間
      }
};

//
// 主程式
//

int main(void)
{
   MAZE maze(MAXROW, MAXCOL, MAXBLOCKS);        // 建立迷宮物件

   STACK stack;                                 // 建立堆疊物件

   //
   // 程式開始
   //

   stack.push(0,0,-1);

   while ( stack.isEmpty() != TRUE )    // 當堆疊內仍有資料時才繼續
   {
      int y;
      int x;
      int dir;

      stack.pop(&y, &x, &dir);          // 取出堆疊資料
#ifdef DEBUG
      maze.print();
#endif
      // 測試可移動的方向

      while ( dir < MAXDIR )
      {
         // 下一個方向
         dir ++;

         // 可否移動到下一個位置
         if ( maze.isMove(y, x, dir) == TRUE )
         {
            stack.push(y, x, dir);              // 將目前資料寫入堆疊

            maze.move(&y, &x, &dir);            // 移到下一個位置
#ifdef DEBUG
            printf("debug (new seat) -> y=%d, x=%d, dir=%d\n", y, x, dir);
            maze.print();
#endif
         }
      }
        maze.setdir(y, x, dir);         // 設定已走過所有方向的迷宮值

      if ( maze.isGoal(y,x) == TRUE )
      {
         maze.setdir(y,x,10);

         printf("老鼠走迷宮\n");
         maze.print();
         break;
      }
   }

   if ( stack.isEmpty() == TRUE )
   {
      maze.print();
      printf("哇~~~迷宮無解!\n");
   }
}