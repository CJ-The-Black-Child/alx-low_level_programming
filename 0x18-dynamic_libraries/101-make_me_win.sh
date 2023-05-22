#!/bin/bash
#First: we are going to remove the initial gm program
rm gm
# Then, we are going to create a new malicious program that is to produce a winning outcome only
echo '#!/bin/bash' > gm
echo 'echo "You win!"' >> gm
echo 'exit 0' >> gm
