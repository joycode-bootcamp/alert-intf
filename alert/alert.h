#ifndef H49FFDC31_A2D2_4FC7_B589_D4A628090088
#define H49FFDC31_A2D2_4FC7_B589_D4A628090088

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	IN_DANGEROUS = 3,
} AlertType;

void alert(AlertType type, int x, int y);

#ifdef __cplusplus
}
#endif

#endif
