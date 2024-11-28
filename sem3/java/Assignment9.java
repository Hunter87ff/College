class MyThread implements Runnable {
    @Override
    public void run() {
        System.out.println("Running Thread...");
    }
}

public class Assignment9 {
    public static void main(String[] x) {
        MyThread obj = new MyThread();
        Thread t = new Thread(obj);
        try {
            Thread.sleep(5000);
            t.start();
        } catch (InterruptedException e) {
            System.out.println("Error : " + e.toString());
        }
    }
}