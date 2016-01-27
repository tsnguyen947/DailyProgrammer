#include <stdio.h>
#include <string.h>

void encode(char *message);
int checkString(char ch);

void encode(char *message){
    char *current = message;
    char encoded[100] = "";
    memset(encoded, 0, sizeof encoded);
    int len = 0;
    while(*current){
        int found = checkString(*current);
        if(!found){
            encoded[len] = *current;
            len++;
        }
        else{
            encoded[len] = *current;
            encoded[len + 1] = 'o';
            encoded[len + 2] = *current;
            len += 3;
        }
        current++;
    }
    printf("%s\n", encoded);
}

int checkString(char ch){
    char* consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    while(*consonants){
        if(ch == *consonants)
            return 1;
        consonants++;
    }
    return 0;
}

int main(int argc, char* argv[]){
    char *input1 = "I'm speaking Robber's language!\0";
    char *input2 = "This is a test of my program";
    encode(input1);
    encode(input2);
    return 0;
}


