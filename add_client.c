/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"

void add_prog_1(char *host)
{
	CLIENT *clnt;
	list *result_1;
	list get_merged_list_1_arg;
	list *result_2;
	list get_reverse_string_1_arg;
	matrix *result_3;
	matrix get_matrix_sum_1_arg;

#ifndef DEBUG
	clnt = clnt_create(host, ADD_PROG, ADDS_VERS, "udp");
	if (clnt == NULL)
	{
		clnt_pcreateerror(host);
		exit(1);
	}
#endif /* DEBUG */

	int isContinue = 1;
	while (isContinue == 1)
	{
		int choise;

		printf("\nWhat would you like to do?\n");
		printf("1. Merge two lists\n");
		printf("2. Reverse a string\n");
		printf("3. Add two 2D matrix\n");
		printf("4. Exit\n");
		scanf("%d", &choise);

		if (choise == 1)
		{
			printf("Enter first item to list \n");
			scanf("%20s", get_merged_list_1_arg.item1);
			printf("Enter second item to list \n");
			scanf("%20s", get_merged_list_1_arg.item2);
			printf("Enter third item to list \n");
			scanf("%20s", get_merged_list_1_arg.item3);

			result_1 = get_merged_list_1(&get_merged_list_1_arg, clnt);
			if (result_1 == (list *)NULL)
			{
				clnt_perror(clnt, "call failed");
			}
			else
			{
				list server;
				strcpy(server.item1, "CSharp");
				strcpy(server.item2, "Java");
				strcpy(server.item3, "Python");

				printf("\nServer list:\n");
				printf("%s\n", server.item1);
				printf("%s\n", server.item2);
				printf("%s\n", server.item3);

				printf("\nClient list:\n");
				printf("%s\n", get_merged_list_1_arg.item1);
				printf("%s\n", get_merged_list_1_arg.item2);
				printf("%s\n", get_merged_list_1_arg.item3);

				printf("\nMerged list:\n");
				printf("%s\n", result_1->item1);
				printf("%s\n", result_1->item2);
				printf("%s\n", result_1->item3);
				printf("%s\n", result_1->item4);
				printf("%s\n", result_1->item5);
				printf("%s\n", result_1->item6);
			}
		}
		else if (choise == 2)
		{
			printf("Enter a string \n");
			scanf("%20s", get_reverse_string_1_arg.item1);

			result_2 = get_reverse_string_1(&get_reverse_string_1_arg, clnt);
			if (result_2 == (list *)NULL)
			{
				clnt_perror(clnt, "call failed");
			}
			else
			{
				printf("\nReversed string:\n");
				printf("%s\n", result_2->item1);
			}
		}
		else if (choise == 3)
		{
			printf("\nEnter value for mat[0][0]:");
			scanf("%d", &get_matrix_sum_1_arg.a);
			printf("Enter value for mat[0][1]:");
			scanf("%d", &get_matrix_sum_1_arg.b);
			printf("Enter value for mat[1][0]:");
			scanf("%d", &get_matrix_sum_1_arg.c);
			printf("Enter value for mat[1][1]:");
			scanf("%d", &get_matrix_sum_1_arg.d);

			matrix server;
			server.a = 5;
			server.b = 9;
			server.c = 11;
			server.d = 1;

			printf("\nServer matrix:\n");
			printf("%d ", server.a);
			printf("%d ", server.b);
			printf("\n");
			printf("%d ", server.c);
			printf("%d ", server.d);
			printf("\n");

			printf("\nClient matrix:\n");
			printf("%d ", get_matrix_sum_1_arg.a);
			printf("%d ", get_matrix_sum_1_arg.b);
			printf("\n");
			printf("%d ", get_matrix_sum_1_arg.c);
			printf("%d ", get_matrix_sum_1_arg.d);
			printf("\n");

			result_3 = get_matrix_sum_1(&get_matrix_sum_1_arg, clnt);
			if (result_3 == (matrix *)NULL)
			{
				clnt_perror(clnt, "call failed");
			}
			else
			{
				printf("\nSum of matrix:\n");
				printf("%d ", result_3->a);
				printf("%d ", result_3->b);
				printf("\n");
				printf("%d ", result_3->c);
				printf("%d ", result_3->d);
			printf("\n");
			}
		}
		else if (choise == 4)
		{
			isContinue = 2;
		}
		else
		{
			printf("\nInvalid choise\n");
		}
	}
#ifndef DEBUG
	clnt_destroy(clnt);
#endif /* DEBUG */
}

int main(int argc, char *argv[])
{
	char *host;

	if (argc < 2)
	{
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	add_prog_1(host);
	exit(0);
}