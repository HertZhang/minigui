#ifndef __SHADOW_RGA_H__
#define __SHADOW_RGA_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <rga/RgaApi.h>

void *shadow_rga_g_bo_ptr();
int shadow_rga_init(int size);
void shadow_rga_exit(void);
void shadow_rga_refresh(int src_w, int src_h, int dst_w, int dst_h, int rotate);

#ifdef __cplusplus
}
#endif

#endif