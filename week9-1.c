#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

int main()
{
        char str[25],mos[100];
        int j=0;

        fflush(stdin);
        printf("Enter any String to Convert into Morse Code :: ");
        gets(str);
        for(int i=0;i<=strlen(str);i++)
        {
                switch(toupper(str[i]))
                {
                  case 'A':
                  mos[j++]='.';
                  mos[j]='-';
                  break;

                  case 'B':
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='.';
                  break;

                  case 'C':
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j]='.';
                  break;

                  case 'D':
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j]='.';
                  break;

                  case 'E':
                  mos[j]='.';
                  break;

                  case 'F':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j]='.';
                    break;

                  case 'G':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='.';
                  break;

                  case 'H':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                   case 'I':
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                case 'J':
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='-';
                    break;

                case 'K':
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j]='-';
                    break;

                case 'L':
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j]='.';
                  break;

                case 'M':
                  mos[j++]='-';
                  mos[j]='-';
                  break;

                case 'N':
                  mos[j++]='-';
                  mos[j]='.';
                  break;

                case 'O':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='-';
                  break;

                case 'P':
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='.';
                    break;

                case 'Q':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j]='-';
                    break;

                case 'R':
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j]='.';
                    break;

                case 'S':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                case 'T':
                  mos[j]='-';
                    break;

                case 'U':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='-';
                    break;

                case 'V':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='-';
                    break;

                case 'W':
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j]='-';
                    break;

                case 'X':
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='-';
                    break;

                case 'y':
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j]='-';
                    break;

                case 'Z':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                case '0':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='-';
                    break;

                case '1':
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='-';
                    break;

                case '2':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='-';
                    break;

                case '3':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='-';
                  mos[j]='-';
                    break;

                case '4':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='-';
                    break;

                case '5':
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                case '6':
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                case '7':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                case '8':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='.';
                  mos[j]='.';
                    break;

                case '9':
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j++]='-';
                  mos[j]='.';
                    break;

              
        case ' ':
                  mos[j]=' ';
                  break;
                }
            j++;
        }
        mos[j-1]='\0';
        puts(mos);
        getch();
 }