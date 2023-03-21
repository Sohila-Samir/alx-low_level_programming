void print_string_msg(char message[]) {
    puts(message);
    return;
}

void print_alphabet_lower(void) {
    int lower_start = 97;
    int lower_end = 122;

    for (; lower_start <= lower_end; lower_start++)
    {
        putchar(lower_start);
    }

    putchar('\n');
    return;
}