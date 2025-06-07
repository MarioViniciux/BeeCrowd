#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Point;

int compare(const void *a, const void *b) {
    Point *pa = (Point*)a;
    Point *pb = (Point*)b;
    return pa->x - pb->x;
}

int main() {
    int n;
    
    while (scanf("%d", &n) == 1) {
        Point points[1000];
        
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &points[i].x, &points[i].y);
        }

        qsort(points, n, sizeof(Point), compare);
        
        int maxPoints = 0;
        
        for (int start = 0; start < n; start++) {
            int a = points[start].y + 1;
            if (points[start].y == a - 1) {
                int count = 1;
                int lastX = points[start].x;
                int expectedY = a + 1; 
                
                for (int i = start + 1; i < n; i++) {
                    if (points[i].x > lastX && points[i].y == expectedY) {
                        count++;
                        lastX = points[i].x;
                        expectedY = (expectedY == a + 1) ? a - 1 : a + 1;
                    }
                }
                
                if (count > maxPoints) {
                    maxPoints = count;
                }
            }
        
            a = points[start].y - 1;
            if (points[start].y == a + 1) {
                int count = 1;
                int lastX = points[start].x;
                int expectedY = a - 1;
                
                for (int i = start + 1; i < n; i++) {
                    if (points[i].x > lastX && points[i].y == expectedY) {
                        count++;
                        lastX = points[i].x;
                        expectedY = (expectedY == a - 1) ? a + 1 : a - 1;
                    }
                }
                
                if (count > maxPoints) {
                    maxPoints = count;
                }
            }
        }
        
        printf("%d\n", maxPoints);
    }
    
    return 0;
}