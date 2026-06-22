class box{
    double length;
    double breadth;
    box(double length,double breadth){
        this.length=length;
        this.breadth=breadth;
    }
    double Area(){
        return length*breadth;
    }
}
class box3d extends box{
    double height;
    box3d(double length,double breadth, double height){
        super(length, breadth);
        this.height=height;
    }
    double Area(){
        return length*breadth;
    }
    double Volume(){
        return length*breadth*height;
    }
}
public class MainBox {
    public static void main(String[] args) {
        box3d boxObj=new box3d(5, 10, 20);
        System.out.println("Surface Area: "+boxObj.Area());
        System.out.println("Volume: "+boxObj.Volume());
    }
}
