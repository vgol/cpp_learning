/*
 * Quiz for bitwise operations & bit masks.
 */

#include <iostream>


int main()
{
    unsigned char option_viewed = 0x01;
    // unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    // unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char myArticleFlags = 0;

    // 1a
    myArticleFlags |= option_viewed;

    // 1b
    if (myArticleFlags & option_deleted) {
        std::cout << "Article was deleted.\n";
    }
    else {
        std::cout << "Article wasn't deleted.\n";
    }

    // 1c
    myArticleFlags &= ~option_favorited;

    // 1d

    /*
     * Below lines are identical because of De Morgan's rule.
     * myflags &= ~(option4 | option5); // turn options 4 and 5 off
     * myflags &= ~option4 & ~option5; // turn options 4 and 5 off
     */

    return 0;
}

