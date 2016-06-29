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

// ���x�ь���������

#define DIR_UP_RIGHT    0       // ����
#define DIR_RIGHT       1       // ��
#define DIR_DOWN_RIGHT  2       // ����
#define DIR_DOWN        3       //   ��
#define DIR_DOWN_LEFT   4       // ����
#define DIR_LEFT        5       // ��
#define DIR_UP_LEFT     6       // ����
#define DIR_UP          7       //   ��

#define MAXDIR          8       // �����ь�����

//
// �ѯB���
//

class STACK {
   private:
      class node {                      // ���c�Y��
         public:
            int x;
            int y;
            int dir;
            node* prev;
      };
      node* top;                        // �ѯB픶�ָ��

   public:
      STACK()                           // ����Ԫ (constructor)
      {
         top = NULL;
      }

      int isEmpty()                     // �ѯB�Ƿ���?
      {
         if ( top == NULL )
            return (TRUE);
         return (FALSE);
      }

      int push(int y, int x, int dir)   // ����ѯB
      {
#ifdef DEBUG
         printf("debug (push) -> y=%d, x=%d, dir=%d\n", y, x, dir);
#endif
         node* newnode = new node;              // �����¹��c

         (*newnode).y = y;                      // �O���Y��
         (*newnode).x = x;
         (*newnode).dir = dir;
         (*newnode).prev = top;                 // ���¹��c�� prev ָ�� top

         top = newnode;                         // �� top ָ���¹��c
      }

      int pop(int* y, int* x, int* dir) // ȡ���ѯB
      {
         if ( isEmpty() == TRUE )               // �z��ѯB�Ƿ���?
            return(FALSE);

         node* ptr = top;                       // ӛ� top

         *y = (*top).y;                         // �O���Y��
         *x = (*top).x;
         *dir = (*top).dir;

         top = (*top).prev;                     // �� top ָ��ǰһ�����c

         delete ptr;                            // ጷŹ��c

#ifdef DEBUG
         printf("debug (pop)  -> y=%d, x=%d, dir=%d\n", *y, *x, *dir);
#endif
         return(TRUE);
      }

      ~STACK()                          // �☋Ԫ (destructor)
      {
         while ( isEmpty() != TRUE )
         {
            node temp;

            pop(&temp.x, &temp.y, &temp.dir);
         }
      }
};

//
// �Ԍm���
//

class MAZE {                    // �Ԍm���
   private:
      int *data;                        // �Ԍm�Y��
      int maxy;                         //     �Д�
      int maxx;                         //     �Д�
      int dirs[8][2];                   // �Ƅӷ���

   public:
      //
      // ����Ԫ (�Ԍm��ʼ��, �Ƅӷ����ʼ��)
      //
      MAZE(int maxrow, int maxcol, int maxblocks)
      {
         maxy = maxrow;
         maxx = maxcol;

         data = new int[maxy*maxx];

         int y;
         int x;

         // ���Ԍm��ֵ�O�� -1
         for(y=0; y<maxy; y++)
            for(x=0; x<maxx; x++)
               *(data+y*maxx+x) = -1;

         // �y��
         time_t t;
         srand((unsigned) time(&t));

         // �a����K��, ֵ�O�� 9
         int i;
         for(i=0; i<maxblocks; i++)
         {
            y = rand() % maxy;
            x = rand() % maxx;
            *(data+y*maxx+x) = 9;
         }

         // ����ʼ�c���K�c�O�� -1
         *(data)= -1;
         *(data+(maxy-1)*maxx+(maxx-1)) = 10;

         // �Ƅӷ����ʼ��
         dirs[DIR_UP]        [0] = -1;  dirs[DIR_UP]        [1] =  0;   //   ��
         dirs[DIR_DOWN]      [0] =  1;  dirs[DIR_DOWN]      [1] =  0;   //   ��
         dirs[DIR_LEFT]      [0] =  0;  dirs[DIR_LEFT]      [1] = -1;   // ��
         dirs[DIR_RIGHT]     [0] =  0;  dirs[DIR_RIGHT]     [1] =  1;   // ��
         dirs[DIR_UP_LEFT]   [0] = -1;  dirs[DIR_UP_LEFT]   [1] = -1;   // ����
         dirs[DIR_DOWN_LEFT] [0] =  1;  dirs[DIR_DOWN_LEFT] [1] = -1;   // ����
         dirs[DIR_UP_RIGHT]  [0] = -1;  dirs[DIR_UP_RIGHT]  [1] =  1;   // ����
         dirs[DIR_DOWN_RIGHT][0] =  1;  dirs[DIR_DOWN_RIGHT][1] =  1;   // ����
      }

      //
      // ��ӡ
      //
      print( )
      {
         int y;
         int x;

         for(x=0; x<maxx+2; x++)
            printf("��");
         printf("\n");

         for(y=0; y<maxy; y++)
         {
            printf("��");
            for(x=0; x<maxx; x++)
            {
               switch( *(data+y*maxx+x) )
               {
                  case -1 :
                     printf("  "); break;       // �հ�
                  case DIR_UP :
                     printf("��"); break;       // ��
                  case DIR_DOWN :
                     printf("��"); break;       // ��
                  case DIR_LEFT :
                     printf("��"); break;       // ��
                  case DIR_RIGHT :
                     printf("��"); break;       // ��
                  case DIR_UP_LEFT :
                     printf("�I"); break;       // ����
                  case DIR_DOWN_LEFT :
                     printf("�L"); break;       // ����
                  case DIR_UP_RIGHT :
                     printf("�J"); break;       // ����
                  case DIR_DOWN_RIGHT :
                     printf("�K"); break;       // ����
                  case MAXDIR :
                     printf("  "); break;       // �џo���Ƅӷ���
                  case 9 :
                     printf("��"); break;       // �ϵK��
                  default:
                     printf("��"); break;
               }
            }
            printf("��\n");
         }

         for(x=0; x<maxx+2; x++)
            printf("��");
         printf("\n");
      }

      //
      // �Ƿ��Ŀ��
      //
      int isGoal(int y, int x)
      {
         if ( y == maxy-1 && x == maxx - 1 )
            return (TRUE);

         return(FALSE);
      }

      //
      // ���� dir ��ɜy y, x �Ƅ���ķ����Ƿ����ϵK�� (���ѽ����^)
      //
      int isMove(int y, int x, int dir)
      {
#ifdef DEBUG
         printf("debug (check) -> y=%d, x=%d, dir=%d\n", y, x, dir);
#endif
         y += dirs[dir][0];
         x += dirs[dir][1];

         // �Д��Ƿ񳬳�߅��
         if ( y < 0 || y >= maxy || x < 0 || x >= maxx )
            return ( FALSE );

         if ( isGoal(y,x) == TRUE )
            return ( TRUE );

         // �Д����Ƅӵķ����Ƿ��ͨ��
         if ( *(data+y*maxx+x) != -1 )
            return ( FALSE );

         return ( TRUE );
      }

      //
      // �Ƅ�
      //
      void move(int *y, int *x, int *dir)
      {
         // ӛ�Ŀǰ����
         *(data+(*y)*maxx+(*x)) = *dir;

         // �Ƅӵ���λ��, �K���yԇ�����O�� 0
         *y += dirs[(*dir)][0];
         *x += dirs[(*dir)][1];

         *dir = 0;
         *dir = *(data+(*y)*maxx+(*x));
      }

      //
      // �O�����ֵ
      //
      void setdir(int y, int x, int dir)
      {
         *(data+y*maxx+x) = dir;
      }

      //
      // �☋Ԫ
      //
      ~MAZE()
      {
         delete data;                   // ጷ�ӛ���w���g
      }
};

//
// ����ʽ
//

int main(void)
{
   MAZE maze(MAXROW, MAXCOL, MAXBLOCKS);        // �����Ԍm���

   STACK stack;                                 // �����ѯB���

   //
   // ��ʽ�_ʼ
   //

   stack.push(0,0,-1);

   while ( stack.isEmpty() != TRUE )    // ���ѯB�������Y�ϕr���^�m
   {
      int y;
      int x;
      int dir;

      stack.pop(&y, &x, &dir);          // ȡ���ѯB�Y��
#ifdef DEBUG
      maze.print();
#endif
      // �yԇ���Ƅӵķ���

      while ( dir < MAXDIR )
      {
         // ��һ������
         dir ++;

         // �ɷ��Ƅӵ���һ��λ��
         if ( maze.isMove(y, x, dir) == TRUE )
         {
            stack.push(y, x, dir);              // ��Ŀǰ�Y�ό���ѯB

            maze.move(&y, &x, &dir);            // �Ƶ���һ��λ��
#ifdef DEBUG
            printf("debug (new seat) -> y=%d, x=%d, dir=%d\n", y, x, dir);
            maze.print();
#endif
         }
      }
        maze.setdir(y, x, dir);         // �O�������^���з�����Ԍmֵ

      if ( maze.isGoal(y,x) == TRUE )
      {
         maze.setdir(y,x,10);

         printf("�������Ԍm\n");
         maze.print();
         break;
      }
   }

   if ( stack.isEmpty() == TRUE )
   {
      maze.print();
      printf("��~~~�Ԍm�o��!\n");
   }
}