/*Checks to see if each characters in a string is unique*/
    bool isUniqChar(const char *str){
       int checker = 0;
       int i;
       int length = strlen(str);
       for ( i = 0; i < length; i++) {
          int val = str[i] - 'a';
          if ((checker & (1 << val)) > 0) {
             return false;
          }
          checker |= (1 << val);
       }
       return true;
    }

