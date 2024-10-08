#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_VERTICES 100
#define INF 0  // Display 0 for unreachable vertices

// Structure to represent the graph
typedef struct {
    int u, v, weight;
} Edge;

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int sptSet[], int vertices) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < vertices; v++) {
        if (sptSet[v] == 0 && dist[v] < min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to implement Dijkstra's algorithm
void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int source, int vertices) {
    int dist[MAX_VERTICES];
    int sptSet[MAX_VERTICES];

    // Initialize all distances as infinite and sptSet as false
    for (int i = 0; i < vertices; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    // Distance from source to itself is always 0
    dist[source] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < vertices - 1; count++) {
        int u = minDistance(dist, sptSet, vertices);
        sptSet[u] = 1;

        for (int v = 0; v < vertices; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the distance from source to each vertex
    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < vertices; i++) {
        if (dist[i] == INT_MAX) {
            printf("%d\t%d\n", i, INF);  // Display 0 for unreachable vertices
        } else {
            printf("%d\t%d\n", i, dist[i]);
        }
    }
}

int main() {
    int vertices, edges;
    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    // Get the number of vertices and edges from user
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // Get edges from user
    for (int i = 0; i < edges; i++) {
        int u, v, weight;
        printf("Enter edge %d (format: u v weight): ", i + 1);
        scanf("%d %d %d", &u, &v, &weight);
        graph[u][v] = weight;  // For directed graph
        graph[v][u] = weight;  // Uncomment this line for undirected graph
    }

    // Get the source vertex from user
    int source;
    printf("Enter the source vertex: ");
    scanf("%d", &source);

    // Run Dijkstra's algorithm
    dijkstra(graph, source, vertices);

    return 0;
}
