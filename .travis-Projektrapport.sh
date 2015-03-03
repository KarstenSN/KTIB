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
  
  cd $TRAVIS_BUILD_DIR
  
  mkdir sharetex_dokumentation
  cd sharetex_dokumentation
  git clone https://${GH_TOKEN}@github.com/KalleDK/KTIB_Dokumentation.git . > /dev/null 2>&1
  git rm -rf *
  cd ..

  find Latex/ -name *.tex -exec sed -i.bak s/..\\/Latex\\///g {} \;
  sed -i.bak s/..\\/Latex\\///g Projektdokumentation/Main.tex

  cp -r Projektdokumentation/* sharetex_dokumentation/
  cp -r Latex/* sharetex_dokumentation/

  cd sharetex_dokumentation
  find . -name *.bak -delete
  echo "compiler: pdflatex" > .latex.yml
  echo "root_file : Main.tex" >> .latex.yml
  git add -f .
  git commit -m "Travis CI"
  git push origin master
fi
