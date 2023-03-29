// #include<stdio.h>
// #include<conio.h>


// int max(int a, int b) { return (a > b) ? a : b; }


// int knapSack(int w, int wt[], int profit
// [], int n)
// {
//     if (n == 0 || w == 0)
//         return 0;

//     if (wt[n - 1] > w)
//         return knapSack(w, wt, profit
//         , n - 1);
//     else
//         return max(
//             profit
//             [n - 1]
//                 + knapSack(w - wt[n - 1], wt, profit
//                 , n - 1),
//             knapSack(w, wt, profit
//             , n - 1));
// }
 
// int main()
// { 
//     int n ,w;
//     printf("enter the size : ");
//     scanf("%d",&n);
//     int wt[50];
//     int profit[50];
//     printf("enter the weight:");
//     for(int i = 0; i<n; i++){

//         scanf("%d",&wt[i]);
//     }
//     printf("enter the profit:");
//      for(int i = 0; i<n; i++){

//         scanf("%d",&profit[i]);
//     }

//     printf("enter the capacity:");
//     scanf("%d", &w);
//     printf("%d", knapSack(w, wt, profit, n));

//      return 0;

// }


#include<stdio.h>
int max(int a, int b) {
   if(a>b){
      return a;
   } else {
      return b;
   }
}
int knapsack(int W, int wt[], int val[], int n) {
   int i, w;
   int knap[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i==0 || w==0)
            knap[i][w] = 0;
         else if (wt[i-1] <= w)
            knap[i][w] = max(val[i-1] + knap[i-1][w-wt[i-1]], knap[i-1][w]);
         else
            knap[i][w] = knap[i-1][w];
      }
   }
   return knap[n][W];
}
int main() {
   int val[] = {20, 25, 40};
   int wt[] = {25, 20, 30};
   int W = 50;
   int n = sizeof(val)/sizeof(val[0]);
   printf("The solution is : %d", knapsack(W, wt, val, n));
   return 0;
}