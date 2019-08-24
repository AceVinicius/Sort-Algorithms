/*
 * File:    merge_sort.c
 *
 * Author:   Vinícius F. Aguiar (vinicius.aguiar13@icloud.com)
 * Date:     08/20/2019
 * Partner:  I worked alone
 * Course:   Software Engineering 2017
 *
 * Summary of File:
 *
 *   Merge Sort is a recursive algorithm that sorts an array
 *   spliting them into unitary elements, and then merging them
 *   in ascendent/descendent order.
 *
 */

# include <stdio.h>
# include <string.h>

# include "merge_sort.h"



void
mergeSort(      char *array_,
          const int   begin_,
          const int   end_)
{
      /*
       *  This if selection is our stop point. When the
       *  array is splitted in unitary elements, end_
       *  will be equal to begin_, stopping the recursive
       *  calls.
       */
      if (end_ > begin_)
      {
            /*
             *  Getting the floor value of the middle position 
             *  of the array. It will be usefull for calling
             *  mergeSort again, but now,\ only with half of the 
             *  size.
             */
            const int middle = (begin_ + end_) / 2;
                
            /*
             *  Here we start the recursive calls. As you can see,
             *  instead of passing the full size of the array we
             *  call mergeSort two times. In the first call, we
             *  send the [ 0 ]->[ middle ] positions of the array,
             *  and in the second call [ middle+1 ]->[ end ]. If
             *  we do the math, spliting the array in half many
             *  times, after sometime we will hit our goal of
             *  having each element in an unitary array.
             */
            mergeSort(array_, begin_, middle);
            mergeSort(array_, middle + 1, end_);
                
            /*
             *  Now, we can start to merge these unitary arrays
             *  into a vector again, but putting the smaller/greater
             *  in the right place using the merge algorithm. More
             *  on that later.
             */  
            merge(array_, begin_, middle, middle + 1, end_);
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
