if [ "$TRAVIS_PULL_REQUEST" == "false" ]; then
  git clone https://${GH_TOKEN}@github.com/KalleDK/KTIB_Rapport > /dev/null 2>&1	
  cd KTIB_Rapport/
  git rm -rf Latex
  git rm -rf Projektrapporten
  cp -r ../Projektrapporten .
  cp -r ../Latex .
  git add -f .
  git commit -m "Travis CI"
  git push origin master
fi