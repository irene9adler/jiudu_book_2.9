//�Ŷ� 2.9��ϣӦ��������ʱ�临�Ӷ�
#include <stdio.h>
#define OFFSET 500000
int Hash[1000000] = {0};
int main()
{

    int n,m;
    int i;
    int x;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
            {
                scanf("%d",&x);
                Hash[x + OFFSET] = 1;
            }
        for(i=1000000;i>0;i--)//�ҵ���ǰm��
        {
            if(Hash[i]==1)
            {
                m--;
                printf("%d ",i-OFFSET);
            }
            if(m==0)
            {
                printf("\n");
                break;
            }
        }

    }
    return 0;
}
