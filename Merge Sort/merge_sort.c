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
 *   in greater arrays, repeating this process until we get a
 *   single array again, but this time sorted.
 *
 */

# include <stdio.h>
# include <string.h>

# include "merge_sort.h"



void
mergeSort(      char *array,
          const int   begin,
          const int   end)
{
      /*
       *  This if selection is our stop point. When the
       *  array is splitted in unitary elements, end_
       *  will be equal to begin_, stopping the recursive
       *  calls.
       */
      if (end > begin)
      {
            /*
             *  Getting the floor value of the middle position 
             *  of the array. It will be usefull for calling
             *  mergeSort again, but now,\ only with half of the 
             *  size.
             */
            const int middle = (begin + end) / 2;
                
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
            mergeSort( array, begin, middle );
            mergeSort( array, middle + 1, end );
                
            /*
             *  Now, we can start to merge these unitary arrays
             *  into a vector again, but putting the smaller/greater
             *  in the right place using the merge algorithm. More
             *  on that later. Note that we send two intervals.
             *  This function is not responsible for only sticking
             *  togheter the unitary elements but the product of\
             *  them too. For example, the input for sticking two
             *  unitary elements would be (array, 0, 0, 1, 1). And
             *  an input for two bigger array will be (array, 1, 4, 6, 9)
             *  telling us to merge the interval [ 1-4 ] with the 
             *  interval [ 6-9 ].
             */  
            merge( array, begin, middle, middle + 1, end );
      }

      return;
}



void
merge(      char *array   ,
      const int   l_begin ,
      const int   l_end   ,
      const int   r_begin ,
            int   r_end   )
{
      /*
       *  This is our auxiliar array. It will be filled up
       *  with the elements of the intervals received in
       *  ascending/descending order.
       */
      char aux[ r_end ];

      int li = l_begin; /* left interval iterator */
      int ri = r_begin; /* right interval iterator */
      int ai = 0; /* auxiliar array iterator */

      /*
       *  This loop runs until one of our two intervals end.
       */
      while (li <= l_end && ri <= r_end)
      {
            /*
             *  This selection verifies the two elements
             *  of our intervals, placing the smallest/biggest
             *  in the auxiliar array.
             *  Swapping the "<=" symbol for ">=" will revert
             *  the sorting order to descending.
             */
            if (array[ li ] <= array[ ri ])
            {
                  aux[ ai++ ] = array[ li++ ];
            }
            else
            {
                  aux[ ai++ ] = array[ ri++ ];
            }
      }

      /*
       *  After one of the intervals finish, the only thing
       *  to do is copy the rest of the other to the end of
       *  the auxiliar array. We can do this with this loops.
       *  Note that the while condition is similar to the
       *  last one, so just one while below will run.
       */
      while (li <= l_end)
      {
            aux[ ai++ ] = array[ li++ ];
      }
      while (ri <= r_end)
      {
            aux[ ai++ ] = array[ ri++ ];
      }
      
      /*
       *  To finish the merge, just copy the auxiliar
       *  array to the right interval in the original. 
       */
      while (r_end >= l_begin)
      {
            array[ r_end-- ] = aux[ --ai ];
      }

      return;
}



int
main( void )
{
      char vector[ 100 ];
      scanf( " %s", vector );
      
      mergeSort( vector, 0, strlen(vector)-1 );
      
      puts( vector );

      return 0;
}
