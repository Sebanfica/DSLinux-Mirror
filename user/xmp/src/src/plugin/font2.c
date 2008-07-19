/* Small font for xmdp from Future Crew's MDP */

#include "xpanel.h"


static int mdp_font2_index[] = {
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
    722,   1,   5,   0,   0,  12,  24,  35,
     39,  45,  51,  60,  69,  73,  82,  85,
     93, 102, 109, 116, 123, 131, 138, 145,
    153, 160, 709,   0,   0, 167,   0, 174,
      0, 183, 196, 205, 216, 226, 235, 244,
    256, 266, 271, 281, 291, 300, 315, 328,
    339, 348, 360, 370, 378, 389, 399, 410,
    427, 439, 452, 712,   0, 717,   0,   0,
      0, 463, 473, 483, 491, 501, 510, 519,
    529, 539, 544, 549, 560, 565, 581, 592,
    600, 610, 620, 630, 638, 645, 656, 666,
    681, 691, 701,   0,   0,   0,   0,   0
};
  

static char *mdp_font2[] = {
"",
"....##.########",
"....##.########",
"....##.########",
"",
"............###",
"............###",
".",
".",
"............###",
"............###",
"",
"....#",
"....##.....##",
".....##...####",
"......##..#..#",
".......##.####",
".....##.##.##",
"....####.##",
"....#..#..##",
"....####...##",
".....##.....##",
".............#",
"",
".....##",
"....####.####",
"....#..#######",
"....#..###...#",
"....#.##.#####",
"....###...###",
".....##",
"....#####",
"....#..##",
"........#",
"",
"...........#",
"...........###",
"............##",
"",
"........###",
"......#######",
".....###...###",
"....##.......##",
"....#.........#",
"",
"....#.........#",
"....##.......##",
".....###...###",
"......#######",
"........###",
"",
"........##",
".......####",
"......######",
".....########",
".....########",
"......######",
".......####",
"........##",
"",
"........##",
"........##",
"........##",
".....########",
".....########",
"........##",
"........##",
"........##",
"",
"...#",
"...###",
"....##",
"",
"........##",
"........##",
"........##",
"........##",
"........##",
"........##",
"........##",
"........##",
"",
"....##",
"....##",
"",
"....##",
"....####",
"......####",
"........####",
"..........####",
"............###",
"..............#",
"",
".....#########",
"....###########",
"....#.........#",
"....#.........#",
"....###########",
".....#########",
"",
"",
"",
"....#.......#",
"....#.......##",
"....###########",
"....###########",
"....#",
"....#",
"",
"....######...#",
"....#######..##",
"....#....###..#",
"....#.....###.#",
"....####...####",
"....####....##",
"",
".....###....##",
"....####....###",
"....#.....#...#",
"....#.....#...#",
"....###########",
".....#####.###",
"",
".........######",
".........######",
"....#....#",
"....###########",
"....###########",
"....#....#",
"",
"",
".....###..#####",
"....####..#####",
"....#......#..#",
"....#......#..#",
"....########.##",
".....######..##",
"",
".....#########",
"....###########",
"....#......#..#",
"....#......#.##",
"....########.##",
".....######..#",
"",
"............###",
"....#.......###",
"....#######...#",
"....########..#",
"....#.....#####",
"...........####",
"",
"",
".....#####.###",
"....###########",
"....#.....#...#",
"....#.....#...#",
"....###########",
".....#####.###",
"",
".....###..####",
"....####.######",
"....#....#....#",
"....#....#....#",
"....###########",
".....#########",
"",
".......##.##",
".......##.##",
".......##.##",
".......##.##",
".......##.##",
".......##.##",
"",
"............##",
"............###",
"..............#",
"....##.###....#",
"....##.####...#",
"....##.########",
"..........#####",
"...........###",
"",
"....##",
"....####",
"....######",
"....##.#####.##",
".........######",
".........#.####",
".........#.####",
".........####",
"....##.####",
"....######",
"....####",
"....##",
"",
"....##...#...##",
"....###########",
"....###########",
"....##...#...##",
"....##...#...##",
"....###.###.###",
".....#########",
"......###.###",
"",
"......######",
".....#########",
".....##.....##",
"....##.......##",
"....##.......##",
"....##.......##",
"....##.......##",
"....###.....##",
".....####..####",
"......###..####",
"",
"....##.......##",
"....###########",
"....###########",
"....##.......##",
"....###.....###",
".....##.....##",
".....####.####",
"......#######",
".......####",
"",
"....##...#...##",
"....###########",
"....###########",
"....##...#...##",
"....##...#...##",
"....##..###..##",
"....##.......##",
"....###.....###",
"",
"....##...#...##",
"....###########",
"....###########",
"....##...#...##",
".........#...##",
"........###..##",
".............##",
"............###",
"",
".......#####",
".....#########",
".....###...###",
"....###.....###",
"....##.......##",
"....##.......##",
"....##.......##",
".....#.##...##",
"....#####..####",
"....#####..####",
".......##",
"",
"....##...#...##",
"....###########",
"....###########",
"....##...#...##",
".........#",
"....##...#...##",
"....###########",
"....###########",
"....##...#...##",
"",
"....##.......##",
"....###########",
"....###########",
"....##.......##",
"",
".......##",
"......###",
".....####",
"....###.#",
"....##",
"....###......##",
".....##########",
"......#########",
".............##",
"",
"....##.......##",
"....###########",
"....###########",
"....##..###..##",
".......#####",
"......###.###",
".....###...###",
"....###.....###",
"....##.......##",
"",
"....##.......##",
"....###########",
"....###########",
"....##.......##",
"....##",
"....##",
"....###",
"....###",
"",
"....##.......##",
"....###########",
"....###########",
"....##.....###",
"..........###",
".........###",
"........###",
"........###",
".........###",
"..........###",
"....##.....###",
"....###########",
"....###########",
"....##.......##",
"",
"....##.......##",
"....###########",
"....###########",
"....##.....###",
"..........###",
".........###",
"........###",
".......###",
"......###....##",
"....###########",
"....###########",
".............##",
"",
"......######",
".....#########",
".....#########",
"....###.....###",
"....##.......##",
"....##.......##",
"....###.....###",
".....#########",
".....#########",
"......######",
"",
"....##.##....##",
"....###########",
"....###########",
"....##.##....##",
".......##....##",
".......###..###",
"........######",
".........####",
"",
".......#####",
".....#########",
".....#########",
"....###.....###",
"....##.#.....##",
"....####.....##",
"....###.....###",
"....##########",
"....##########",
"...##..#####",
"...#",
"",
"....##.##....##",
"....###########",
"....###########",
"....##.##....##",
".......##....##",
"......####..###",
".....#########",
"....###..####",
"....##",
"",
".....###...###",
"....###...#####",
"....##...######",
"....##...###.##",
"....##..###..##",
"....######..###",
".....####..###",
"",
"...........####",
"............###",
".............##",
"....##.......##",
"....###########",
"....###########",
"....##.......##",
".............##",
"............###",
"...........####",
"",
".............##",
"......#########",
".....##########",
"....###......##",
"....##",
"....###......##",
".....##########",
"......#########",
".............##",
"",
".............##",
"..........#####",
".......########",
".....######..##",
"....####",
"....####",
".....######..##",
".......########",
"..........#####",
".............##",
"",
".............##",
"..........#####",
".......########",
".....######..##",
"....####",
"....#####",
".....######..##",
".......########",
".......########",
".....######..##",
"....#####",
"....####",
".....######..##",
".......########",
"..........#####",
".............##",
"",
"....##.......##",
"....###......##",
"....####...####",
"......#######",
".......####",
".......###",
".......####",
"......#######",
"....####...####",
"....###......##",
"....##.......##",
"",
".............##",
"............###",
"...........###",
"..........###",
"....##...###",
"....#######",
"....#######",
"....##...###",
"..........###",
"...........###",
"............###",
".............##",
"",
"....###.....###",
"....####.....##",
"....#####....##",
"....##.###...##",
"....##..###..##",
"....##...###.##",
"....##....#####",
"....##.....####",
"....##......###",
"....###......##",
"",
".....###.##",
"....#####.##",
"....##.##.##",
"....##.##.##",
"....##.##.##",
"....########",
".....######",
"....##.##",
"....##",
"",
"....##",
"....##....##...#",
".....###########",
"....############",
"....##....##",
"....##....##",
"....##....##",
"....########",
".....######",
"",
".....######",
"....########",
"....##....##",
"....##....##",
"....##....##",
"....##....##",
"....##....##",
"",
".....######",
"....########",
"....##....##",
"....##....##",
"....##....##",
"....############",
".....###########",
"....##....##...#",
"....##",
"",
".......##",
".....######",
"....########",
"....##.##.##",
"....##.##.##",
"....##.##.##",
"....##.#####",
".....#..###",
"",
"#......##",
"###########",
"############",
"#......##.##",
".......##.##",
"..........##",
".........###",
".........##",
"",
".##..######",
"###.########",
"##..##....##",
"##..##....##",
"##..##....##",
"############",
".##########",
"....##....##",
"..........##",
"",
"....#.....##...#",
"....############",
"....############",
"..........##",
"..........##",
"....#.....##",
"....########",
"....#######",
"....#",
"",
"....#......#",
"....########.##",
"....########.##",
"....#",
"",
"#",
"#..........#",
"############.##",
".###########.##",
"",
"....#..##......#",
"....############",
"....############",
"....#..##",
".......###",
"....#.#####",
"....####.###",
"....###...##",
"....##.....#",
"....#......#",
"",
"....#..........#",
"....############",
"....############",
"....#",
"",
"..........##",
"....#.....##",
"....#######.",
"....########",
"....#.....##",
"..........##",
"....#.....##",
"....#######.",
"....#######.",
"....#.....##",
"..........##",
"....#.....##",
"....########",
"....#######",
"....#",
"",
"..........##",
"....#.....##",
"....#######.",
"....########",
"....#.....##",
"..........##",
"....#.....##",
"....########",
"....#######",
"....#",
"",
".....######",
"....########",
"....##....##",
"....##....##",
"....##....##",
"....########",
".....######",
"",
"..........##",
"#...##....##",
"###########.",
"############",
"#...##....##",
"....##....##",
"....##....##",
"....########",
".....######",
"",
".....######",
"....########",
"....##....##",
"..#.##....##",
"#.#.##....##",
"############",
"###########",
"#...##....##",
"..........##",
"",
"..........##",
"....##...###",
"....#######",
"....########",
"....##....##",
"..........##",
"..........##",
".........###",
".........##",
"",
"....##..###",
"....##.#####",
"....##.##.##",
"....##.##.##",
"....##.##.##",
"....#####.##",
".....###..##",
"",
"..........##",
"..........##",
".....###########",
"....############",
"....##....##",
"....##....##",
"",
"...........#",
".....#######",
"....########",
"....##",
"....##",
"....##.....#",
"....########",
".....#######",
"....##",
"....##",
"",
"...........#",
"......######",
".....#######",
"....##.....#",
"....##",
"....##.....#",
".....#######",
"......######",
"...........#",
"",
"...........#",
".....#######",
"....########",
"....##.....#",
"....##",
"....##.....#",
".....#######",
".....#######",
"....##.....#",
"....##",
"....##.....#",
"....########",
".....#######",
"...........#",
"",
"....#......#",
"....####.###",
"....########",
"....#...#..#",
"........#",
"....#...#..#",
"....########",
"....####.###",
"....#......#",
"",
"...........#",
".##..#######",
"###.########",
"##..##.....#",
"##..##",
"##..##.....#",
"############",
".###########",
"....##.....#",
"",
"....##...##",
"....###..###",
"....####..##",
"....##.##.##",
"....##..####",
"....###..###",
".....##...#",
"",
".....##..##",
".....##..##",
"",
"....###########",
"....###########",
"....##.......##",
"....##.......##",
"",
"....##.......##",
"....##.......##",
"....###########",
"....###########",
"",
".",
".",
".",
".",
".",
".",
".",
".",
""
};


struct font_header font2 = { 16, mdp_font2_index, mdp_font2 };
