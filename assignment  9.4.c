#include<stdio.h>
#include<math.h>
float del(float mat[3][3])
{ float ans;
    ans = mat[0][0] * (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2])
          - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0])
          + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    return ans; }
void values(float factor[3][4])
{ float d[3][3] =
        {{ factor[0][0], factor[0][1], factor[0][2] },
        { factor[1][0], factor[1][1], factor[1][2] },
        { factor[2][0], factor[2][1], factor[2][2] }, };
    float d1[3][3] =
        {{ factor[0][3], factor[0][1], factor[0][2] },
        { factor[1][3], factor[1][1], factor[1][2] },
        { factor[2][3], factor[2][1], factor[2][2] }, };
    float d2[3][3] =
        {{ factor[0][0], factor[0][3], factor[0][2] },
        { factor[1][0], factor[1][3], factor[1][2] },
        { factor[2][0], factor[2][3], factor[2][2] }, };
    float d3[3][3] =
        {{ factor[0][0], factor[0][1], factor[0][3] },
        { factor[1][0], factor[1][1], factor[1][3] },
        { factor[2][0], factor[2][1], factor[2][3] }, };
     float D = del(d);
    float D1 = del(d1);
    float D2 = del(d2);
    float D3 = del(d3);
    if (D != 0)
        {float x = D1 / D;
        float y = D2 / D;
        float z = D3 / D;
        printf("Value of x is : %f\n", x);
        printf("Value of y is : %f\n", y);
        printf("Value of z is : %f\n", z); }
else {if (D1 == 0 && D2 == 0 && D3 == 0)
            printf("Infinite solutions\n");
        else if (D1 != 0 || D2 != 0 || D3 != 0)
            printf("No solutions\n"); } }
void main()
{float factor[3][4] =
        {{1,1,1,6},
        {1,1,-1,0},
        {1,-1,1,2},};
 float factor1[3][4]=
  {{1,1,1,3},
    {2,3,1,6},
    {1,-1,-1,-3}};
 float factor2[3][4]=
  {{2,4,2,15},
    {2,1,2,-5},
    {4,1,-2,0}};
printf("/nThe values of the first equation is ");
  values(factor);
printf("/nThe values of the second equation is ");
  values(factor1);
printf("/nThe values of the third equation is ");
  values(factor2);
    getchar();}
