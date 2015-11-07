import root;
import pad_layout;

string topDir = "../../";

string datasets[] = { "DS1", "DS2", "DS3", "DS4", "DS5", "DS6", "DS7" };
string fills[] = { "4495", "4496", "4499", "4505", "4509", "4510", "4511" };

string diagonals[] = { "45b_56t", "45t_56b" };
string diagLabels[] = { "45 bot -- 56 top", "45 top -- 56 bot" };

drawGridDef = true;

xTicksDef = LeftTicks(0.5, 0.1);


for (int dsi : datasets.keys)
{
	if (dsi % 3 == 0)
		NewRow();

	NewPad("$|t|\ung{GeV^2}$", "$\d\si/\d t\ung{a.~u.}$", 10cm, 8cm);
	scale(Linear, Log);

	for (int dgni : diagonals.keys)
	{
		pen p = StdPen(dgni + 1);
		draw(rGetObj(topDir+datasets[dsi]+"/distributions_"+diagonals[dgni]+".root", "acceptance correction/eb/h_t_after"),
			"d0,eb", p, diagLabels[dgni]);
	}

	limits((0, 1e1), (3.0, 1e9), Crop);
	AttachLegend(datasets[dsi] + " -- fill " + fills[dsi]);
}
