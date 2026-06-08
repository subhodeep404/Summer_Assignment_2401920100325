package live;
import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;
public class Test{
    public static void main(String[] args){
        Veena veena1=new Veena();
        veena1.play();
        Saxophone sax1=new Sax();
        sax1.play();
        Playable play1;
        play1=new veena1;
        play1.play();
        play2=new sax1;
        play2.play();
    }
}