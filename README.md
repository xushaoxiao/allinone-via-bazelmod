# allinone-via-bazelmod

This repo will include how to build bazel tutorials for multiple languages in a monorepo, the repo build by bazel mod, 
examples includes python, golang, java, c plus plus, js and so on.  

```shell
docker run --interactive --rm \
  --mount type=bind,source=/Users/shaoxixu/repos/allinone-via-bazelmod,target=/usr/local/workspace \
  -w /usr/local/workspace gcr.io/bazel-public/bazel:7.0.2 \
  build //...
```
