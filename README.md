# merge_two_array

题目是将两个升序排列的数组合并为一个。并且放置在原本的数组1中。

#C++
The method is insert the element of array2 into the array1(back).If the figure of array1 is bigger than 2,put it into the back,else
put the figure of array2 into the back of array1.until i<0 or j<0.
When i<0,it means the array1 is done,so we put the array2 into array1.until j<0.
When j<0,it means the array2 is done,and the array1 is the the right place.

#Java
the same.
