#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src, including the x
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char* _strcat(char* dest, char* src) {
    // Find the end of the dest string
    char* dest_end = dest;
    while (*dest_end != '\0') {
        dest_end++;
    }
    
    // Copy the src string to the end of the dest string
    while (*src != '\0') {
        *dest_end = *src;
        dest_end++;
        src++;
    }
    
    // Add a null terminator at the end of the concatenated string
    *dest_end = '\0';
    
    // Return a pointer to the concatenated string
    return dest;
}
