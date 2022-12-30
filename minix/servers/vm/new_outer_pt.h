#pragma once
typedef struct
{
	//pt_t arr[2];
	u32_t* pt_dir;		/* page aligned (ARCH_VM_DIR_ENTRIES) */
	u32_t pt_dir_phys;
	u32_t* pt_pt[256][2]; //every slot in the outer page table points on 2 slots in the inner page table
	u32_t pt_virtop;
}new_outer_pt;