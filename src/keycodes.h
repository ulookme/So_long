/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keycodes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:09:56 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 13:10:14 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYCODES_H
# define KEYCODES_H

# ifdef __APPLE__
/* Upper Row */
#  define KEY_Q 12
#  define KEY_W 13
#  define KEY_E 14
#  define KEY_R 15
#  define KEY_T 16
#  define KEY_Y 17
#  define KEY_U 32
#  define KEY_I 34
#  define KEY_O 31
#  define KEY_P 35

/* Middle Row */
#  define KEY_A 0
#  define KEY_S 1
#  define KEY_D 2
#  define KEY_F 3
#  define KEY_G 5
#  define KEY_H 4
#  define KEY_J 38
#  define KEY_K 40
#  define KEY_L 37

/* Lower Row */
#  define KEY_Z 6
#  define KEY_X 7
#  define KEY_C 8
#  define KEY_V 9
#  define KEY_B 11
#  define KEY_N 45
#  define KEY_M 46

/* Symbols */
#  define KEY_BRACKET_IN 33
#  define KEY_BRACKET_OUT 30
#  define KEY_BACKSLASH 42
#  define KEY_SEMISILICON 41
#  define KEY_QUOTES 39
#  define KEY_SILICON 34
#  define KEY_DOT 47
#  define KEY_SLASH 44
#  define KEY_TILD 50

/* Numbers (Top) */
#  define KEY_TOP_1 18
#  define KEY_TOP_2 19
#  define KEY_TOP_3 20
#  define KEY_TOP_4 21
#  define KEY_TOP_5 23
#  define KEY_TOP_6 22
#  define KEY_TOP_7 26
#  define KEY_TOP_8 28
#  define KEY_TOP_9 25
#  define KEY_TOP_0 29
#  define KEY_TOP_MINUS 27
#  define KEY_TOP_PLUS 24

/* Numbers (Numpad) */
#  define KEY_NUMPAD_0 82
#  define KEY_NUMPAD_1 83
#  define KEY_NUMPAD_2 84
#  define KEY_NUMPAD_3 85
#  define KEY_NUMPAD_4 86
#  define KEY_NUMPAD_5 87
#  define KEY_NUMPAD_6 88
#  define KEY_NUMPAD_7 89
#  define KEY_NUMPAD_8 91
#  define KEY_NUMPAD_9 92
#  define KEY_NUMPAD_MULTI 67
#  define KEY_NUMPAD_DIV 75
#  define KEY_NUMPAD_MINUS 78
#  define KEY_NUMPAD_PLUS 69
#  define KEY_NUMPAD_EQUAL 81
#  define KEY_NUMPAD_DOT 65
#  define KEY_NUMPAD_CLEAR 71

/* Controls */
#  define KEY_ENTER 76
#  define KEY_RETURN 36
#  define KEY_SPACE 49
#  define KEY_CTRL_L 59
#  define KEY_CTRL_R 62
#  define KEY_CMD 55
#  define KEY_OPTION_L 58
#  define KEY_OPTION_R 61
#  define KEY_FN 63
#  define KEY_SHIFT_L 57
#  define KEY_SHIFT_R 60
#  define KEY_CAPSLOCK 57
#  define KEY_TAB 48
#  define KEY_DELETE 51
#  define KEY_ESC 53

/* Movements */
#  define KEY_ARROW_UP 126
#  define KEY_ARROW_LEFT 123
#  define KEY_ARROW_DOWN 125
#  define KEY_ARROW_RIGHT 124
#  define KEY_PAGE_UP 116
#  define KEY_PAGE_DOWN 121
#  define KEY_HOME 115
#  define KEY_END 119

/* Functions */
#  define KEY_F1 122
#  define KEY_F2 120
#  define KEY_F3 99
#  define KEY_F4 118
#  define KEY_F5 96
#  define KEY_F6 97
#  define KEY_F7 98
#  define KEY_F8 100
#  define KEY_F9 101
#  define KEY_F10 109
#  define KEY_F11 103
#  define KEY_F12 111
#  define KEY_F13 105
#  define KEY_F14 107
#  define KEY_F15 113
#  define KEY_F16 106
#  define KEY_F17 64
#  define KEY_F18 79
#  define KEY_F19 80
#  define KEY_F20 90
# endif

#endif