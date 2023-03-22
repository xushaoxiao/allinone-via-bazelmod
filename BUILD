#load("@gazelle//:def.bzl", "gazelle")
#
## gazelle:prefix github.com/xushaoxiao/allinone-via-bazelmod
#gazelle(name = "gazelle")
#
#gazelle(
#    name = "gazelle-update-repos",
#    args = [
#        "-from_file=go.mod",
#        "-to_macro=repositories.bzl%go_repositories",
#        "-prune",
#    ],
#    command = "update-repos",
#)

platform(
    name = "platform_mac_os",
    constraint_values = [
        "@platforms//os:macos",
        "@platforms//cpu:arm",
    ],
)
