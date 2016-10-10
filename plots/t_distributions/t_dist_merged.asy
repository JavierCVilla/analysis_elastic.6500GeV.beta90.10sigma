import root;
import pad_layout;

string topDir = "../../";

//string diagonals[] = { "45b_56t", "45t_56b", "combined" };
//string diagLabels[] = { "45 bot -- 56 top", "45 top -- 56 bot", "combined" };

//string diagonals[] = { "combined" };
//string diagLabels[] = { "combined" };

string diagonals[] = { "45b_56t", "45t_56b" };
string diagLabels[] = { "45 bot -- 56 top", "45 top -- 56 bot" };

drawGridDef = true;

xTicksDef = LeftTicks(0.5, 0.1);

TH1_x_max = 3.4;

NewPad("$|t|\ung{GeV^2}$", "$\d\si/\d t\ung{a.~u.}$", 12cm, 9cm);
scale(Linear, Log);

for (int dgni : diagonals.keys)
{
	pen p = StdPen(dgni + 1);

	draw(rGetObj(topDir+"DS-merged/merged.root", "ob-1-10-0.2/merged/" + diagonals[dgni] + "/h_dsdt"),
		"d0,eb,vl", p, diagLabels[dgni]);

	AddToLegend(format("events $%.2E$", robj.rExec("GetEntries")));

	label(Label("\vbox{
			\hbox{\bf elastic scattering $\sqrt s = 13\un{TeV}$}%
			\hbox{all $10\un{\si}$ fills from October 2015}%
			\hbox{$\O{100\un{\%}}$ statistics}%
			\hbox{reconstruction from 220N and 220F}%
			\hbox{tagging cuts at $4\un{\si}$}%
			\hbox{conservative acceptance correction}%
			\hbox{no other corrections}%
		}"), (0.5, 10.7), SE, Fill(white+opacity(0.7)));
}

limits((0, 1e1), (3.5, 1e11), Crop);
AttachLegend();
