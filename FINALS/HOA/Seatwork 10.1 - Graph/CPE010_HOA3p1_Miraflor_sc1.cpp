#include <iostream>

// Stores adjacency list items
struct adjNode {
    int val, cost;
    adjNode* next;
};

// Structure to store edges
struct graphEdge {
    int start_ver, end_ver, weight;
};

class DiaGraph {

    // Insert new nodes into adjacency list
    adjNode* getAdjListNode(int value, int weight, adjNode* head) {
        adjNode* newNode = new adjNode;

        newNode->val = value;
        newNode->cost = weight;
        newNode->next = head;

        return newNode;
    }

    int N; // Number of nodes in the graph

public:

    adjNode** head; // Adjacency list as array of pointers

    // Constructor
    DiaGraph(graphEdge edges[], int n, int N) {

        // Allocate array of pointers
        head = new adjNode*[N]();

        this->N = N;

        // Initialize head pointers
        for (int i = 0; i < N; ++i) {
            head[i] = nullptr;
        }

        // Construct directed graph
        for (int i = 0; i < n; i++) {

            int start_ver = edges[i].start_ver;
            int end_ver = edges[i].end_ver;
            int weight = edges[i].weight;

            // Insert new node at beginning
            adjNode* newNode =
                getAdjListNode(end_ver, weight, head[start_ver]);

            // Update head
            head[start_ver] = newNode;
        }
    }

    // Destructor
    ~DiaGraph() {

        for (int i = 0; i < N; i++) {

            adjNode* current = head[i];

            while (current != nullptr) {

                adjNode* temp = current;
                current = current->next;

                delete temp;
            }
        }

        delete[] head;
    }
};

// Print all adjacent vertices
void display_AdjList(adjNode* ptr, int i)
{
    while (ptr != nullptr) {

        std::cout << "("
                  << i << ", "
                  << ptr->val << ", "
                  << ptr->cost
                  << ") ";

        ptr = ptr->next;
    }

    std::cout << std::endl;
}

// Graph implementation
int main()
{
    // Graph edges
    graphEdge edges[] = {

        // (x, y, w) = edge from x to y with weight w
        {0, 1, 2},
        {0, 2, 4},
        {1, 4, 3},
        {2, 3, 2},
        {3, 1, 4},
        {4, 3, 3}
    };

    // Number of vertices
    int N = 6;

    // Number of edges
    int n = sizeof(edges) / sizeof(edges[0]);

    // Construct graph
    DiaGraph diagraph(edges, n, N);

    // Print adjacency list
    std::cout << "Graph adjacency list" << std::endl;
    std::cout << "(start_vertex, end_vertex, weight):"
              << std::endl;

    for (int i = 0; i < N; i++) {

        display_AdjList(diagraph.head[i], i);
    }

    return 0;
}