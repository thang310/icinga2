#include <i2-configfile.h>

using namespace icinga;

int main(int argc, char **argv)
{
	stringstream config;
	config << "object process \"foo\" {}";
	ConfigContext ctx(&config);
	yyparse(&ctx);
	return 0;
}
