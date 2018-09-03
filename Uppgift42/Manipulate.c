void dubblera(int *var1, char var2){
    switch (var2){
        case 'O':
            *var1 = *var1 * 2;
            break;
        case 'N':
            *var1 *= 2;
            break;
    }
    return;
}
