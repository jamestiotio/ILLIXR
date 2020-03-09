// block_i.hh
// Finn Sinclair, 2020

#ifndef BLOCK_I_HH
#define BLOCK_I_HH

static constexpr int BLOCKI_NUM_VERTICES = 96;
static float logo3d_vertex_data[] = {
	0.96784, 0.0, 1.137038,
	-0.96784, 0.0, 1.137038,
	0.96784, 0.0, -1.152229,
	-0.96784, 0.0, -1.152229,
	0.96784, 0.0, -2.273067,
	-0.96784, 0.0, -2.273067,
	0.96784, 0.0, 2.273067,
	-0.96784, 0.0, 2.273067,
	1.497522, 0.0, 1.358825,
	-1.497522, 0.0, 1.358825,
	1.497522, 0.0, -1.374016,
	-1.497522, 0.0, -1.374016,
	1.497522, 0.0, -2.273067,
	-1.497522, 0.0, -2.273067,
	1.497522, 0.0, 2.273067,
	-1.497522, 0.0, 2.273067,
	-0.96784, 1.026238, 2.273067,
	0.96784, 1.026238, 2.273067,
	0.96784, 1.026238, 1.137038,
	-1.497522, 1.026238, 1.358825,
	-1.497522, 1.026238, 2.273067,
	-0.96784, 1.026238, 1.137038,
	0.96784, 1.026238, -1.152229,
	-0.96784, 1.026238, -1.152229,
	0.96784, 1.026238, -2.273067,
	-0.96784, 1.026238, -2.273067,
	1.497522, 1.026238, 2.273067,
	1.497522, 1.026238, 1.358825,
	-1.497522, 1.026238, -2.273067,
	-1.497522, 1.026238, -1.374016,
	1.497522, 1.026238, -1.374016,
	1.497522, 1.026238, -2.273067,
	-0.96784, 0.0, 2.494854,
	0.96784, 0.0, 2.494854,
	-1.719309, 0.0, 1.137038,
	-1.719309, 0.0, 2.494854,
	0.96784, 0.0, -2.494854,
	-0.96784, 0.0, -2.494854,
	0.746052, 0.0, 1.358825,
	0.746052, 0.0, -1.374016,
	1.719309, 0.0, 2.494854,
	1.719309, 0.0, 1.137038,
	-0.746052, 0.0, -1.374016,
	-0.746052, 0.0, 1.358825,
	-1.719309, 0.0, -2.494854,
	-1.719309, 0.0, -1.152229,
	1.719309, 0.0, -1.152229,
	1.719309, 0.0, -2.494854,
	-0.96784, 1.026238, 2.494854,
	0.96784, 1.026238, 2.494854,
	-1.719309, 1.026238, 1.137038,
	-1.719309, 1.026238, 2.494854,
	0.96784, 1.026238, -2.494854,
	-0.96784, 1.026238, -2.494854,
	0.746052, 1.026238, 1.358825,
	0.746052, 1.026238, -1.374016,
	1.719309, 1.026238, 2.494854,
	1.719309, 1.026238, 1.137038,
	-0.746052, 1.026238, -1.374016,
	-0.746052, 1.026238, 1.358825,
	-1.719309, 1.026238, -2.494854,
	-1.719309, 1.026238, -1.152229,
	1.719309, 1.026238, -1.152229,
	1.719309, 1.026238, -2.494854,
	0.96784, 0.26619, 2.273067,
	0.746052, 0.26619, 1.358825,
	-0.746052, 0.26619, 1.358825,
	-0.96784, 0.26619, 2.273067,
	0.746052, 0.26619, -1.374016,
	-0.746052, 0.26619, -1.374016,
	-0.96784, 0.26619, -2.273067,
	0.96784, 0.26619, -2.273067,
	0.96784, 0.760048, 2.273067,
	0.746052, 0.760048, 1.358825,
	-0.746052, 0.760048, 1.358825,
	-0.96784, 0.760048, 2.273067,
	0.746052, 0.760048, -1.374016,
	-0.746052, 0.760048, -1.374016,
	-0.96784, 0.760048, -2.273067,
	0.96784, 0.760048, -2.273067,
	-1.497522, 0.26619, 1.358825,
	-1.497522, 0.26619, 2.273067,
	1.497522, 0.26619, 2.273067,
	1.497522, 0.26619, 1.358825,
	-1.497522, 0.26619, -2.273067,
	-1.497522, 0.26619, -1.374016,
	1.497522, 0.26619, -1.374016,
	1.497522, 0.26619, -2.273067,
	-1.497522, 0.760048, 1.358825,
	-1.497522, 0.760048, 2.273067,
	1.497522, 0.760048, 2.273067,
	1.497522, 0.760048, 1.358825,
	-1.497522, 0.760048, -2.273067,
	-1.497522, 0.760048, -1.374016,
	1.497522, 0.760048, -1.374016,
	1.497522, 0.760048, -2.273067
};

static constexpr int BLOCKI_NUM_POLYS = 188;
static float logo3d_poly_data[] = {
	15, 67, 7,
	31, 94, 30,
	39, 86, 10,
	29, 92, 28,
	12, 71, 4,
	59, 77, 58,
	10, 87, 12,
	27, 90, 26,
	13, 85, 11,
	55, 73, 54,
	42, 66, 43,
	25, 79, 24,
	28, 78, 25,
	14, 83, 8,
	0, 57, 41,
	1, 23, 3,
	40, 49, 33,
	45, 60, 44,
	37, 52, 36,
	3, 61, 45,
	47, 62, 46,
	2, 18, 0,
	44, 53, 37,
	36, 63, 47,
	41, 56, 40,
	33, 48, 32,
	46, 22, 2,
	32, 51, 35,
	35, 50, 34,
	34, 21, 1,
	6, 32, 7,
	15, 34, 9,
	5, 36, 4,
	39, 0, 38,
	14, 41, 40,
	43, 3, 42,
	13, 45, 44,
	12, 46, 10,
	12, 36, 47,
	10, 2, 39,
	15, 32, 35,
	9, 1, 43,
	8, 0, 41,
	14, 33, 6,
	11, 3, 45,
	13, 37, 5,
	16, 49, 17,
	20, 50, 51,
	24, 53, 25,
	54, 22, 55,
	26, 57, 27,
	58, 21, 59,
	28, 61, 29,
	31, 62, 63,
	31, 52, 24,
	30, 22, 62,
	20, 48, 16,
	19, 21, 50,
	27, 18, 54,
	26, 49, 56,
	29, 23, 58,
	28, 53, 60,
	71, 86, 68,
	69, 65, 66,
	70, 68, 69,
	66, 64, 67,
	67, 80, 66,
	83, 64, 65,
	85, 70, 69,
	79, 94, 95,
	73, 77, 74,
	76, 78, 77,
	72, 74, 75,
	75, 88, 89,
	72, 91, 73,
	78, 93, 77,
	24, 95, 31,
	43, 80, 9,
	30, 76, 55,
	8, 65, 38,
	16, 89, 20,
	6, 82, 14,
	7, 64, 6,
	19, 74, 59,
	11, 69, 42,
	9, 81, 15,
	54, 91, 27,
	5, 84, 13,
	4, 70, 5,
	26, 72, 17,
	17, 75, 16,
	38, 68, 39,
	58, 93, 29,
	20, 88, 19,
	15, 81, 67,
	31, 95, 94,
	39, 68, 86,
	29, 93, 92,
	12, 87, 71,
	59, 74, 77,
	10, 86, 87,
	27, 91, 90,
	13, 84, 85,
	55, 76, 73,
	42, 69, 66,
	25, 78, 79,
	28, 92, 78,
	14, 82, 83,
	0, 18, 57,
	1, 21, 23,
	40, 56, 49,
	45, 61, 60,
	37, 53, 52,
	3, 23, 61,
	47, 63, 62,
	2, 22, 18,
	44, 60, 53,
	36, 52, 63,
	41, 57, 56,
	33, 49, 48,
	46, 62, 22,
	32, 48, 51,
	35, 51, 50,
	34, 50, 21,
	6, 33, 32,
	15, 35, 34,
	5, 37, 36,
	39, 2, 0,
	14, 8, 41,
	43, 1, 3,
	13, 11, 45,
	12, 47, 46,
	12, 4, 36,
	10, 46, 2,
	15, 7, 32,
	9, 34, 1,
	8, 38, 0,
	14, 40, 33,
	11, 42, 3,
	13, 44, 37,
	16, 48, 49,
	20, 19, 50,
	24, 52, 53,
	54, 18, 22,
	26, 56, 57,
	58, 23, 21,
	28, 60, 61,
	31, 30, 62,
	31, 63, 52,
	30, 55, 22,
	20, 51, 48,
	19, 59, 21,
	27, 57, 18,
	26, 17, 49,
	29, 61, 23,
	28, 25, 53,
	71, 87, 86,
	69, 68, 65,
	70, 71, 68,
	66, 65, 64,
	67, 81, 80,
	83, 82, 64,
	85, 84, 70,
	79, 76, 94,
	73, 76, 77,
	76, 79, 78,
	72, 73, 74,
	75, 74, 88,
	72, 90, 91,
	78, 92, 93,
	24, 79, 95,
	43, 66, 80,
	30, 94, 76,
	8, 83, 65,
	16, 75, 89,
	6, 64, 82,
	7, 67, 64,
	19, 88, 74,
	11, 85, 69,
	9, 80, 81,
	54, 73, 91,
	5, 70, 84,
	4, 71, 70,
	26, 90, 72,
	17, 72, 75,
	38, 65, 68,
	58, 77, 93,
	20, 89, 88
};

#endif