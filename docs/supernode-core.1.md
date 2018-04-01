% supernode-core(1)
% SuperNode Development Foundation
%

# NAME

supernode-core - Core daemon for SuperNode payment network

# SYNOPSYS

supernode-core [OPTIONS]

# DESCRIPTION

SuperNode is a decentralized, federated peer-to-peer network that allows
people to send payments in any asset anywhere in the world
instantaneously, and with minimal fee. `SuperNode-core` is the core
component of this network. `SuperNode-core` is a C++ implementation of
the SuperNode Consensus Protocol configured to construct a chain of
ledgers that are guaranteed to be in agreement across all the
participating nodes at all times.

## Configuration file

In most modes of operation, supernode-core requires a configuration
file.  By default, it looks for a file called `supernode-core.cfg` in
the current working directory, but this default can be changed by the
`--conf` command-line option.  The configuration file is in TOML
syntax.  The full set of supported directives can be found in
`%prefix%/share/doc/supernode-core_example.cfg`.

%commands%

# EXAMPLES

See `%prefix%/share/doc/*.cfg` for some example supernode-core
configuration files

# FILES

supernode-core.cfg
:   Configuration file (in current working directory by default)

# SEE ALSO

<https://www.supernode.org/developers/supernode-core/software/admin.html>
:   supernode-core administration guide

<https://www.supernode.org>
:   Home page of SuperNode development foundation

# BUGS

Please report bugs using the github issue tracker:\
<https://github.com/supernode/supernode-core/issues>
