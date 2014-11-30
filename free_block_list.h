#ifndef __FREE_BLOCK_LIST_H
#define __FREE_BLOCK_LIST_H

#include <stdint.h>

#include "sfs_types.h"
#include "bit_field.h"

typedef struct _FreeBlockList FreeBlockList;

FreeBlockList *fbl_create(uint32_t num_blocks);

int fbl_get_free_index(FreeBlockList *fblist);

void fbl_set_free_index(FreeBlockList *fblist, uint32_t index);

uint32_t fbl_get_num_free(FreeBlockList *fblist);

byte *fbl_get_raw(FreeBlockList *fblist);

void fbl_set_raw(FreeBlockList *fblist, byte *bytes);

void fbl_destroy(FreeBlockList *fblist);

#endif