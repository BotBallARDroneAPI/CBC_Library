#include "font.h"
char font[96][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // ascii 32 = ' '
{0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x04,0x00,0x00,0x00}, // ascii 33 = '!'
{0x00,0x0a,0x0a,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // ascii 34 = '"'
{0x00,0x14,0x14,0x3f,0x14,0x14,0x3f,0x0a,0x0a,0x00,0x00,0x00}, // ascii 35 = '#'
{0x04,0x0e,0x15,0x05,0x06,0x0c,0x14,0x15,0x0e,0x04,0x00,0x00}, // ascii 36 = '$'
{0x00,0x22,0x25,0x15,0x0a,0x14,0x2a,0x29,0x11,0x00,0x00,0x00}, // ascii 37 = '%'
{0x00,0x06,0x09,0x01,0x02,0x05,0x29,0x11,0x2e,0x00,0x00,0x00}, // ascii 38 = '&'
{0x00,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // ascii 39 = '''
{0x10,0x08,0x04,0x04,0x02,0x02,0x02,0x02,0x04,0x04,0x08,0x10}, // ascii 40 = '('
{0x02,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x08,0x08,0x04,0x02}, // ascii 41 = ')'
{0x00,0x04,0x15,0x0e,0x0e,0x15,0x04,0x00,0x00,0x00,0x00,0x00}, // ascii 42 = '*'
{0x00,0x00,0x00,0x00,0x04,0x04,0x1f,0x04,0x04,0x00,0x00,0x00}, // ascii 43 = '+'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,0x08,0x04,0x00}, // ascii 44 = ','
{0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00}, // ascii 45 = '-'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,0x00,0x00,0x00}, // ascii 46 = '.'
{0x00,0x10,0x10,0x08,0x08,0x04,0x02,0x02,0x01,0x01,0x00,0x00}, // ascii 47 = '/'
{0x00,0x0e,0x11,0x19,0x15,0x13,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 48 = '0'
{0x00,0x04,0x06,0x05,0x04,0x04,0x04,0x04,0x1f,0x00,0x00,0x00}, // ascii 49 = '1'
{0x00,0x0e,0x11,0x10,0x08,0x04,0x02,0x01,0x1f,0x00,0x00,0x00}, // ascii 50 = '2'
{0x00,0x0e,0x11,0x10,0x0c,0x10,0x10,0x11,0x0e,0x00,0x00,0x00}, // ascii 51 = '3'
{0x00,0x08,0x0c,0x0a,0x09,0x1f,0x08,0x08,0x08,0x00,0x00,0x00}, // ascii 52 = '4'
{0x00,0x1f,0x01,0x01,0x0f,0x11,0x10,0x10,0x0f,0x00,0x00,0x00}, // ascii 53 = '5'
{0x00,0x0c,0x02,0x01,0x0f,0x11,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 54 = '6'
{0x00,0x1f,0x11,0x10,0x08,0x08,0x04,0x04,0x04,0x00,0x00,0x00}, // ascii 55 = '7'
{0x00,0x0e,0x11,0x11,0x0e,0x11,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 56 = '8'
{0x00,0x0e,0x11,0x11,0x11,0x1e,0x10,0x08,0x06,0x00,0x00,0x00}, // ascii 57 = '9'
{0x00,0x00,0x00,0x0c,0x0c,0x00,0x00,0x0c,0x0c,0x00,0x00,0x00}, // ascii 58 = ':'
{0x00,0x00,0x00,0x0c,0x0c,0x00,0x00,0x0c,0x0c,0x08,0x04,0x00}, // ascii 59 = ';'
{0x00,0x00,0x00,0x00,0x30,0x0c,0x03,0x0c,0x30,0x00,0x00,0x00}, // ascii 60 = '<'
{0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x1f,0x00,0x00,0x00,0x00}, // ascii 61 = '='
{0x00,0x00,0x00,0x00,0x03,0x0c,0x30,0x0c,0x03,0x00,0x00,0x00}, // ascii 62 = '>'
{0x00,0x0e,0x11,0x10,0x08,0x04,0x04,0x00,0x04,0x00,0x00,0x00}, // ascii 63 = '?'
{0x00,0x0c,0x12,0x19,0x15,0x15,0x19,0x02,0x1c,0x00,0x00,0x00}, // ascii 64 = '@'
{0x00,0x04,0x04,0x04,0x0a,0x0a,0x1f,0x11,0x11,0x00,0x00,0x00}, // ascii 65 = 'A'
{0x00,0x0f,0x11,0x11,0x0f,0x11,0x11,0x11,0x0f,0x00,0x00,0x00}, // ascii 66 = 'B'
{0x00,0x0e,0x11,0x01,0x01,0x01,0x01,0x11,0x0e,0x00,0x00,0x00}, // ascii 67 = 'C'
{0x00,0x07,0x09,0x11,0x11,0x11,0x11,0x09,0x07,0x00,0x00,0x00}, // ascii 68 = 'D'
{0x00,0x1f,0x01,0x01,0x0f,0x01,0x01,0x01,0x1f,0x00,0x00,0x00}, // ascii 69 = 'E'
{0x00,0x1f,0x01,0x01,0x0f,0x01,0x01,0x01,0x01,0x00,0x00,0x00}, // ascii 70 = 'F'
{0x00,0x0e,0x11,0x01,0x01,0x19,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 71 = 'G'
{0x00,0x11,0x11,0x11,0x1f,0x11,0x11,0x11,0x11,0x00,0x00,0x00}, // ascii 72 = 'H'
{0x00,0x0e,0x04,0x04,0x04,0x04,0x04,0x04,0x0e,0x00,0x00,0x00}, // ascii 73 = 'I'
{0x00,0x1e,0x10,0x10,0x10,0x10,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 74 = 'J'
{0x00,0x11,0x09,0x05,0x03,0x03,0x05,0x09,0x11,0x00,0x00,0x00}, // ascii 75 = 'K'
{0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x1f,0x00,0x00,0x00}, // ascii 76 = 'L'
{0x00,0x11,0x1b,0x1b,0x15,0x11,0x11,0x11,0x11,0x00,0x00,0x00}, // ascii 77 = 'M'
{0x00,0x11,0x13,0x13,0x15,0x15,0x19,0x19,0x11,0x00,0x00,0x00}, // ascii 78 = 'N'
{0x00,0x0e,0x11,0x11,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 79 = 'O'
{0x00,0x0f,0x11,0x11,0x11,0x0f,0x01,0x01,0x01,0x00,0x00,0x00}, // ascii 80 = 'P'
{0x00,0x0e,0x11,0x11,0x11,0x11,0x11,0x11,0x0e,0x08,0x30,0x00}, // ascii 81 = 'Q'
{0x00,0x0f,0x11,0x11,0x11,0x0f,0x05,0x09,0x11,0x00,0x00,0x00}, // ascii 82 = 'R'
{0x00,0x0e,0x11,0x01,0x0e,0x10,0x10,0x11,0x0e,0x00,0x00,0x00}, // ascii 83 = 'S'
{0x00,0x1f,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00}, // ascii 84 = 'T'
{0x00,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 85 = 'U'
{0x00,0x11,0x11,0x11,0x11,0x0a,0x0a,0x04,0x04,0x00,0x00,0x00}, // ascii 86 = 'V'
{0x00,0x11,0x11,0x15,0x15,0x15,0x0a,0x0a,0x0a,0x00,0x00,0x00}, // ascii 87 = 'W'
{0x00,0x11,0x11,0x0a,0x04,0x04,0x0a,0x11,0x11,0x00,0x00,0x00}, // ascii 88 = 'X'
{0x00,0x11,0x11,0x0a,0x0a,0x04,0x04,0x04,0x04,0x00,0x00,0x00}, // ascii 89 = 'Y'
{0x00,0x1f,0x10,0x08,0x04,0x04,0x02,0x01,0x1f,0x00,0x00,0x00}, // ascii 90 = 'Z'
{0x00,0x1c,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x1c}, // ascii 91 = '['
{0x00,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x00,0x00,0x00}, // ascii 92 = '\'
{0x00,0x0e,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0e}, // ascii 93 = ']'
{0x00,0x04,0x04,0x0a,0x0a,0x11,0x00,0x00,0x00,0x00,0x00,0x00}, // ascii 94 = '^'
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00}, // ascii 95 = '_'
{0x00,0x00,0x04,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // ascii 96 = '`'
{0x00,0x00,0x00,0x1e,0x11,0x11,0x11,0x19,0x16,0x00,0x00,0x00}, // ascii 97 = 'a'
{0x00,0x01,0x01,0x0d,0x13,0x11,0x11,0x11,0x0f,0x00,0x00,0x00}, // ascii 98 = 'b'
{0x00,0x00,0x00,0x0e,0x11,0x01,0x01,0x11,0x0e,0x00,0x00,0x00}, // ascii 99 = 'c'
{0x00,0x10,0x10,0x1e,0x11,0x11,0x11,0x19,0x16,0x00,0x00,0x00}, // ascii 100 = 'd'
{0x00,0x00,0x00,0x0e,0x11,0x1f,0x01,0x11,0x0e,0x00,0x00,0x00}, // ascii 101 = 'e'
{0x00,0x0c,0x02,0x0f,0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x00}, // ascii 102 = 'f'
{0x00,0x00,0x00,0x1e,0x11,0x11,0x11,0x19,0x16,0x10,0x0e,0x00}, // ascii 103 = 'g'
{0x00,0x01,0x01,0x0d,0x13,0x11,0x11,0x11,0x11,0x00,0x00,0x00}, // ascii 104 = 'h'
{0x00,0x04,0x00,0x06,0x04,0x04,0x04,0x04,0x0c,0x00,0x00,0x00}, // ascii 105 = 'i'
{0x00,0x08,0x00,0x0e,0x08,0x08,0x08,0x08,0x08,0x08,0x07,0x00}, // ascii 106 = 'j'
{0x00,0x01,0x01,0x09,0x05,0x03,0x05,0x09,0x11,0x00,0x00,0x00}, // ascii 107 = 'k'
{0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0c,0x00,0x00,0x00}, // ascii 108 = 'l'
{0x00,0x00,0x00,0x0b,0x15,0x15,0x15,0x15,0x15,0x00,0x00,0x00}, // ascii 109 = 'm'
{0x00,0x00,0x00,0x0d,0x13,0x11,0x11,0x11,0x11,0x00,0x00,0x00}, // ascii 110 = 'n'
{0x00,0x00,0x00,0x0e,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,0x00}, // ascii 111 = 'o'
{0x00,0x00,0x00,0x0d,0x13,0x11,0x11,0x11,0x0f,0x01,0x01,0x00}, // ascii 112 = 'p'
{0x00,0x00,0x00,0x1e,0x11,0x11,0x11,0x19,0x16,0x10,0x10,0x00}, // ascii 113 = 'q'
{0x00,0x00,0x00,0x1b,0x06,0x02,0x02,0x02,0x07,0x00,0x00,0x00}, // ascii 114 = 'r'
{0x00,0x00,0x00,0x0e,0x11,0x06,0x08,0x11,0x0e,0x00,0x00,0x00}, // ascii 115 = 's'
{0x00,0x02,0x02,0x0f,0x02,0x02,0x02,0x12,0x0c,0x00,0x00,0x00}, // ascii 116 = 't'
{0x00,0x00,0x00,0x11,0x11,0x11,0x11,0x19,0x16,0x00,0x00,0x00}, // ascii 117 = 'u'
{0x00,0x00,0x00,0x11,0x11,0x0a,0x0a,0x04,0x04,0x00,0x00,0x00}, // ascii 118 = 'v'
{0x00,0x00,0x00,0x11,0x11,0x15,0x15,0x0a,0x0a,0x00,0x00,0x00}, // ascii 119 = 'w'
{0x00,0x00,0x00,0x11,0x0a,0x04,0x04,0x0a,0x11,0x00,0x00,0x00}, // ascii 120 = 'x'
{0x00,0x00,0x00,0x11,0x11,0x0a,0x0a,0x04,0x04,0x02,0x01,0x00}, // ascii 121 = 'y'
{0x00,0x00,0x00,0x1f,0x08,0x04,0x02,0x01,0x1f,0x00,0x00,0x00}, // ascii 122 = 'z'
{0x00,0x18,0x04,0x04,0x04,0x04,0x03,0x04,0x04,0x04,0x04,0x18}, // ascii 123 = '{'
{0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00}, // ascii 124 = '|'
{0x00,0x03,0x04,0x04,0x04,0x04,0x18,0x04,0x04,0x04,0x04,0x03}, // ascii 125 = '}'
{0x00,0x00,0x00,0x00,0x26,0x19,0x00,0x00,0x00,0x00,0x00,0x00}, // ascii 126 = '~'
{0x00,0x00,0x00,0x1f,0x11,0x11,0x11,0x11,0x1f,0x00,0x00,0x00}, // ascii 127 = ''
};
