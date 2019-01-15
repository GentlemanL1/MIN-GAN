#include <stdio.h>

int main()
{
    char arr[1024];
    int index = 0;
    printf("敏感字符管理系统\n");

    while (1)
    {
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符（最后一个）\n");
        printf("3---查看所有敏感字符\n");
        printf("4---替换内容中的敏感字符\n");
        printf("5---退出\n");

        int code;
        printf("请选择相应的功能\n");
        scanf("%d", &code);

        if (code == 1)
        {
            char a;
            printf("请输入要添加的敏感字符\n");
            scanf("%c",&a);
            scanf("%c",&a);

            arr[index]=a;
            index++;

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);



        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
    }

    return 0;
}