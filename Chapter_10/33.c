/* Chapter 10 exercise 30 */

/* (고급 수준) heapsort() 함수를 작성하여라. 이것은 이진탐색 트리를 기반으로
 * 하는 정렬 루틴이다. 힙은 한 노드의 값이 그 노드의 자식 노드의 값보다 작은 값
 * 을 갖는 이진트리이다. 따라서 힙의 루트는 원소들 중 가장 작은 값을 갖는 원소
 * 가 된다. 이 함수는 먼저 정렬되지 않은 배열을 받아들여 이 배열의 값을 가지고
 * 힙을 생성해야 한다. 그리고 그 힙을 가지고 다음을 수행한다.
 
    주어진 힙에 대해

    1. 루트를 삭제하고, 그것을 출력 배열의 가장 작은 원소로 하여 삽입한다.
    2. 힙의 가장 오른쪽 리프 노드를 새로운 루트로 만든다.
    3. 루트 값이 자식 노드의 값보다 크다면, 두 자식 노드 중 작은 값을 갖는 노
       드와 현재의 루트를 교환한다.
    4. 현재 노드의 값이 자식 노드의 값보다 작게 될 때까지 자식 노드와의 교환을 계
       속한다.
 
 * 이렇게 하여 얻은 트리는 다시 힙이다. 이와 같은 단계를 트리가 공백이 될 때까
 * 지 반복 수행한다. 이 과정을 마치면, 출력 배열의 원소들은 정렬되어 있을 것이
 * 다. 더 자세한 내용은 Aho, Hopcroft, Ullman의 Data Structures and Algorithms
 * (Reading, MA: Addison-Wesley, 1983)을 참조하여라.
 */

#include <stdio.h>
#include <stdlib.h>

typedef int DATA;

struct node {
   DATA d;
   struct node *left;
   struct node *right;
};

typedef struct node NODE;
typedef NODE *BTREE;

BTREE create_node(DATA d)
{
   BTREE new_node = (BTREE) malloc(sizeof(NODE));

   if (new_node == NULL) {
      printf("Memory allocation failed.\n");
      return NULL;
   }

   new_node -> d = d;
   new_node -> left = NULL;
   new_node -> right = NULL;
   return new_node;
}

BTREE array_to_node(DATA d[], int size)
{
   
}