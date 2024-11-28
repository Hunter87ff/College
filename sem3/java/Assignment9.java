import java.lang.Thread;

class Threadd extends Thread{
    public void run(){
        System.out.println("Thread is running");
    }
}

public class Test{
    public static void main(String[] args){
        Threadd t1 = new Threadd();
        try{
            Thread.sleep(500);
            t1.start();
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}
