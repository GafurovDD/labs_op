#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct friends
{
    int status;
    char name[20];
    char secondname[20];
    char patronymic[20];
    int birthday;
    char addr[20]; //secondname, patronymic, birthday, telephone
    long int telephone;
} friend;

void init_friend(int n, friend *name)
{
  for (int i = 0; i < n; i++)
      name[i].status = 0;
}

void fill(int n, friend *name)
{
    char v1[20];
    char v2[20];
    char v3[20];
    char v4[20];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (k != n)
        {
            if (!name[i].status)
            {
                memset(v1, 0, sizeof(v1));
                memset(v2, 0, sizeof(v2));
                memset(v3, 0, sizeof(v3));
                name[i].status = 1;
                printf("Введите имя друга -> ");
                scanf("%s", v1);
                for (int t = 0; t < 20; t++)
                    v1[t] = tolower(v1[t]);
                strcpy(name[i].name, v1);
                printf("Введите фамилию друга -> ");
                scanf("%s", v2);
                for (int t = 0; t < 20; t++)
                    v2[t] = tolower(v2[t]);
                strcpy(name[i].secondname, v2);
                printf("Введите отчество друга -> ");
                scanf("%s", v3);
                for (int t = 0; t < 20; t++)
                    v3[t] = tolower(v3[t]);
                strcpy(name[i].patronymic, v3);
                printf("Введите год рождения друга -> ");
                scanf("%d", &name[i].birthday);
                printf("Введите адрес друга-> ");
                scanf("%s", v4);
                for (int t = 0; t < 20; t++)
                    v4[t] = tolower(v4[t]);
                strcpy(name[i].addr, v4);
                printf("Введите телефон -> ");
                scanf("%ld", &name[i].telephone);
                break;
            }
            else
                k++;
        }
  }
}

void remove_friend(int n, friend *name)
{
    name[n].status = 0;
}

void printstr(int n, friend *name)
{
    for (int i = 0; i < n; i++)
    {
        if (name[i].status)
        {
            printf("--------------------------------------------------\n");
            printf("Имя друга №%d = %s\n", i, name[i].name);
            printf("Фамилия друга №%d = %s\n", i, name[i].secondname);
            printf("Отчество друга №%d = %s\n", i, name[i].patronymic);
            printf("Год рождения друга №%d = %d\n", i, name[i].birthday);
            printf("Адрес друга №%d = %s\n", i, name[i].addr);
            printf("Телефон друга №%d = %ld\n", i, name[i].telephone);

        }
    }
}

int main()
{
  int n = 10, l = 0;
  unsigned int k = 5;
  friend test[n];
  init_friend(n, test);
  friend test1 = {1, "Иван", "Иванов","Иванович", 2000, "Красноармейская"};
  test[0] = test1;
  friend test2 = {1, "Иван", "Иванов","Иванович", 2000, "Красноармейская"};
  test[1] = test2;
  friend test3 = {1, "Иван", "Иванов","Иванович", 2000, "Красноармейская"};
  test[2] = test3;
  while(k != 255)
  {
      printf("----------------------\n  Выберите операцию:\n 1:Просмотр всего списка друзей\n 2:Добавление друга\n 3:Удаление друга\n 4:Закрыть программу\n----------------------\n");
      scanf("%d", &k);
      if (k > 4)
          printf("Введена неверная операция!\n");
      else
      {
          switch(k)
          {
              case 1:
                  printstr(n,test);
                  break;
              case 2:
                  fill(n,test);
                  break;
              case 3:
                  printf("Впишите номер удаляемого друга: \n");
                  scanf("%d", &l);
                  remove_friend(l,test);
                  break;
              case 4:
                  k = 255;
                  break;
              case 5:
                  maxdisc(n, test);
                  break;
          }
      }
      if (k != 255)
          k = 0;
  }
  return 0;
}
