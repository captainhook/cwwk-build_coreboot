package hwapi

import (
	"strings"
)

type brandNameMetaWl struct {
	xeon    bool
	pentium bool
	core    bool
	name    string
}

var (
	//TXTSupportedCPUs is a whitelist of TXT enabled CPUs
	TXTSupportedCPUs = []brandNameMetaWl{
		{true, false, false, "3065 "},
		{false, false, true, "E6550 "},
		{false, false, true, "E6750 "},
		{false, false, true, "E6850 "},
		{true, false, false, "L5335 "},
		{false, false, true, "E8200 "},
		{false, false, true, "E8400 "},
		{false, false, true, "E8500 "},
		{false, false, true, "Q9300 "},
		{false, false, true, "Q9450 "},
		{false, false, true, "Q9550 "},
		{false, false, true, "E8190 "},
		{false, false, true, "E8300 "},
		{false, false, true, "Q9400 "},
		{false, false, true, "Q9650 "},
		{false, false, true, "T9400 "},
		{false, false, true, "T9600 "},
		{false, false, true, "P9500 "},
		{false, false, true, "P8600 "},
		{false, false, true, "P8400 "},
		{false, false, true, "E8600 "},
		{false, false, true, "SL9300 "},
		{false, false, true, "SL9400 "},
		{false, false, true, "SP9300 "},
		{false, false, true, "SP9400 "},
		{false, false, true, "SU9300 "},
		{false, false, true, "SU9400 "},
		{false, false, true, "SU3300 "},
		{false, false, true, "T9800 "},
		{false, false, true, "P8700 "},
		{false, false, true, "Q9100 "},
		{false, false, true, "T9550 "},
		{false, false, true, "SU3500 "},
		{false, false, true, "SL9380 "},
		{false, false, true, "SP9600 "},
		{false, false, true, "SL9600 "},
		{false, false, true, "SU9600 "},
		{false, false, true, "P9600 "},
		{false, false, true, "T9900 "},
		{false, false, true, "P8800 "},
		{false, false, true, "Q9000 "},
		{false, false, true, "Q9400S "},
		{false, false, true, "Q9550S "},
		{false, false, true, "i7-870 "},
		{false, false, true, "i7-860 "},
		{false, false, true, "i7-860S "},
		{false, false, true, "P9700 "},
		{false, false, true, "Q9505 "},
		{false, false, true, "Q9505S "},
		{true, false, false, "X3430 "},
		{true, false, false, "X3440 "},
		{true, false, false, "X3450 "},
		{true, false, false, "X3460 "},
		{true, false, false, "X3470 "},
		{false, false, true, "i7-720QM "},
		{false, false, true, "i7-820QM "},
		{false, false, true, "i7-840QM "},
		{false, false, true, "i7-920XM "},
		{false, false, true, "i7-940XM "},
		{true, false, false, "L3426 "},
		{false, false, true, "i5-540M "},
		{false, false, true, "i5-650 "},
		{false, false, true, "i5-660 "},
		{false, false, true, "i5-670 "},
		{false, false, true, "i7-620LM "},
		{false, false, true, "i7-620M "},
		{false, false, true, "i7-620UM "},
		{false, false, true, "i7-640LM "},
		{false, false, true, "i5-520M "},
		{false, false, true, "i5-520UM "},
		{true, false, false, "L3406 "},
		{false, false, true, "i7-640UM "},
		{true, false, false, "X5680 "},
		{true, false, false, "W3680 "},
		{true, false, false, "W3670 "},
		{true, false, false, "X5667 "},
		{true, false, false, "X5670 "},
		{true, false, false, "X5660 "},
		{true, false, false, "X5650 "},
		{true, false, false, "E5640 "},
		{true, false, false, "E5630 "},
		{true, false, false, "E5620 "},
		{true, false, false, "L5640 "},
		{true, false, false, "L5630 "},
		{true, false, false, "L5609 "},
		{true, false, false, "X5677 "},
		{false, false, true, "i7-620LE "},
		{false, false, true, "i7-620UE "},
		{false, false, true, "i5-520E "},
		{false, false, true, "i7-610E "},
		{false, false, true, "i7-870S "},
		{false, false, true, "i7-880 "},
		{true, false, false, "X3480 "},
		{false, false, true, "i5-680 "},
		{true, false, false, "L5638 "},
		{true, false, false, "L5618 "},
		{true, false, false, "E5645 "},
		{false, false, true, "i7-740QM "},
		{false, false, true, "i7-660UM "},
		{false, false, true, "i5-540UM "},
		{false, false, true, "i5-580M "},
		{false, false, true, "i5-560M "},
		{false, false, true, "i7-660LM "},
		{false, false, true, "i7-680UM "},
		{false, false, true, "i5-560UM "},
		{false, false, true, "i7-640M "},
		{false, false, true, "i7-660UE "},
		{false, false, true, "i7-2720QM "},
		{false, false, true, "i5-2540M "},
		{false, false, true, "i5-2400 "},
		{false, false, true, "i5-2400S "},
		{false, false, true, "i5-2500 "},
		{false, false, true, "i5-2500S "},
		{false, false, true, "i5-2500T "},
		{false, false, true, "i7-2600 "},
		{false, false, true, "i7-2600S "},
		{false, false, true, "i7-2820QM "},
		{false, false, true, "i5-2520M "},
		{false, false, true, "i7-2620M "},
		{false, false, true, "i7-2920XM "},
		{true, false, false, "E3-1220 "},
		{true, false, false, "E3-1225 "},
		{true, false, false, "E3-1230 "},
		{true, false, false, "E3-1235 "},
		{true, false, false, "E3-1240 "},
		{true, false, false, "E3-1245 "},
		{true, false, false, "E3-1260L "},
		{true, false, false, "E3-1270 "},
		{true, false, false, "E3-1275 "},
		{true, false, false, "E3-1280 "},
		{true, false, false, "X5690 "},
		{true, false, false, "X5675 "},
		{true, false, false, "X5687 "},
		{true, false, false, "X5672 "},
		{true, false, false, "X5647 "},
		{true, false, false, "E5649 "},
		{true, false, false, "E5607 "},
		{true, false, false, "E5606 "},
		{true, false, false, "E5603 "},
		{true, false, false, "W3690 "},
		{true, false, false, "E3-1220L "},
		{false, false, true, "i5-2390T "},
		{false, false, true, "i5-2510E "},
		{false, false, true, "i7-2640M "},
		{false, false, true, "i7-2710QE "},
		{false, false, true, "i7-2760QM "},
		{false, false, true, "i7-2860QM "},
		{false, false, true, "i7-2960XM "},
		{true, false, false, "E7-2803 "},
		{true, false, false, "E7-4807 "},
		{true, false, false, "E7-2860 "},
		{true, false, false, "E7-4860 "},
		{true, false, false, "E7-8860 "},
		{true, false, false, "E7-2850 "},
		{true, false, false, "E7-4850 "},
		{true, false, false, "E7-8850 "},
		{true, false, false, "E7-8837 "},
		{true, false, false, "E7-8867L "},
		{true, false, false, "E7-2870 "},
		{true, false, false, "E7-4870 "},
		{true, false, false, "E7-8870 "},
		{true, false, false, "E7-2820 "},
		{true, false, false, "E7-2830 "},
		{true, false, false, "E7-4820 "},
		{true, false, false, "E7-4830 "},
		{true, false, false, "E7-8830 "},
		{false, false, true, "i7-2629M "},
		{false, false, true, "i7-2649M "},
		{false, false, true, "i7-2657M "},
		{false, false, true, "i7-2617M "},
		{false, false, true, "i7-2677M "},
		{false, false, true, "i7-2637M "},
		{false, false, true, "i5-2537M "},
		{false, false, true, "i5-2557M "},
		{false, false, true, "i7-2655LE "},
		{false, false, true, "i7-2715QE "},
		{false, false, true, "i7-2610UE "},
		{false, false, true, "i5-2515E "},
		{true, false, false, "E3-1290 "},
		{true, false, false, "E5-2648L "},
		{true, false, false, "E5-2658 "},
		{true, false, false, "E5-2687W "},
		{true, false, false, "E5-2680 "},
		{true, false, false, "E5-2660 "},
		{true, false, false, "E5-2650L "},
		{true, false, false, "E5-2630L "},
		{true, false, false, "E5-2643 "},
		{true, false, false, "E5-2609 "},
		{true, false, false, "E5-2667 "},
		{true, false, false, "E5-2650 "},
		{true, false, false, "E5-2640 "},
		{true, false, false, "E5-2603 "},
		{true, false, false, "E5-2630 "},
		{true, false, false, "E5-2620 "},
		{true, false, false, "E5-2670 "},
		{true, false, false, "E5-2690 "},
		{true, false, false, "E5-2665 "},
		{true, false, false, "E5-2637 "},
		{true, false, false, "E5-1603 "},
		{true, false, false, "E5-1650 "},
		{true, false, false, "E5-4610 "},
		{true, false, false, "E5-4640 "},
		{true, false, false, "E5-4607 "},
		{true, false, false, "E5-4650L "},
		{true, false, false, "E5-4620 "},
		{true, false, false, "E5-4617 "},
		{true, false, false, "E5-4603 "},
		{true, false, false, "E5-2450L "},
		{true, false, false, "E5-2450 "},
		{true, false, false, "E5-2440 "},
		{true, false, false, "E5-2430L "},
		{true, false, false, "E5-2407 "},
		{true, false, false, "E5-2403 "},
		{true, false, false, "E5-2430 "},
		{true, false, false, "E5-2420 "},
		{true, false, false, "E5-1607 "},
		{true, false, false, "E5-1660 "},
		{true, false, false, "E5-1620 "},
		{true, false, false, "E5-4650 "},
		{true, false, false, "E5-2470 "},
		{false, false, true, "i7-3920XM "},
		{false, false, true, "i7-3820QM "},
		{false, false, true, "i7-3720QM "},
		{false, false, true, "i7-3520M "},
		{false, false, true, "i5-3360M "},
		{false, false, true, "i5-3320M "},
		{false, false, true, "i7-3667U "},
		{false, false, true, "i5-3427U "},
		{false, false, true, "i5-3475S "},
		{false, false, true, "i5-3550 "},
		{false, false, true, "i5-3550S "},
		{false, false, true, "i5-3570T "},
		{false, false, true, "i7-3770S "},
		{false, false, true, "i7-3770T "},
		{false, false, true, "i5-3570S "},
		{false, false, true, "i5-3570 "},
		{false, false, true, "i5-3470T "},
		{false, false, true, "i5-3610ME "},
		{false, false, true, "i7-3615QE "},
		{false, false, true, "i7-3612QE "},
		{false, false, true, "i7-3610QE "},
		{false, false, true, "i7-3555LE "},
		{false, false, true, "i7-3517UE "},
		{false, false, true, "i7-3770 "},
		{true, false, false, "E3-1290V2 "},
		{true, false, false, "E3-1280V2 "},
		{true, false, false, "E3-1275V2 "},
		{true, false, false, "E3-1270V2 "},
		{true, false, false, "E3-1265LV2 "},
		{true, false, false, "E3-1245V2 "},
		{true, false, false, "E3-1240V2 "},
		{true, false, false, "E3-1230V2 "},
		{true, false, false, "E3-1225V2 "},
		{true, false, false, "E3-1220V2 "},
		{true, false, false, "E3-1220LV2 "},
		{false, true, false, "1405 "},
		{true, false, false, "E5-1428L "},
		{true, false, false, "E5-2448L "},
		{true, false, false, "E5-2428L "},
		{true, false, false, "E5-2418L "},
		{false, true, false, "1403 "},
		{false, true, false, "1407 "},
		{true, false, false, "E5-1410 "},
		{false, false, true, "i5-3470S "},
		{false, false, true, "i5-3470 "},
		{true, false, false, "E3-1125C "},
		{true, false, false, "E3-1105C "},
		{false, false, true, "i3-2115C "},
		{false, true, false, "B915C "},
		{false, false, false, "725C "},
		{false, false, true, "i7-3840QM "},
		{false, false, true, "i7-3740QM "},
		{false, false, true, "i7-3940XM "},
		{false, false, true, "i7-3540M "},
		{false, false, true, "i5-3380M "},
		{false, false, true, "i5-3340M "},
		{false, false, true, "i7-3687U "},
		{false, false, true, "i5-3437U "},
		{false, false, true, "i5-3439Y "},
		{false, false, true, "i7-3689Y "},
		{false, false, true, "i5-4350U "},
		{false, false, true, "i5-4360U "},
		{false, false, true, "i5-4570 "},
		{false, false, true, "i5-4570S "},
		{false, false, true, "i5-4570T "},
		{false, false, true, "i5-4670 "},
		{false, false, true, "i5-4670S "},
		{false, false, true, "i5-4670T "},
		{true, false, false, "E3-1220LV3 "},
		{true, false, false, "E3-1220 v3 "},
		{true, false, false, "E3-1230Lv3 "},
		{true, false, false, "E3-1230 v3 "},
		{true, false, false, "E3-1240 v3 "},
		{true, false, false, "E3-1270 v3 "},
		{true, false, false, "E3-1280 v3 "},
		{false, false, true, "i7-4650U "},
		{false, false, true, "i7-4765T "},
		{false, false, true, "i7-4770 "},
		{false, false, true, "i7-4770S "},
		{false, false, true, "i7-4770T "},
		{false, false, true, "i7-4800MQ "},
		{false, false, true, "i7-4900MQ "},
		{false, false, true, "i7-4930MX "},
		{true, false, false, "E7-2850V2 "},
		{true, false, false, "E7-2870V2 "},
		{true, false, false, "E7-2880V2 "},
		{true, false, false, "E7-2890V2 "},
		{true, false, false, "E7-4809V2 "},
		{true, false, false, "E7-4820V2 "},
		{true, false, false, "E7-4830V2 "},
		{true, false, false, "E7-4850V2 "},
		{true, false, false, "E7-4860V2 "},
		{true, false, false, "E7-4870V2 "},
		{true, false, false, "E7-4890V2 "},
		{true, false, false, "E7-8850V2 "},
		{true, false, false, "E7-8857V2 "},
		{true, false, false, "E7-8870V2 "},
		{true, false, false, "E7-8880LV2 "},
		{true, false, false, "E7-8880V2 "},
		{true, false, false, "E7-8890V2 "},
		{true, false, false, "E7-8891V2 "},
		{true, false, false, "E7-8893V2 "},
		{true, false, false, "E5-2440V2 "},
		{true, false, false, "E5-2450V2 "},
		{true, false, false, "E5-2450LV2 "},
		{true, false, false, "E5-2470V2 "},
		{true, false, false, "E5-2640V2 "},
		{true, false, false, "E5-2643V2 "},
		{true, false, false, "E5-2650V2 "},
		{true, false, false, "E5-2650LV2 "},
		{true, false, false, "E5-2660V2 "},
		{true, false, false, "E5-2667V2 "},
		{true, false, false, "E5-2670V2 "},
		{true, false, false, "E5-2680V2 "},
		{true, false, false, "E5-2690V2 "},
		{true, false, false, "E5-2695V2 "},
		{true, false, false, "E5-2697V2 "},
		{true, false, false, "E5-4610V2 "},
		{true, false, false, "E5-4620V2 "},
		{true, false, false, "E5-4627V2 "},
		{true, false, false, "E5-4640V2 "},
		{true, false, false, "E5-4650V2 "},
		{true, false, false, "E5-4657LV2 "},
		{true, false, false, "E3-1225V3 "},
		{true, false, false, "E3-1245 v3 "},
		{true, false, false, "E3-1265Lv3 "},
		{true, false, false, "E3-1275 v3 "},
		{true, false, false, "E3-1285 v3 "},
		{true, false, false, "E3-1285Lv3 "},
		{true, false, false, "E3-1268LV3 "},
		{false, false, true, "i5-4570TE "},
		{false, false, true, "i7-4700EQ "},
		{false, false, true, "i5-4402EC "},
		{false, false, true, "i7-4700EC "},
		{false, false, true, "i7-4702EC "},
		{false, false, true, "i7-4770TE "},
		{true, false, false, "E7-4880V2 "},
		{true, false, false, "E5-1410V2 "},
		{true, false, false, "E5-1428LV2 "},
		{true, false, false, "E5-1620V2 "},
		{true, false, false, "E5-1650V2 "},
		{true, false, false, "E5-1660V2 "},
		{true, false, false, "E5-2407V2 "},
		{true, false, false, "E5-2418LV2 "},
		{true, false, false, "E5-2420V2 "},
		{true, false, false, "E5-2430V2 "},
		{true, false, false, "E5-2430LV2 "},
		{true, false, false, "E5-2609V2 "},
		{true, false, false, "E5-2618LV2 "},
		{true, false, false, "E5-2620V2 "},
		{true, false, false, "E5-2630V2 "},
		{true, false, false, "E5-2630LV2 "},
		{true, false, false, "E5-2637V2 "},
		{true, false, false, "E5-4603V2 "},
		{true, false, false, "E5-4607V2 "},
		{true, false, false, "E5-2448LV2 "},
		{true, false, false, "E5-2428LV2 "},
		{true, false, false, "E5-2403V2 "},
		{false, false, true, "i7-4950HQ "},
		{false, false, true, "i7-4850HQ "},
		{false, false, true, "i7-4750HQ "},
		{false, false, true, "i7-4960HQ "},
		{false, false, true, "i7-4860HQ "},
		{false, false, true, "i7-4760HQ "},
		{true, false, false, "E5-2603V2 "},
		{true, false, false, "E5-2628LV2 "},
		{true, false, false, "E5-2648LV2 "},
		{true, false, false, "E5-2658V2 "},
		{true, false, false, "E5-2687WV2 "},
		{false, false, true, "i5-4400E "},
		{false, false, true, "i7-4701EQ "},
		{false, false, true, "i7-4860EQ "},
		{false, false, true, "i7-4850EQ "},
		{true, false, false, "E3-1275LV3 "},
		{false, false, true, "i5-4402E "},
		{false, false, true, "i5-4300U "},
		{false, false, true, "i5-4300M "},
		{false, false, true, "i7-4600M "},
		{true, false, false, "E5-4624LV2 "},
		{false, false, true, "i5-4300Y "},
		{false, false, true, "i5-4302Y "},
		{false, false, true, "i7-4600U "},
		{false, false, true, "i7-4610Y "},
		{false, false, true, "i5-4330M "},
		{false, false, true, "i7-4771 "},
		{true, false, false, "E5-1607V2 "},
		{true, false, false, "E5-1680V2 "},
		{false, true, false, "1405V2 "},
		{false, true, false, "1403V2 "},
		{true, false, false, "E3-1105CV2 "},
		{true, false, false, "E3-1125CV2 "},
		{false, true, false, "B925C "},
		{false, false, true, "i3-3115C "},
		{true, false, false, "E3-1135CV2 "},
		{false, false, true, "i5-4590T "},
		{false, false, true, "i7-4810MQ "},
		{false, false, true, "i7-4910MQ "},
		{false, false, true, "i7-4940MX "},
		{false, false, true, "i5-4410E "},
		{false, false, true, "i5-4422E "},
		{true, false, false, "E7-8895V2 "},
		{true, false, false, "E3-1284LV3 "},
		{true, false, false, "E5-2673V2 "},
		{false, false, true, "i5-4310U "},
		{false, false, true, "i5-4340M "},
		{false, false, true, "i7-4610M "},
		{false, false, true, "i5-4310M "},
		{false, false, true, "i7-4790 "},
		{false, false, true, "i7-4790S "},
		{false, false, true, "i7-4790T "},
		{false, false, true, "i5-4690 "},
		{false, false, true, "i5-4690S "},
		{false, false, true, "i5-4690T "},
		{false, false, true, "i7-4785T "},
		{false, false, true, "i5-4590 "},
		{false, false, true, "i5-4590S "},
		{true, false, false, "E3-1281V3 "},
		{true, false, false, "E3-1271V3 "},
		{true, false, false, "E3-1241V3 "},
		{true, false, false, "E3-1231V3 "},
		{true, false, false, "E3-1240LV3 "},
		{true, false, false, "E3-1286V3 "},
		{true, false, false, "E3-1286LV3 "},
		{true, false, false, "E3-1276V3 "},
		{true, false, false, "E3-1246V3 "},
		{true, false, false, "E3-1226V3 "},
		{true, false, false, "E5-2683V3 "},
		{true, false, false, "E5-2695V3 "},
		{true, false, false, "E5-2697V3 "},
		{true, false, false, "E5-2698V3 "},
		{true, false, false, "E5-2699V3 "},
		{true, false, false, "E5-2628LV3 "},
		{true, false, false, "E5-2650V3 "},
		{true, false, false, "E5-2660V3 "},
		{true, false, false, "E5-2670V3 "},
		{true, false, false, "E5-2690V3 "},
		{true, false, false, "E5-2609V3 "},
		{true, false, false, "E5-2643V3 "},
		{true, false, false, "E5-2648LV3 "},
		{true, false, false, "E5-2650LV3 "},
		{true, false, false, "E5-2658V3 "},
		{true, false, false, "E5-2680V3 "},
		{true, false, false, "E5-2687WV3 "},
		{true, false, false, "E5-1603V3 "},
		{true, false, false, "E5-1607V3 "},
		{true, false, false, "E5-1620V3 "},
		{true, false, false, "E5-1630V3 "},
		{true, false, false, "E5-1650V3 "},
		{true, false, false, "E5-1660V3 "},
		{true, false, false, "E5-1680V3 "},
		{true, false, false, "E5-2603V3 "},
		{true, false, false, "E5-2608LV3 "},
		{true, false, false, "E5-2618LV3 "},
		{true, false, false, "E5-2620V3 "},
		{true, false, false, "E5-2623V3 "},
		{true, false, false, "E5-2630V3 "},
		{true, false, false, "E5-2630LV3 "},
		{true, false, false, "E5-2637V3 "},
		{true, false, false, "E5-2640V3 "},
		{true, false, false, "E5-2667V3 "},
		{false, false, true, "i7-4980HQ "},
		{false, false, true, "i7-4870HQ "},
		{false, false, true, "i7-4770HQ "},
		{false, false, true, "5Y70 "},
		{true, false, false, "E5-1428LV3 "},
		{true, false, false, "E5-2408LV3 "},
		{true, false, false, "E5-2418LV3 "},
		{true, false, false, "E5-2428LV3 "},
		{true, false, false, "E5-2438LV3 "},
		{false, false, true, "5Y71 "},
		{true, false, false, "E7-4809V3 "},
		{true, false, false, "E7-4820V3 "},
		{true, false, false, "E7-4830V3 "},
		{true, false, false, "E7-4850V3 "},
		{true, false, false, "E7-8860V3 "},
		{true, false, false, "E7-8867V3 "},
		{true, false, false, "E7-8870V3 "},
		{true, false, false, "E7-8880V3 "},
		{true, false, false, "E7-8880LV3 "},
		{true, false, false, "E7-8890V3 "},
		{true, false, false, "E7-8891V3 "},
		{true, false, false, "E7-8893V3 "},
		{true, false, false, "E7-8895V3 "},
		{false, false, true, "i5-5350U "},
		{false, false, true, "i7-5650U "},
		{false, false, true, "i5-5300U "},
		{false, false, true, "i7-5600U "},
		{true, false, false, "E5-4610V3 "},
		{true, false, false, "E5-4620V3 "},
		{true, false, false, "E5-4627V3 "},
		{true, false, false, "E5-4640V3 "},
		{true, false, false, "E5-4648V3 "},
		{true, false, false, "E5-4650V3 "},
		{true, false, false, "E5-4655V3 "},
		{true, false, false, "E5-4660V3 "},
		{true, false, false, "E5-4667V3 "},
		{true, false, false, "E5-4669V3 "},
		{true, false, false, "E5-2658AV3 "},
		{true, false, false, "D-1520 "},
		{true, false, false, "D-1540 "},
		{true, false, false, "E3-1270LV4 "},
		{true, false, false, "E3-1265LV4 "},
		{true, false, false, "E3-1285LV4 "},
		{true, false, false, "E3-1284LV4 "},
		{true, false, false, "E3-1285V4 "},
		{false, false, true, "i7-5700EQ "},
		{false, false, true, "i7-5850EQ "},
		{true, false, false, "E3-1258LV4 "},
		{true, false, false, "E3-1278LV4 "},
		{true, false, false, "E3-1225V5 "},
		{true, false, false, "E3-1240LV5 "},
		{true, false, false, "E3-1235LV5 "},
		{true, false, false, "E3-1280V5 "},
		{true, false, false, "E3-1220V5 "},
		{true, false, false, "E3-1245V5 "},
		{true, false, false, "E3-1270V5 "},
		{true, false, false, "E3-1260LV5 "},
		{true, false, false, "E3-1240V5 "},
		{true, false, false, "E3-1275V5 "},
		{true, false, false, "E3-1268LV5 "},
		{true, false, false, "E3-1230V5 "},
		{false, false, true, "i5-6500T "},
		{false, false, true, "i5-6500 "},
		{false, false, true, "i5-6500TE "},
		{false, false, true, "i5-6600 "},
		{false, false, true, "i5-6600T "},
		{false, false, true, "i5-6300U "},
		{false, false, true, "i7-6600U "},
		{false, false, true, "i7-6700 "},
		{false, false, true, "M5-6Y57 "},
		{false, false, true, "M7-6Y75 "},
		{false, false, true, "i7-6700T "},
		{false, false, true, "i7-6700TE "},
		{false, false, true, "i5-6440HQ "},
		{false, false, true, "i7-6820HQ "},
		{false, false, true, "i7-6920HQ "},
		{true, false, false, "E3-1505MV5 "},
		{true, false, false, "E3-1535MV5 "},
		{false, false, true, "i5-6440EQ "},
		{false, false, true, "i7-6820EQ "},
		{false, false, true, "i7-6822EQ "},
		{false, false, true, "i5-6442EQ "},
		{true, false, false, "E3-1505LV5 "},
		{false, false, true, "i5-6360U "},
		{false, false, true, "i7-6660U "},
		{true, false, false, "D-1529 "},
		{true, false, false, "D-1527 "},
		{true, false, false, "D-1537 "},
		{true, false, false, "D-1528 "},
		{true, false, false, "D-1541 "},
		{true, false, false, "D-1539 "},
		{true, false, false, "D-1518 "},
		{true, false, false, "D-1521 "},
		{true, false, false, "D-1531 "},
		{true, false, false, "D-1548 "},
		{true, false, false, "E5-2695V4 "},
		{true, false, false, "E5-2699V4 "},
		{false, false, true, "i7-6650U "},
		{false, true, false, "D1517 "},
		{false, true, false, "D1508 "},
		{false, true, false, "D1519 "},
		{false, true, false, "D1509 "},
		{false, true, false, "D1507 "},
		{true, false, false, "E5-2687WV4 "},
		{true, false, false, "E5-2679V4 "},
		{true, false, false, "E5-2650LV4 "},
		{true, false, false, "E5-2698V4 "},
		{true, false, false, "E5-2680V4 "},
		{true, false, false, "E5-2697V4 "},
		{true, false, false, "E5-2648LV4 "},
		{true, false, false, "E5-2683V4 "},
		{true, false, false, "E5-2650V4 "},
		{true, false, false, "E5-2697AV4 "},
		{true, false, false, "E5-2689V4 "},
		{true, false, false, "E5-2690V4 "},
		{true, false, false, "E5-2658V4 "},
		{true, false, false, "E5-2660V4 "},
		{true, false, false, "E5-2628LV4 "},
		{true, false, false, "E5-2630LV4 "},
		{true, false, false, "E5-2667V4 "},
		{true, false, false, "E5-2623V4 "},
		{true, false, false, "E5-2630V4 "},
		{true, false, false, "E5-2618LV4 "},
		{true, false, false, "E5-2637V4 "},
		{true, false, false, "E5-2640V4 "},
		{true, false, false, "E5-1660V4 "},
		{true, false, false, "E5-2620V4 "},
		{true, false, false, "E5-1630V4 "},
		{true, false, false, "E5-2608LV4 "},
		{true, false, false, "E5-2643V4 "},
		{true, false, false, "E5-2609V4 "},
		{true, false, false, "E5-1620V4 "},
		{true, false, false, "E5-1680V4 "},
		{true, false, false, "E5-2603V4 "},
		{true, false, false, "E5-1650V4 "},
		{true, false, false, "E5-1603V4 "},
		{true, false, false, "E5-1607V4 "},
		{false, false, true, "i5-6585R "},
		{false, false, true, "i5-6685R "},
		{false, false, true, "i7-6785R "},
		{true, false, false, "D-1559 "},
		{true, false, false, "D-1577 "},
		{true, false, false, "E3-1575MV5 "},
		{true, false, false, "D-1571 "},
		{true, false, false, "D-1567 "},
		{true, false, false, "D-1581 "},
		{true, false, false, "E3-1515MV5 "},
		{true, false, false, "E3-1545MV5 "},
		{true, false, false, "D-1557 "},
		{true, false, false, "D-1587 "},
		{true, false, false, "E3-1565LV5 "},
		{true, false, false, "E3-1585LV5 "},
		{true, false, false, "E3-1585V5 "},
		{true, false, false, "E7-8890V4 "},
		{true, false, false, "E7-8893V4 "},
		{true, false, false, "E7-8880V4 "},
		{true, false, false, "E7-8860V4 "},
		{true, false, false, "E7-4809V4 "},
		{true, false, false, "E7-8891V4 "},
		{true, false, false, "E5-4660V4 "},
		{true, false, false, "E5-4640V4 "},
		{true, false, false, "E5-4627V4 "},
		{true, false, false, "E5-4620V4 "},
		{true, false, false, "E7-8870V4 "},
		{true, false, false, "E5-4628LV4 "},
		{true, false, false, "E7-8867V4 "},
		{true, false, false, "E5-4669V4 "},
		{true, false, false, "E7-4850V4 "},
		{true, false, false, "E5-4667V4 "},
		{true, false, false, "E5-4655V4 "},
		{true, false, false, "E5-4650V4 "},
		{true, false, false, "E7-4830V4 "},
		{true, false, false, "E5-4610V4 "},
		{true, false, false, "E7-4820V4 "},
		{true, false, false, "E3-1558LV5 "},
		{true, false, false, "E3-1578LV5 "},
		{true, false, false, "E7-8855V4 "},
		{false, false, true, "i7-7Y75 "},
		{true, false, false, "E5-2699AV4 "},
		{true, false, false, "E7-8894V4 "},
		{true, false, false, "E5-2699RV4 "},
		{false, false, true, "i5-7500T "},
		{false, false, true, "i7-7700T "},
		{false, false, true, "i5-7500 "},
		{false, false, true, "i7-7820EQ "},
		{false, false, true, "i7-7700 "},
		{false, false, true, "i5-7600 "},
		{false, false, true, "i5-7600T "},
		{false, false, true, "i5-7440HQ "},
		{false, false, true, "i5-7Y57 "},
		{false, false, true, "i7-7920HQ "},
		{true, false, false, "E3-1505MV6 "},
		{false, false, true, "i7-7600U "},
		{true, false, false, "E3-1535MV6 "},
		{true, false, false, "E3-1240V6 "},
		{true, false, false, "E3-1220V6 "},
		{true, false, false, "E3-1205V6 "},
		{false, false, true, "i5-7300U "},
		{true, false, false, "E3-1245V6 "},
		{true, false, false, "E3-1230V6 "},
		{true, false, false, "E3-1280V6 "},
		{true, false, false, "E3-1225V6 "},
		{true, false, false, "E3-1275V6 "},
		{true, false, false, "E3-1270V6 "},
		{false, false, true, "i7-7820HQ "},
		{false, false, true, "i5-7440EQ "},
		{false, false, true, "i5-7442EQ "},
		{false, false, true, "i5-7360U "},
		{false, false, true, "i7-7660U "},
		{true, false, false, "E3-1505LV6 "},
		{true, false, false, "E3-1285V6 "},
		{true, false, false, "5118 "},
		{true, false, false, "5120 "},
		{true, false, false, "5122 "},
		{true, false, false, "6138 "},
		{true, false, false, "5120T "},
		{true, false, false, "6136 "},
		{true, false, false, "4116 "},
		{true, false, false, "6128 "},
		{true, false, false, "6126 "},
		{true, false, false, "5115 "},
		{true, false, false, "6140 "},
		{true, false, false, "6140M "},
		{true, false, false, "6142 "},
		{true, false, false, "6142M "},
		{true, false, false, "6148 "},
		{true, false, false, "6150 "},
		{true, false, false, "6152 "},
		{true, false, false, "6130 "},
		{true, false, false, "6134 "},
		{true, false, false, "6134M "},
		{true, false, false, "6154 "},
		{true, false, false, "8180 "},
		{true, false, false, "8153 "},
		{true, false, false, "8180M "},
		{true, false, false, "8156 "},
		{true, false, false, "8158 "},
		{true, false, false, "8160 "},
		{true, false, false, "8160M "},
		{true, false, false, "8164 "},
		{true, false, false, "8168 "},
		{true, false, false, "8176M "},
		{true, false, false, "8170 "},
		{true, false, false, "8170M "},
		{true, false, false, "8176 "},
		{true, false, false, "5117 "},
		{true, false, false, "E3-1501MV6 "},
		{true, false, false, "E3-1501LV6 "},
		{true, false, false, "D-1533N "},
		{true, false, false, "D-1513N "},
		{true, false, false, "D-1543N "},
		{true, false, false, "D-1523N "},
		{true, false, false, "D-1553N "},
		{true, false, false, "3106 "},
		{true, false, false, "6132 "},
		{true, false, false, "6138T "},
		{true, false, false, "8160T "},
		{true, false, false, "4108 "},
		{true, false, false, "6130T "},
		{true, false, false, "3104 "},
		{true, false, false, "4110 "},
		{true, false, false, "6126T "},
		{true, false, false, "4109T "},
		{true, false, false, "4114 "},
		{true, false, false, "4112 "},
		{true, false, false, "6142F "},
		{true, false, false, "6138F "},
		{true, false, false, "8160F "},
		{true, false, false, "6130F "},
		{true, false, false, "6126F "},
		{true, false, false, "6148F "},
		{true, false, false, "6146 "},
		{true, false, false, "6144 "},
		{true, false, false, "5117F "},
		{false, false, true, "i7-8650U "},
		{false, false, true, "i5-8350U "},
		{true, false, false, "W-2123 "},
		{true, false, false, "W-2102 "},
		{true, false, false, "W-2104 "},
		{true, false, false, "W-2133 "},
		{true, false, false, "W-2155 "},
		{true, false, false, "8176F "},
		{true, false, false, "4114T "},
		{true, false, false, "5119T "},
		{true, false, false, "4116T "},
		{false, false, true, "i7-8700K "},
		{false, false, true, "i5-8600K "},
		{false, false, true, "i7-8700 "},
		{true, false, false, "W-2145 "},
		{true, false, false, "W-2125 "},
		{true, false, false, "W-2135 "},
		{true, false, false, "W-2195 "},
		{true, false, false, "W-2175 "},
		{false, false, true, "i7-8706G "},
	}
)

//CPUWhitelistTXTSupport returns true if the CPU is whitelisted
func (t TxtAPI) CPUWhitelistTXTSupport() bool {
	cpuName := t.ProcessorBrandName()

	for i := range TXTSupportedCPUs {
		if TXTSupportedCPUs[i].xeon && !strings.Contains(cpuName, "Xeon") {
			continue
		}
		if TXTSupportedCPUs[i].pentium && !strings.Contains(cpuName, "Pentium") {
			continue
		}
		if TXTSupportedCPUs[i].core && !strings.Contains(cpuName, "Core") {
			continue
		}
		if strings.Contains(cpuName, TXTSupportedCPUs[i].name) {
			return true
		}
	}
	return false
}
