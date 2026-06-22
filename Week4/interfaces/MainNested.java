class Outer{
    void display(){
        System.out.println("Display method inside Outer class");
    }
    class Inner{
        void display(){
            System.out.println("Display method inside Inner class");
        }
    }
}
public class MainNested{
    public static void main(String[] args) {
        Outer outerObj=new Outer();
        outerObj.display();
        Outer.Inner innerObj= outerObj.new Inner();
        innerObj.display();
    }
}