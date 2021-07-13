
build-wrapper-win-x86-64 --out-dir build_wrapper_output_directory compile.bat

sonar-scanner.bat \
  -D"sonar.organization=thiagodnf" \
  -D"sonar.projectKey=thiagodnf_buggy-cpp-code" \
  -D"sonar.sources=." \
  -D"sonar.cfamily.build-wrapper-output=bw-output" \
  -D"sonar.host.url=https://sonarcloud.io"
