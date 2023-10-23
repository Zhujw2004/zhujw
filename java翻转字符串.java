import java.util.Scanner;
public class Test {
    public static void main(String[] args) {
        System.out.println("请输入字符串s：");
        Scanner scanner=new Scanner(System.in);
        String s=scanner.next();

        System.out.println("请输入字符串goal：");
        Scanner scanner1=new Scanner(System.in);
        String goal=scanner.next();

        System.out.println("请输入翻转次数n：");
        Scanner scanner2=new Scanner(System.in);
        int n=scanner.nextInt();
        if(n<=s.length()) {
            String a = s.substring(0, n);
            String b = s.substring(n);
            String end = b + a;
            System.out.println("翻转后的s是："+end);
            System.out.println(end.equals(goal));
        } else if (n>s.length()) {
            n=n%s.length();
            String a = s.substring(0, n);
            String b = s.substring(n);
            String end = b+a;
            System.out.println("翻转后的s是："+end);
            System.out.println(end.equals(goal));

        }
    }

}
