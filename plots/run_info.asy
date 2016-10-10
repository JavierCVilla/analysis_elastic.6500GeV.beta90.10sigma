//----------------------------------------------------------------------------------------------------

transform swToHours = scale(1/3600, 1);

//----------------------------------------------------------------------------------------------------

string run_datasets[];
int runs[];
real ts_from[], ts_to[];
pen colors[];

void AddRun(string ds, int r, real f, real t, pen p = yellow)
{
	run_datasets.push(ds);
	runs.push(r);
	ts_from.push(f);
	ts_to.push(t);
	colors.push(p);
}

AddRun("DS1", 9874, 20980, 21056);
AddRun("DS1", 9875, 21105, 21176);
AddRun("DS1", 9876, 21335, 21714);
AddRun("DS1", 9877, 21782, 23302);
AddRun("DS1", 9879, 23535, 23902);
AddRun("DS1", 9881, 24066, 25317);
AddRun("DS1", 9883, 25474, 32217);

AddRun("DS2", 9893, 53002, 53350);
AddRun("DS2", 9894, 53505, 54126);
AddRun("DS2", 9895, 54170, 54581);
AddRun("DS2", 9896, 54618, 55797);
AddRun("DS2", 9898, 56135, 59114);

AddRun("DS3", 9919, 87707, 88258);
AddRun("DS3", 9920, 88330, 95803);
AddRun("DS3", 9922, 95940, 99377);

AddRun("DS4", 9940, 169414, 172864);
AddRun("DS4", 9950, 175053, 175902);
AddRun("DS4", 9952, 176261, 176808);

AddRun("DS5", 9957, 205886, 206568);
AddRun("DS5", 9959, 207194, 208546);
AddRun("DS5", 9960, 208699, 209593);
AddRun("DS5", 9961, 209682, 210152);
AddRun("DS5", 9962, 210204, 210255);
AddRun("DS5", 9964, 210510, 211674);
AddRun("DS5", 9971, 213007, 220026);
AddRun("DS5", 9972, 220155, 220409);
AddRun("DS5", 9973, 221059, 221242);
AddRun("DS5", 9976, 221605, 228633);
AddRun("DS5", 9978, 228800, 237673);

AddRun("DS6", 9980, 252382, 254681);
AddRun("DS6", 9981, 254992, 255635);
AddRun("DS6", 9985, 257073, 257688);
AddRun("DS6", 9986, 257941, 260276);

AddRun("DS7", 9991, 287182, 287182);
AddRun("DS7", 9997, 288913, 291615);
AddRun("DS7", 9998, 292561, 299975);

//----------------------------------------------------------------------------------------------------

void DrawRunBands(string ds_filter="", real y_min=0, real y_max=0, bool details=true)
{
	for (int i : runs.keys)
	{
		if (ds_filter != "")
			if (run_datasets[i] != ds_filter)
				continue;

		//yaxis(XEquals(ts_from[i]/3600, false), dashed);
		//yaxis(XEquals(ts_to[i]/3600, false), dashed);
		real x_min = ts_from[i]/3600, x_max = ts_to[i]/3600;

		pen p = (details) ? colors[i]+opacity(0.3) : yellow+opacity(0.3);
		filldraw((x_min, y_min)--(x_max, y_min)--(x_max, y_max)--(x_min, y_max)--cycle, p, nullpen);

		if (details)
			label(format("{\SmallerFonts\it %u}", runs[i]), ((x_min + x_max)/2, y_max), S);
	}
}

//----------------------------------------------------------------------------------------------------

void DrawRunBoundaries(string ds_filter="")
{
	for (int i : runs.keys)
	{
		if (ds_filter != "")
			if (run_datasets[i] != ds_filter)
				continue;

		yaxis(XEquals(ts_from[i]/3600, false), dashed);
		yaxis(XEquals(ts_to[i]/3600, false), dashed);
	}
}
