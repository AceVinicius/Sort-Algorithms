# include <stdio.h>
# include <string.h>

# include "quick_sort.h"



void
quickSort(      char *user_v_,
          const int   left_,
          const int   right_)
{
      if (left_ < right_)
      {
            const int pivot = partition(user_v_, left_, right_);
            quickSort(user_v_, left_, pivot - 1);
            quickSort(user_v_, pivot + 1, right_);
      }

      return;
}



int
partition(      char *user_v_,
          const int   left_,
          const int   right_)
{
      const int pivot = user_v_[ (left_+right_)/2 ];

      int li = left_;
      int ri = right_;

      while (li <= ri)
      {
            while (user_v_[ li ] < pivot) li++;
            while (user_v_[ ri ] > pivot) ri--;

            if (li < ri)
            {
                  swap(&user_v_[ li++ ], &user_v_[ ri-- ]);
            }
            else
            {
                  break;
            }
      }

      return ri;
}



void
swap(char *value_1_,
     char *value_2_)
{
      const char tmp = *value_1_;
      *value_1_ = *value_2_;
      *value_2_ = tmp;

      return;
}



char vector[ 1200000 ];

int
main(void)
{
      scanf(" %s", vector);
      quickSort(vector, 0, strlen(vector)-1);
      // puts(vector);

      return 0;
}
