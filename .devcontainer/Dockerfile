# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.154.0/containers/cpp/.devcontainer/base.Dockerfile

FROM mcr.microsoft.com/vscode/devcontainers/cpp:focal

# [Optional] Uncomment this section to install additional packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends clang-format clang-tidy python3-pip graphviz
RUN sudo pip3 install conan
