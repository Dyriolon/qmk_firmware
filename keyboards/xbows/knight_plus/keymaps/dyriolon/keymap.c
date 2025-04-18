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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Keymap 0 : default layer, bépo compatible systems
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
	[0] = LAYOUT(
  		KC_ESC,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_DEL,		KC_PSCR,
		BP_DLR,		BP_DQUO,	BP_LDAQ,	BP_RDAQ,	BP_LPRN,    BP_RPRN,				BP_AT,		BP_PLUS,	BP_MINS,	BP_SLSH,	BP_ASTR,	BP_EQL,		BP_PERC,	KC_BSPC,
		KC_TAB,		BP_B,		BP_EACU,	BP_P,		BP_O,		BP_EGRV,	BP_DCIR,	BP_V,		BP_D,		BP_L,		BP_J,		BP_Z,		BP_W,		BP_CCED,	KC_PGUP,
		KC_CAPS,	BP_A,		BP_U,		BP_I,		BP_E,		BP_COMM,	KC_BSPC,	BP_C,		BP_T,		BP_S,		BP_R,		BP_N,		BP_M,		KC_ENT,		KC_PGDN,
		KC_LSFT,	BP_AGRV,	BP_Y,		BP_X,		BP_DOT,		BP_K,		KC_ENT,		BP_QUOT,	BP_Q,		BP_G,		BP_H,		BP_F,		KC_RSFT,	KC_UP,
		KC_LCTL,	KC_LGUI,	KC_LALT,				KC_SPC,		KC_LCTL,	KC_LSFT,	KC_SPC,					KC_RALT,	MO(1),		KC_RCTL,	KC_LEFT,	KC_DOWN,	KC_RGHT),
	[1] = LAYOUT(
		QK_BOOT,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_CALC,   KC_MYCM,  KC_MSEL,   KC_MAIL,   KC_SCRL,   EE_CLR,
		KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,             KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_PAUS,
		RM_TOGG,   RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SPDU,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_HOME,
		KC_TRNS,   RM_PREV,  RM_VALD,  RM_HUED,  RM_SPDD,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_INS,    KC_END,
		KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_VOLU,
		KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,   KC_TRNS,  KC_MPLY,   KC_MPRV,   KC_VOLD,   KC_MNXT)
};
