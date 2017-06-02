package Arrays;

/**
 *
 * @author okan
 */
/*
Array declaration like that
dataType[] arrayRefVar;   // preferred way.
or
dataType arrayRefVar[];  // works but not preferred way.

Syntax:
arrayRefVar = new dataType[arraySize];

*/
public class Arrays {
    public static void main(String[] args) {
    double[] numbers = {1.5, 2.9, 4.7, 8.9, 10.4} ;
    int size = numbers.length;
    int i=0;
    System.out.println("array length : " + numbers.length);
    // print all array elements using while loop
    while(i<size){
        System.out.print("numbers : " + numbers[i] + "\n");
        i++;
    }
    // sum all elements in array
    double total=0;
    for (i=0;i<size;i++){
        total = total + numbers[i];
    }
    System.out.println("sum all numbers : " + total);  
    }
}
