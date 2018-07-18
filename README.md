# analysis_elastic.6500GeV.beta90.10sigma

Tested on Centos7 machine with gcc 4.8 and ROOT 6.12:

```
ssh lgrzanka@lxplus7.cern.ch
. /cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.12.04/x86_64-centos7-gcc48-opt/root/bin/thisroot.sh
git clone https://github.com/grzanka/analysis_elastic.6500GeV.beta90.10sigma.git
cd analysis_elastic.6500GeV.beta90.10sigma/
git checkout removing_cmssw_deps
```

Adjust EOS path (`storageDir`) in `DS1/parameters.h` and `DS1/block1/parameters.h`.

```
./run distill.cc DS1/block1/
```

Adjust hardcoded path to `generators.root` in `common_algorithms.h` (around line 125).

```
./run distributions.cc DS1
```

Differences wrt to original repo can be seen here:
https://github.com/grzanka/analysis_elastic.6500GeV.beta90.10sigma/pull/1/files

ROOT 6.14 (newest at the moment) gives some compilation error (`error while loading shared libraries: libROOTDataFrame.so: cannot open shared object file: No such file or directory`), better to try with 6.12:

```
ssh lgrzanka@lxplus7.cern.ch
. /cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.14.00/x86_64-centos7-gcc48-opt/root/bin/thisroot.sh
git clone https://github.com/grzanka/analysis_elastic.6500GeV.beta90.10sigma.git
cd analysis_elastic.6500GeV.beta90.10sigma/
git checkout removing_cmssw_deps
./run distill.cc DS1/block1/
./run distributions.cc DS1
```

