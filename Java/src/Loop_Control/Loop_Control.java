package Loop_Control;

/**
 *
 * @author okan
 */

public class Loop_Control {
    public static void main(String args[]) {
        int [] numbers = {10, 20, 30, 40, 50};
        // enhanced for loop
        for (int i:numbers){
            System.out.print(i);
            System.out.print(",");
        }
        System.out.println("");
        String [] names = {"ali","veli","okan"};
        for (String i : names){
            System.out.print(i);
            System.out.print(",");
        }
        System.out.println("");
        int number = 10;
        int i= 0;
        // while loop
        while (i<number){
            System.out.print(i);
            System.out.print(",");
            i++;
        }
        System.out.println("");
        // using break statement in for loop
        for (int m : numbers){
            System.out.print(m);
            System.out.print(",");
            if(m==40){
               System.out.println("break command will be activated...");
               break;
            }
        }
    }
    
}
