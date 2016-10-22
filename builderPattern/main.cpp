#include "builder.h"

void main()
{
	SkyScraper *scraper = new SkyScraper;
	Director instance(scraper);
	instance.builder();
}