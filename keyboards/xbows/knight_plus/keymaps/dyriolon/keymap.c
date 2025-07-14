/* Copyright 2021 Shulin Huang <mumu@x-bows.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"

enum layer_names {
    _BEPO,
    _AZ_0,
    _AZ_A,
    _AZ_S,
	_FUNC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Keymap BEPO : default layer, bépo compatible systems
	*
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Delete   |    Prtsc    |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |  $  |     "   |   «   |   »   |   (   |    )      |       @    |    +    |    -   |   /  |   *  |   =  |  %  |  Backspace  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Tab |   B    |    É   |   P  |   O  |   È  |            |    ^!  |    V   |    D  |   L  |   J  |   Z  |  W  |   Ç  | PgUp |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Caps |   A   |   U   |   I  |   E  |   ,  |      Bksp      |    C  |    T   |   S  |   R  |   N  |   M  |    Enter   | PgDn |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Shift|   À  |   Y  |   X  |  .:  |   K  |       Enter       |   ’?  |    Q   |  G  |   H  |   F  | Shift|      |  ↑  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Ctrl | GUI |     LAlt    |    Space   |   Ctrl   |   Shift   |     Space     |    AltGr   |  Fn  | RCtrl|   ←  |  ↓  |   →  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	*
	*/
	[_BEPO] = LAYOUT(
		KC_ESC,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_DEL,		KC_PSCR,
		BP_DLR,		BP_DQUO,	BP_LDAQ,	BP_RDAQ,	BP_LPRN,	BP_RPRN,				BP_AT,		BP_PLUS,	BP_MINS,	BP_SLSH,	BP_ASTR,	BP_EQL,		BP_PERC,	KC_BSPC,
		KC_TAB,		BP_B,		BP_EACU,	BP_P,		BP_O,		BP_EGRV,	BP_DCIR,	BP_V,		BP_D,		BP_L,		BP_J,		BP_Z,		BP_W,		BP_CCED,	KC_PGUP,
		KC_CAPS,	BP_A,		BP_U,		BP_I,		BP_E,		BP_COMM,	KC_BSPC,	BP_C,		BP_T,		BP_S,		BP_R,		BP_N,		BP_M,		KC_ENT,		KC_PGDN,
		KC_LSFT,	BP_AGRV,	BP_Y,		BP_X,		BP_DOT,		BP_K,		KC_ENT,		BP_QUOT,	BP_Q,		BP_G,		BP_H,		BP_F,		KC_RSFT,	KC_UP,
		KC_LCTL,	KC_LGUI,	KC_LALT,				KC_SPC,		KC_LCTL,	KC_LSFT,	KC_SPC,					KC_RALT,	MO(_FUNC),	KC_RCTL,	KC_LEFT,	KC_DOWN,	KC_RGHT),


	/* Keymap AZ : base layer, bépo on azerty systems
	* Based on https://firefly.3ric.ca/windeddragon/vial-qmk/-/tree/vial/layouts/community/ergodox/bepo
	*
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Delete   |    Prtsc    |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |  $  |     "   |   <   |   >   |   (   |    )      |       @    |    +    |    -   |   /  |   *  |   =  |  %  |  Backspace  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Tab |   b    |    é   |   p  |   o  |   è  |            |    ^   |    v   |    d  |   l  |   j  |   z  |  w  |   ç  | PgUp |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Caps |   a   |   u   |   i  |   e  |   ,  |      Bksp      |    c  |    t   |   s  |   r  |   n  |   m  |    Enter   | PgDn |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Shift|   à  |   y  |   x  |   .   |   k  |       Enter      |   '   |    q   |  g  |   h  |   f  | Shift|      |  ↑  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Ctrl | GUI |     LAlt    |    Space   |   Ctrl   |   Shift   |     Space     |    AltGr   |  Fn  | RCtrl|   ←  |  ↓  |   →  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	*
	*/
	[_AZ_0] = LAYOUT(
		KC_ESC,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_DEL,		KC_PSCR,
		FR_DLR,		FR_DQUO,	FR_LABK,	FR_RABK,	FR_LPRN,	FR_RPRN,				FR_AT,		FR_PLUS,	FR_MINS,	FR_SLSH,	FR_ASTR,	FR_EQL,		FR_PERC,	KC_BSPC,
		KC_TAB,		FR_B,		FR_EACU,	FR_P,		FR_O,		FR_EGRV,	FR_CIRC,	FR_V,		FR_D,		FR_L,		FR_J,		FR_Z,		FR_W,		FR_CCED,	KC_PGUP,
		KC_CAPS,	FR_A,		FR_U,		FR_I,		FR_E,		FR_COMM,	KC_BSPC,	FR_C,		FR_T,		FR_S,		FR_R,		FR_N,		FR_M,		KC_ENT,		KC_PGDN,
		MO(_AZ_S),	FR_AGRV,	FR_Y,		FR_X,		FR_DOT,		FR_K,		KC_ENT,		FR_QUOT,	FR_Q,		FR_G,		FR_H,		FR_F,		MO(_AZ_S),	KC_UP,
		KC_LCTL,	KC_LGUI,	KC_LALT,				KC_SPC,		KC_LCTL,	MO(_AZ_S),	KC_SPC,					MO(_AZ_A),	MO(_FUNC),	KC_RCTL,	KC_LEFT,	KC_DOWN,	KC_RGHT),


	/* Keymap AZ_A : altgr layer, bépo on azerty systems
	*
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Delete   |    Prtsc    |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |     |         |       |       |   [   |    ]      |            |         |        |      |      |      |     |  Backspace  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Tab |   |    |        |   &  |      |  `   |            |        |        |       |      |      |      |     |      | PgUp |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Caps |       |   ù   |   ¨  |   €  |      |      Bksp      |       |        |      |      |      |      |    Enter   | PgDn |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Shift|  \   |   {  |   }  |       |   ~  |       Enter      |       |        |     |      |      | Shift|      |  ↑  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Ctrl | GUI |     LAlt    |    Space   |   Ctrl   |   Shift   |     Space     |    AltGr   |  Fn  | RCtrl|   ←  |  ↓  |   →  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	*
	*/
	[_AZ_A] = LAYOUT(
		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
		_______,	_______,	_______,	_______,	FR_LBRC,	FR_RBRC,				_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
		_______,	FR_PIPE,	_______,	FR_AMPR,	_______,	FR_GRV,		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
		_______,	_______,	FR_UGRV,	FR_DIAE,	FR_EURO,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
		_______,	FR_BSLS,	FR_LCBR,	FR_RCBR,	_______,	FR_TILD,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
		_______,	_______,	_______,				_______,	_______,	_______,	_______,				_______,	_______,	_______,	_______,	_______,	_______),


	/* Keymap AZ_S : shift layer, bépo on azerty systems
	*
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Delete   |    Prtsc    |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |  #  |     1   |   2   |   3   |   4   |    5      |       6    |    7    |    8   |   9  |   0  |   °  |  `  |  Backspace  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* | Tab |   B    |    E   |   P  |   O  |   E  |            |    !   |    V   |    D  |   L  |   J  |   Z  |  W  |   C  | PgUp |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Caps |   A   |   U   |   I  |   E  |   ;  |      Bksp      |    C  |    T   |   S  |   R  |   N  |   M  |    Enter   | PgDn |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Shift|   A  |   Y  |   X  |   :   |   K  |       Enter      |   ?   |    Q   |  G  |   H  |   F  | Shift|      |  ↑  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	* |Ctrl | GUI |     LAlt    |    Space   |   Ctrl   |   Shift   |     Space     |    AltGr   |  Fn  | RCtrl|   ←  |  ↓  |   →  |
	* |---------------------------------------------------------------------------------------------------------------------------------|
	*
	*/
	[_AZ_S] = LAYOUT(
		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
		FR_HASH,	FR_1,		FR_2,		FR_3,		FR_4,		FR_5,					FR_6,		FR_7,		FR_8,		FR_9,		FR_0,		FR_DEG,		FR_GRV,		_______,
		_______,	S(FR_B),	S(FR_E),	S(FR_P),	S(FR_O),	S(FR_E),	FR_EXLM,	S(FR_V),	S(FR_D),	S(FR_L),	S(FR_J),	S(FR_Z),	S(FR_W),	S(FR_C),	_______,
		_______,	S(FR_A),	S(FR_U),	S(FR_I),	S(FR_E),	FR_SCLN,	_______,	S(FR_C),	S(FR_T),	S(FR_S),	S(FR_R),	S(FR_N),	S(FR_M),	_______,	_______,
		_______,	S(FR_A),	S(FR_Y),	S(FR_X),	FR_COLN,	S(FR_K),	_______,	FR_QUES,	S(FR_Q),	S(FR_G),	S(FR_H),	S(FR_F),	_______,	_______,
		_______,	_______,	_______,				_______,	_______,	_______,	_______,				_______,	_______,	_______,	_______,	_______,	_______),
		
	[_FUNC] = LAYOUT(
		QK_BOOT,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_CALC,	KC_MYCM,	KC_MSEL,	KC_MAIL,	KC_SCRL,	EE_CLR,
		_______,	_______,	_______,	_______,	_______,	_______,				_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_PAUS,
		RM_TOGG,	RM_NEXT,	RM_VALU,	RM_HUEU,	RM_SATU,	RM_SPDU,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_HOME,
		_______,	RM_PREV,	RM_VALD,	RM_HUED,	RM_SATD,	RM_SPDD,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_INS, 	KC_END,
		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	DF(_BEPO),	DF(_AZ_0),	_______,	_______,	KC_VOLU,
		_______,	_______,	_______,				_______,	_______,	_______,	_______,				_______,	_______,	KC_MPLY,	KC_MPRV,	KC_VOLD,	KC_MNXT)
};

// Set main color based on active layer
layer_state_t layer_state_set_user(layer_state_t state) {
	uint8_t layer = get_highest_layer(state);
	// If no active layer is higher, fallback to the default layer
    if (layer == 0) {
        layer = get_highest_layer(default_layer_state);
    }
	
    switch (layer) {
        case _AZ_0:
        case _AZ_S:
        case _AZ_A:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_MULTISPLASH);
            break;
        case _BEPO:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
            break;
        default: //  for any other layers, or the default layer
            rgb_matrix_mode_noeeprom(RGB_MATRIX_RAINDROPS);
            break;
    }
    return state;
}
// Set main color based on default layer (on DF() call)
layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _AZ_0:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_MULTISPLASH);
            break;
        case _BEPO:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
            break;
        default: //  for any other layers, or the default layer
            rgb_matrix_mode_noeeprom(RGB_MATRIX_RAINDROPS);
            break;
    }
    return state;
}