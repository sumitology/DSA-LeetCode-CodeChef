#include <iostream>
using namespace std;

int main()
{
   int N, M;
   cin >> N >> M;
   int a[N][M], b[N][M], c[N][M];

   // 1st Matrix//
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         cin >> a[i][j];
      }
   }

   // 2nd Matrix
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         cin >> b[i][j];
      }
   }
   // C for sum
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         c[i][j] = a[i][j] + b[i][j];
      }
   }

   // printin the matrix
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         cout << c[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}
