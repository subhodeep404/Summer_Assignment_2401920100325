import java.util.Random;
abstract class Compartment{
    public abstract String notice(); 
}
class FirstClass extends Compartment{
    public String notice(){
        return "This is the First Class Compartment";
    }
}
class Ladies extends Compartment{
    public String notice(){
        return "This is the Ladies Compartment";
    }
}
class General extends Compartment{
    public String notice(){
        return "This is the General Compartment";
    }
}
class Luggage extends Compartment{
    public String notice(){
        return "This is the Luggage Compartment";
    }
}
public class TestCompartment{
    public static void main(String[] args){
        Compartment[] coaches=new Compartment[10];
        Random random=new Random();
        for(int i=0;i<coaches.length;i++){
            int comp=random.nextInt(4);
            switch(comp){
                case 0:
                    coaches[i]=new FirstClass();
                    break;
                case 1:
                    coaches[i]=new Ladies();
                    break;
                case 2:
                    coaches[i]=new General();
                    break;
                case 3:
                    coaches[i]=new Luggage();
                    break;
            }
        }
        for(int i=0;i<coaches.length;i++){
            System.out.println("Coach "+(i+1)+"- "+coaches[i].notice());
        }
    }
}