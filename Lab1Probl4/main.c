#include <stdio.h>

// ora plecare: 12:30:40
// durata : 1:30:43
// ----
// ora sosire : 14:01:23


int main()
{
	int p_hh,p_mm,p_ss;

	int d_hh,d_mm,d_ss;

	int s_hh,s_mm,s_ss ,s_zz;

	printf("Ora plecare[hh:mm:ss]:");

	scanf("%2d:%2d:%2d", &p_hh, &p_mm, &p_ss );

	printf("Durata[hh:mm:ss]:");

	scanf("%2d:%2d:%2d", &d_hh, &d_mm, &d_ss );

	p_ss = p_ss + 60 *  (p_mm + 60 * p_hh);
	d_ss = d_ss + 60 * d_mm + 3600 * d_hh;

	s_ss = p_ss + d_ss;

	s_mm = s_ss / 60;
	s_ss = s_ss % 60;
	s_hh = s_mm / 60;
	s_mm = s_mm % 60;
	s_zz = s_hh / 24;
	s_hh = s_hh % 24;

	printf("Sosirea este la ora: %02d:%02d:%02d ",s_hh,s_mm,s_ss);
	if (s_zz > 0) {
		printf("peste %d zi(le)", s_zz);
	}else {
		printf("astazi");
	}

   return 0;
}
