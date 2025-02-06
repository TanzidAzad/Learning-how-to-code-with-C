        #include <stdio.h>
        #include <math.h>

        int main(void)

        {
         double g=9.81, h,t;

         printf("Type the height: ");
         scanf("%lf", &h);

         t = sqrt((2 * h/g));

         printf("The time required: %.2lf", t);


         return 0;
        }
