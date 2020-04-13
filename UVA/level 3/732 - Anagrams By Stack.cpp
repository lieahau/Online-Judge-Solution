// 732
#include <bits/stdc++.h>

using namespace std;

int panjangSource, panjangTarget;
char source[110], target[110], ans[110];
stack<char> stck;

void StackDFS(int idx, int i, int o);

int main()
{
    while(gets(source))
    {
        scanf("%s", target);
        getchar();
        printf("[\n");

        panjangSource = strlen(source);
        panjangTarget = strlen(target);

        if(panjangSource == panjangTarget)
            StackDFS(0, 0, 0);

        printf("]\n");
    }

    return 0;
}

void StackDFS(int idx, int i, int o)
{
    if(i == panjangSource && o == panjangTarget)
    {
        for(int j = 0; j < idx; j++)
        {
            if(j > 0)
                printf(" ");
            printf("%c", ans[j]);
        }
        printf("\n");

        return ;
    }

    // push
    if(i < panjangSource)
    {
        ans[idx] = 'i';
        stck.push(source[i]);
        StackDFS(idx+1, i+1, o);
        stck.pop();
    }

    // pop
    if(!stck.empty() && stck.top() == target[o] && i > o)
    {
        ans[idx] = 'o';
        char temp = stck.top();
        stck.pop();
        StackDFS(idx+1, i, o+1);
        stck.push(temp);
    }
}
