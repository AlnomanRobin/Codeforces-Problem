#include <stdio.h>
int main() {
    int n, m;
    printf("Number of processes : ");
    scanf("%d", &n);
    printf("Number of resources : ");
    scanf("%d", &m);

    int alloc[n][m], max[n][m], need[n][m], avail[m];
    for(int i=0; i<n; i++){
        printf("\nEnter details for Process %d\n", i);
        printf("Allocation : ");
        for(int j=0; j<m; j++) scanf("%d", &alloc[i][j]);
        printf("Max : ");
        for(int j=0; j<m; j++) scanf("%d", &max[i][j]);
    }
    printf("Enter Available Resources: ");
    for(int i=0; i<m; i++) scanf("%d", &avail[i]);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    char ch;
    printf("\nDo you've any new request? Y/N Enter your choice: ");
    scanf(" %c", &ch);
    if(ch == 'Y' || ch == 'y') {
        int pid, req[m];
        printf("Process id: ");
        scanf("%d", &pid);
        printf("Request for Resources: ");
        for(int i=0; i<m; i++) scanf("%d", &req[i]);
        for(int i=0; i<m; i++){
            if(req[i] > avail[i]){
                printf("Request cannot be granted.\n");
                return 0;
            }
        }
        for(int i=0; i<m; i++){
            avail[i] -= req[i];
            alloc[pid][i] += req[i];
            need[pid][i] -= req[i];
        }
    }
    int finish[n], safeSeq[n], idx = 0;
    for(int i=0;i<n;i++) finish[i]=0;
    while(idx < n){
        int found = 0;
        for(int i=0; i<n; i++){
            if(!finish[i]){
                int flag = 1;
                for(int j=0; j<m; j++){
                    if(need[i][j] > avail[j]){
                        flag = 0; break;
                    }
                }
                if(flag){
                    for(int j=0; j<m; j++)
                        avail[j] += alloc[i][j];
                    safeSeq[idx++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if(!found){
            printf("System is NOT in a safe state.\n");
            return 0;
        }
    }
    printf("SYSTEM IS IN SAFE STATE\n");
    printf("The Safe Sequence: ");
    for(int i=0; i<n; i++)
        printf("P%d ", safeSeq[i]);
    return 0;
}
