/*
reference page:
https://www.tutorialspoint.com/java/java_object_classes.htm

 */
package Objects_and_Classes;
/*
two concepts : Objects and Classes

Objects: instance of class. Objects have states and behaviors. 
A dog has nail, eyes, color, name...

Class: a template/blueprint that describes 
the behavior/state that the object of its type support.
A class can contain variable types that are Local variables,
Instance variables, Class variables.
what is Constructors? (Line )
Constructors : Every class has a constructor.
* more than one Constructor can be.
* class and constructor name should be the same

-> Accessing Instance Variables and Methods
* First create an object 
ObjectReference = new Constructor();
* Now call a variable as follows 
ObjectReference.variableName;
* Now you can call a class method as follows
ObjectReference.MethodName();




*/
/**
 *
 * @author okan
 */
public class Objects_and_Classes { // class is defined
    int myage;
    
   public Objects_and_Classes(){
     // This constructor has no parameter.
    System.out.println("when first constructor is called...");
   }
   
   public Objects_and_Classes(String name) {
      // This constructor has one parameter, name.
      System.out.println("when second constructor is called...");
      System.out.println("Passed Name is :" + name );
   }
   
   public void setage(int age){
   myage = age;
   }
   public int getage(){
   System.out.println("My age is " + myage);
   return myage;
   }

   public static void main(String []args) {
      // Following statement would create an object 
      Objects_and_Classes my_object1, my_object2;
      my_object1 = new Objects_and_Classes();
      System.out.println("-----");
      my_object2 = new Objects_and_Classes( "Okan" );
      System.out.println("-----");
      
      // set my age. my_object2 will be used
      my_object2.setage(24); // sets my age as 24
      my_object2.getage(); // print my age
      System.out.println("-----");
      
   }
}

