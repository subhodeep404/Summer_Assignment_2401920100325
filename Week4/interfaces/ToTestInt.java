interface test{
    boolean isSquare(int number);
}
class arithmetic implements test{
    public boolean isSquare(int number){
        if(number<0){
            return false;
        }
        int root=(int) Math.sqrt(number);
        return (root*root==number);
    }
}
public class ToTestInt{
    public static void main(String[] args) {
        arithmetic obj=new arithmetic();
        int value=16;
        if(obj.isSquare(value)){
            System.out.println(value +" is a perfect square.");
        }
        else{
            System.out.println(value+" is not a perfect square.");
        }    
    }
}