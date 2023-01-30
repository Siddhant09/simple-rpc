struct list 
{
      char item1[20];
      char item2[20];
      char item3[20];
      char item4[20];
      char item5[20];
      char item6[20];
};

struct matrix 
{
      int a;
      int b;
      int c;
      int d;
};

program ADD_PROG{
      version ADDS_VERS{
            list get_merged_list(list) = 1;
            list get_reverse_string(list) = 2;
            matrix get_matrix_sum(matrix) = 3;
      } = 1;
} = 0x31111111;