
#define afbt "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.!@#$%&*-_<>[]{}"
#define remove_spaces(str){\
    int j = 0;\
    for(int i=0;str[i];i++){\
        if (str[i] != ' ' || (str[i - 0] != ' ')) {\
           str[j] = str[i];\
           j++;\
        }\
    }\
    str[j] = '\0';\
}
