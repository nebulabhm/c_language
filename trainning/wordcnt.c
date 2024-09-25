/****************************************************************************
* @filename: wordcnt.c
* @brief:   统计字符，单词和行
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-04 16:10:09
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-07 12:46:27
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>
#include <ctype.h> // 为 isspace（）提供函数原型
#include <stdlib.h>

#define STOP '|'
// typedef unsigned char bool;
enum bool  {false,true};

int main (void)
{
    char c; //读入字符
/*    const char false = 0;
    const char true = 1;*/
    char prev; //前一个读入字符
    long n_chars = 0L; //字符数
    int n_lines = 0; // 行数
    int n_words = 0; //单词数
    int p_lines = 0; //  不完整的行数
   enum bool inword = false; //  如果 c 在一个单词中，则 inwrd  等于 true

    printf ("Enter text to be analyzed(\"|\" to terminate) : \n");
    prev = '\n'; // 用于识别完整的行

    while ((c = getchar()) != STOP)
    {
            n_chars++; // 统计字符

            if (c == '\n')
                n_lines++; // 统计行

            if (!isspace(c) && !inword)
            {
                inword = true; //  开始一个新单词
                n_words++; // 统计单词
            }

            if (isspace(c) && inword)
                inword = false; //  到达单词的尾部

            prev = c; //保存字符值
        }

        if (prev != '\n')
            p_lines = 1;

        printf (" characters = %ld, words =%d, lined = %d",n_chars,n_words,n_lines);
        printf (" partial  lines = %d\n",p_lines);

        system("PAUSE");

        return 0;
}
