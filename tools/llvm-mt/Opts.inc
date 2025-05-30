/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {llvm::StringLiteral("")})
PREFIX(prefix_1, {llvm::StringLiteral("/") COMMA llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX

/////////
// Prefix Union

#ifdef PREFIX_UNION
#define COMMA ,
PREFIX_UNION({
llvm::StringLiteral("-") COMMA llvm::StringLiteral("/") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX_UNION

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "unsupported", unsupported, Group, INVALID, INVALID, nullptr, 0, 0, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/?", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/canonicalize:", canonicalize, Flag, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/category", category, Flag, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/check_for_duplicates:", check_for_duplicates, Flag, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/dll:", dll, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "dll", nullptr)
OPTION(prefix_1, "/hashupdate:", hash_update, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "file", nullptr)
OPTION(prefix_1, "/hashupdate", hash_update_flag, Flag, unsupported, hash_update, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/help", help_long, Flag, INVALID, help, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/h", h, Flag, INVALID, help, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/identity:", identity, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "identity", nullptr)
OPTION(prefix_1, "/inputresource:", input_resource, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "file", nullptr)
OPTION(prefix_1, "/makecdfs:", make_cdfs, Flag, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/managedassemblyname:", managed_assembly_name, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "assembly", nullptr)
OPTION(prefix_1, "/manifest", manifest, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Used to specify each manifest that need to be processed", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "manifest", nullptr)
OPTION(prefix_1, "/nodependency", no_dependency, Flag, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/nologo", no_logo, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "No effect as this tool never writes copyright data.  Included for parity", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/notify_update", notify_update, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Exit with a special exit code if the output file has changed", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/out:", out, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Name of the output manifest.  If this is skipped and only one manifest is being operated upon by the tool, that manifest is modified in place", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "manifest", nullptr)
OPTION(prefix_1, "/outputresource:", output_resource, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "file", nullptr)
OPTION(prefix_1, "/outputresource", output_resource_flag, Flag, unsupported, output_resource, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/replacements:", replacements, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "file", nullptr)
OPTION(prefix_1, "/rgs:", rgs, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "script", nullptr)
OPTION(prefix_1, "/tlb:", tlb, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "file", nullptr)
OPTION(prefix_1, "/updateresource:", update_resource, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "file", nullptr)
OPTION(prefix_1, "/validate_file_hashes:", validate_file_hashes, Joined, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "", nullptr)
OPTION(prefix_1, "/validate_manifest", validate_manifest, Flag, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/verbose", verbose, Flag, unsupported, INVALID, nullptr, 0, DefaultVis, 0,
       "Not supported", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE


