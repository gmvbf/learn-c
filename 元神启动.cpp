
//д����
 //1. д����������main����)
 //���ִ���أ� -c�����Ǵ��������ĵ�һ�п�ʼִ�е�

//printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ��
//printf ��ʹ�ã�Ҳ�ô��к� ������ͷ�ļ� stdio.h)  
//int - ���� - �����ķ�������
//main()  - ������
// {} ������



//#include <stdio.h>   
//
//int main()
//{
//    printf("ԭ������");
//
//    return 1;
//}

//�ʼ�
// 
//����+����+���д���
//��ݼ���ctrl+F5
   

//��������
//���������-д����-��������е�����
//  �����̳�-�ϼ���Ʒ���۸�-15.6-С�� 15.6Ԫ-С��  1.56*10^1


//char           �ַ���������
//short          ������
//int            ����
//long           ������
//long long      ����������
//float          �����ȸ����� 
//double         ˫���ȸ����� 

 //��ʾ���ݷ�Χ(�ܴ洢���ݵĴ�С��
//  long long >long>int>short

//˫���ȸ�������С������࣬�ȵ����ȸ�������ȷ�ȸ�

//int main()
//{
//  //�ַ�character
//    char ch = 'a';
//    return 0;
//}
// 
//#include <stdio.h>  
//int main()
//{
//    printf("hello world\n");      
//    printf("����\n");
//    printf("%d\n",100);  //��ӡһ������-%d
//    printf("%d\n",sizeof(char));  //sizeof n.���������С  
//
//}
//
////������ĵ�λ����
//// bit-�����أ� ��С��λ 
//// 
////    buyte-�ֽ�=8bit
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




