if [ "$TRAVIS_PULL_REQUEST" == "false" ]; then
  # Fix inputs da vi flytter mapperne
  find Latex/ -name *.tex -exec sed -i.bak s/..\\/Latex\\///g {} \;
  sed -i.bak s/..\\/Latex\\///g Projektdokumentation/Main.tex
  sed -i.bak s/..\\/Latex\\///g Projektrapport/Main.tex
  find . -name *.bak -delete
  
  cd $TRAVIS_BUILD_DIR
  git clone https://${GH_TOKEN}@github.com/KalleDK/KTIB_Rapport > /dev/null 2>&1
  cd KTIB_Rapport
  git rm -rf *
  cp -r ../Projektrapporten/* .
  cp -r ../Latex/* .
  cp -r ../.latex.yml .
  git add -f .
  git commit -m "Travis CI"
  git push origin master
  
  cd $TRAVIS_BUILD_DIR
  git clone https://${GH_TOKEN}@github.com/KalleDK/KTIB_Dokumentation > /dev/null 2>&1
  cd KTIB_Dokumentation
  git rm -rf *
  cp -r ../Projektdokumentation/* .
  cp -r ../Latex/* .
  cp -r ../.latex.yml .
  git add -f .
  git commit -m "Travis CI"
  git push origin master
fi
