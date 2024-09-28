class Assignment8{
    public static void main(String[] x){
        int largest = 0, num;
        try {
            for (String x1 : x) {
                num = Integer.parseInt(x1);
                if(largest<num){largest=num;}
            }
            System.out.println("\033[1;32mLargest : " + largest); 
        } 
        catch (NumberFormatException e) {System.out.println("\033[1;31m" + "Error: " + e.toString());}
        System.out.print("\033[0m");
    }
}
