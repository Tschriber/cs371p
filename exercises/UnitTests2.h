// ------------
// UnitTests2.h
// ------------

#ifndef UnitTests2_h
#define UnitTests2_h

int cycle_length (int n) {
    assert(n > 0);
    int c = 1;
    while (n > 1) {
        if ((n % 2) == 0)
            n = (n / 2);
        else
            n = (3 * n) + 1;
        ++c;}
    assert(c > 0);
    return c;}


#endif // UnitTests2_h
