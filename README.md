# Array
## Introduction
- Arrays are used to store multiple values of same datatype in a single variable, instead of declaring separate variables for each value.</br>
- To create an array, define the data type (like int,char) and specify the name of the array followed by square brackets []. Within the square brackets mention the number of elements to be stored.</br>
- **Example** : </br> int numbers[5]; </br>char name[20];
![image](https://user-images.githubusercontent.com/125560933/221250547-4f671f09-301d-4147-9012-826e9ca82f53.png)


## Access the Elements of an Array
- To access an array element, refer to its index number.
- The indexing of an array starts from 0 and ends at value one less than the length or total number of elements in the array.
- Syntax: array_name[index_number];</br>
- **Example**: numbers[3] ---> Access to the element stored at third index position of the array 'numbers'.

## Loop Through an Array
- You can loop through the array elements with the for loop.</br>
- **Example**:</br>
for(i=0;i<length_of_array-1;i++)</br>
{</br>
printf("%d\n",numbers[i]); //Prints all the elements in array 'numbers'.</br>
}</br>

## For more information :
https://www.geeksforgeeks.org/what-is-array/


