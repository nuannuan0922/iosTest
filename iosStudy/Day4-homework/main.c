#include <stdio.h>
#include <stdlib.h>

int main() {
    /**
     1. 请写一个ATM程序
        定义1个变量，用来存储该ATM机器中剩余的金额
        接受用户输入取款金额
        由于ATM机器只支持100的票子。
        如果用户输入的取款金额不是100的倍数的话，则打印“对不起，本机器无法提供输入的面额”
        如果用户输入的取款金额大于了ATM的剩余金额，则打印“对不起，金额不足”
        如果用户输入的取款金额是100的倍数，并且小于等于ATM的剩余金额就打印，“正在出钞，请从出钞口拿钱，ATM机器剩余xx元”。
     
    // 定义变量，存储ATM机器剩余的金额
    int shengyu = 1000;
    // 定义便令，存储用户取款金额
    int daiqu;
    printf("请输入取款金额\n");
    scanf("%d", &daiqu);
    // 判断是否是100的倍数
    if (daiqu%100 != 0) {
        //不是100的倍数，打印“对不起，本机器无法提供输入的面额”
        printf("对不起，本机器无法提供输入的面额\n");
    }
    // 判断取款金额是否大于了ATM金额
    else if (daiqu > shengyu) {
        // 是，则打印“对不起，金额不足”
        printf("对不起，金额不足\n");
    }
    // 不是，“正在出钞，请从出钞口拿钱，ATM机器剩余xx元”。
    else {
        printf("正在出钞，请从出钞口拿钱，ATM机器剩余 %d 元\n", shengyu - daiqu);
    }
    */
    
    /**
     2. 请用户从控制台输入3个整型的数，显示这3个数中的最大数
     
    // 定义三个变量，存储用户输入
    int num1, num2, num3;
    // 用户输入
    printf("请输入三个整数\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    // 对比前两个数，得出大数
    int max;
    max = num1 > num2 ? num1 : num2;
    // 用前两个的大值和第三个数对比，得出大数
    max = max > num3 ? max : num3;
    // 输出最大值。
    
    printf("最大值是：%d。\n", max);
    */
    
    /**
     3. 产生一个 1-10 的随机数，判断小于5就打印“小于5”，否则打印“不小于5”
     
    // 定义变量存储随机数
    int random = arc4random_uniform(10) + 1;
    // 判断打印
    if (random < 5) {
        printf("%d小于5\n", random);
    } else {
        printf("%d不小于5\n", random);
    }
    */
    
    /**
     4. 要求用户输入两个整型的数a、b, 如果a能被b整除 或者 a加b的结果大于100，则输出a的值，否则输出b的值。
     
    // 定义两个变量存储
    int a, b;
    // 用户输入
    printf("请输入两个整型的数\n");
    scanf("%d%d", &a, &b);
    // 判断
    // 满足条件输出a的值
    // 否则输出b的值
    if (b%a == 0 || a+b > 100) {
        printf("a = %d\n",a);
    } else {
        printf("b = %d\n",b);
    }
    */
    
    /**
     5. 请用户输入1个实数（浮点型）, 请编写算法对这个实数进行四舍五入到个位的运算。
     
    // 定义一个变量 f1，存储用户输入
    float f1;
    // 用户输入
    printf("请用户输入1个实数（浮点型）\n");
    scanf("%f", &f1);
    // 定义整型变量 int1，通过类型转换，取该数的整数部分
    int int1 = f1;
    // f1 和 int1 做差，结果和0.5对比。
    if (f1 - int1 >= 0.5) {
        printf("%d\n", int1 + 1);
    } else {
        printf("%d\n", int1);
    }
    */
    
    /**
     6. 请用户输入密码，
        如果密码是88888则提示正确，
            否则要求再输入1次，如果第2次输入正确，则提示正确，否则就提示错误。
     
    // 定义变量存储密码
    int password;
    printf("请输入密码：\n");
    scanf("%d", &password);
    // 判断密码是否正确
    if (password == 88888) {
        // 正确，则提示正确
        printf("密码输入正确！\n");
    } else {
        // 错误，则重新输入
        printf("请再次输入密码：\n");
        scanf("%d", &password);
        if (password == 88888) {
            // 正确，则提示正确
            printf("密码输入正确！\n");
        } else {
            printf("密码输入错误！\n");
        }
    }
     */
    
    /**
     9. 编写一个程序，请用户输入1个字符数据。
        如果这个字符是1个小写的字母，则输出“你输入的是1个小写字母”
        如果这个字符是1个大写的字母，则输出“你输入的是1个大写的字母”
        否则，就提示你输入的不是字母。
     */
    char ch;
    printf("请输入一个字符：\n");
    scanf("%c", &ch);
    printf("%d",ch);
    if (ch >= 97 && ch <= 122) {
        printf("你输入的是1个小写字母\n");
    } else if (ch >= 65 && ch <= 90) {
        printf("你输入的是1个大写字母\n");
    } else {
        printf("你输入的不是字母\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
