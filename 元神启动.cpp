
//写代码
 //1. 写出主函数（main函数)
 //如何执行呢？ -c语言是从主函数的第一行开始执行的

//printf - 库函数 - 在屏幕上打印信息的
//printf 的使用，也得打招呼 （引用头文件 stdio.h)  
//int - 整形 - 函数的返回类型
//main()  - 函数名
// {} 函数体



//#include <stdio.h>   
//
//int main()
//{
//    printf("原神启动");
//
//    return 1;
//}

//笔记
// 
//编译+链接+运行代码
//快捷键：ctrl+F5
   

//数据类型
//计算机语言-写程序-解决生活中的问题
//  购物商场-上架商品，价格-15.6-小数 15.6元-小数  1.56*10^1


//char           字符数据类型
//short          短整形
//int            整形
//long           长整形
//long long      更长的整形
//float          单精度浮点数 
//double         双精度浮点数 

 //表示数据范围(能存储数据的大小）
//  long long >long>int>short

//双精度浮点数，小数点更多，比单精度浮点数精确度高

//int main()
//{
//  //字符character
//    char ch = 'a';
//    return 0;
//}
// 
//#include <stdio.h>  
//int main()
//{
//    printf("hello world\n");      
//    printf("比特\n");
//    printf("%d\n",100);  //打印一个整数-%d
//    printf("%d\n",sizeof(char));  //sizeof n.运算符，大小  
//
//}
//
////计算机的单位；：
//// bit-（比特） 最小单位 
//// 
////    buyte-字节=8bit
//// 
////    kb - 1024buyte
//// 
//// 
////    mb - 1024kb
////
////
////    gb - 1024mb
//// 
////    tb - 1024gb
////
////    pb - 1024tb


#include <stdio.h>  
int main()
{
    int age = 18;
    double weight = 55;
     
    age = age + 1;
    weight = weight + 5;

    printf("%d\n",age);
    printf("%lf\n", weight);
}




