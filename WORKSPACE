local_repository(
		name = "immer",
		path = "external/immer",
		)

git_repository(
		name = "com_github_nelhage_rules_boost",
		commit = "239ce40e42ab0e3fe7ce84c2e9303ff8a277c41a",
		remote = "https://github.com/nelhage/rules_boost",
		)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
boost_deps()
