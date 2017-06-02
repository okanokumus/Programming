/*
an example for usage of object and class
 */
package Objects_and_Classes;

/**
 *
 * @author okan
 */
public class Students {
    String name;
    int age;
    String  departmant;
    double gpo;
    int no_student;
    // constructor
    public Students(int student){
    no_student = student;    
    System.out.println(no_student + ".Student information:" );
    }
    public Students(){
    System.out.println("waiting a new member");
    }
    public void set(String Studentname,int Studentage,
            String Studentdepartmant, double Studentgpo
            ){
    name = Studentname;
    age = Studentage;
    departmant = Studentdepartmant;
    gpo = Studentgpo;
    }
    public void printStudent() {
      System.out.println("Name:"+ name );
      System.out.println("Age:" + age );
      System.out.println("Departmant:" + departmant );
      System.out.println("Gpo:" + gpo);
   }
   public static void main(String []args) {
       Students s1,s2,s3;
       s1 = new Students(1);
       s1.set("Okan", 24, "Engineering", 2.96);
       s1.printStudent();
       s2 = new Students(2);
       s2.set("Ayse", 23, "Arthitecture", 3.06);
       s2.printStudent();
       s3 = new Students();
       
   }
}
