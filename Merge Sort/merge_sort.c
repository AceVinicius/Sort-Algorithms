# include <stdio.h>
# include <string.h>

# include "merge_sort.h"



void
mergeSort(      char *user_v_,
          const int   begin_,
          const int   end_)
{
      if (end_ > begin_)
      {
            const int middle = (begin_ + end_) / 2;
            mergeSort(user_v_, begin_, middle);
            mergeSort(user_v_, middle + 1, end_);
            merge(user_v_, begin_, middle, middle + 1, end_);
      }

      return;
}



void
merge(      char *user_v_,
      const int   l_begin_,
      const int   l_end_,
      const int   r_begin_,
            int   r_end_)
{
      char aux_v[ r_end_ ];

      int li = l_begin_;
      int ri = r_begin_;
      int ai = 0;

      while (li <= l_end_ && ri <= r_end_)
      {
            if (user_v_[ li ] <= user_v_[ ri ])
            {
                  aux_v[ ai++ ] = user_v_[ li++ ];
            }
            else
            {
                  aux_v[ ai++ ] = user_v_[ ri++ ];
            }
      }

      while (li <= l_end_)
      {
            aux_v[ ai++ ] = user_v_[ li++ ];
      }
      while (ri <= r_end_)
      {
            aux_v[ ai++ ] = user_v_[ ri++ ];
      }

      while (r_end_ >= l_begin_)
      {
            user_v_[ r_end_-- ] = aux_v[ --ai ];
      }

      return;
}



char vector[ 1200000 ];

int
main(void)
{
      scanf(" %s", vector);
      mergeSort(vector, 0, strlen(vector)-1);
      // puts(vector);

      return 0;
}
