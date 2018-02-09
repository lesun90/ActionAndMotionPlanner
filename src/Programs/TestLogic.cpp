#include "Logic/DFAIO.hpp"


extern "C" int TestLogic(int argc, char **argv)
{
    FILE *in = fopen(argv[1], "r");
    FILE *out= fopen(argv[2], "w");
    
    Abetare::DFA *dfa = Abetare::DFAIO::ReadLBT(in);
    
    Abetare::DFAIO::PrintDotty(dfa, out);
    
    delete dfa;
    fclose(in);
    fclose(out);
    
    
    return 0;
}
