#include "../inc/header.h"

wchar_t mx_get_random_japanese_unicode() {
	// wchar_t jap[] = L"ァアィイゥウェエォオカガキギクグケゲコゴサザシジスズセゼソゾタダチヂッツヅテデトドナニヌネノハバパヒビピフブプヘベペホボポマミムメモャヤュユョヨラリルレロヮワヰヱヲンヴヵヶヷヸヹヺ・ーヽヾ";
	// return jap[rand() % 96];
	return rand() % 16 + 12784;
}
