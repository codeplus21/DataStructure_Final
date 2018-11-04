#include<stdio.h>
int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;// queue=q , visit node array, front=f,rear=r

void bfs(int v) {
	for(i = 1; i <= n; i++)
		if(a[v][i] && !visited[i])
			q[++r] = i;
	if(f <= r) {
		visited[q[f]] = 1; //[queue[front]]
		bfs(q[f++]);// recursion here
	}
}

void main() {
	int v;
	printf("\n Enter the number of vertices:");
	scanf("%d", &n); // user input



	printf("\n Enter graph data in matrix form:\n");
	for(i=1; i<=n; i++) {
		for(j=1;j<=n;j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n Enter the starting vertex:");
	scanf("%d", &v); // user input here starting node
	bfs(v); //call bfs function
	printf("\n The node which are reachable are:\n");

	for(i=1; i <= n; i++) {
		if(visited[i])
			printf("%d\t", i);
		else {
			printf("\n Bfs is not possible. Not all nodes are reachable");
			break;
		}
	}
}
