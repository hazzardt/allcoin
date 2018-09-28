

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *allcoin_strings[] = {
QT_TRANSLATE_NOOP("allcoin-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("allcoin-core", " mints updated, "),
QT_TRANSLATE_NOOP("allcoin-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Calculated accumulator checkpoint is not what is recorded by block index"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Cannot obtain a lock on data directory %s. ALLCOIN Core is probably already "
"running."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Delete all zerocoin spends and mints that have been recorded to the "
"blockchain database and reindex them (0-1, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Disable all ALLCOIN specific functionality (Masternodes, Zerocoin, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Enable automatic wallet backups triggered after each zALC minting (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Enable or disable staking functionality for ALC inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Enable or disable staking functionality for zALC inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Error: The transaction is larger than the maximum allowed transaction size!"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Execute command when the best block changes and its size is over (%s in cmd "
"is replaced by block hash, %d with the block size)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Failed to find coin set amongst held coins with less than maxNumber of Spends"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Fees (in ALC/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Fees (in ALC/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"In rare cases, a spend with 7 coins exceeds our maximum allowable "
"transaction size, please retry spend using 6 or less coins"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Preferred Denomination for automatically minted Zerocoin  "
"(1/5/10/50/100/500/1000/5000), 0 for no preference. default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Specify custom backup path to add a copy of any automatic zALC backup. If "
"set as dir, every backup generates a timestamped file. If set as file, will "
"rewrite to that file every backup. If backuppath is set as well, 4 backups "
"will happen"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Specify custom backup path to add a copy of any wallet backup. If set as "
"dir, every backup generates a timestamped file. If set as file, will rewrite "
"to that file every backup."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Unable to bind to %s on this computer. ALLCOIN Core is probably already running."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 10000 ALC."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Unable to locate enough funds for this transaction that are not equal 10000 "
"ALC."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong ALLCOIN Core will not work properly."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("allcoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("allcoin-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("allcoin-core", "(1257 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("allcoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "(default: 1)"),
QT_TRANSLATE_NOOP("allcoin-core", "(must be 1257 for mainnet)"),
QT_TRANSLATE_NOOP("allcoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("allcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("allcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("allcoin-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("allcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("allcoin-core", "Already have that input."),
QT_TRANSLATE_NOOP("allcoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("allcoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("allcoin-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Calculating missing accumulators..."),
QT_TRANSLATE_NOOP("allcoin-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("allcoin-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("allcoin-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("allcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("allcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("allcoin-core", "CoinSpend: Accumulator witness does not verify"),
QT_TRANSLATE_NOOP("allcoin-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("allcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("allcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("allcoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("allcoin-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("allcoin-core", "Copyright (C) 2015-%i The ALLCOIN Core Developers"),
QT_TRANSLATE_NOOP("allcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("allcoin-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("allcoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("allcoin-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("allcoin-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("allcoin-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("allcoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("allcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("allcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable automatic Zerocoin minting (0-1, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Entries are full."),
QT_TRANSLATE_NOOP("allcoin-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("allcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("allcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("allcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("allcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("allcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("allcoin-core", "Error loading wallet.dat: Wallet requires newer version of ALLCOIN Core"),
QT_TRANSLATE_NOOP("allcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("allcoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("allcoin-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("allcoin-core", "Error writing zerocoinDB to disk"),
QT_TRANSLATE_NOOP("allcoin-core", "Error"),
QT_TRANSLATE_NOOP("allcoin-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("allcoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("allcoin-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("allcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("allcoin-core", "Error: No valid utxo!"),
QT_TRANSLATE_NOOP("allcoin-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("allcoin-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("allcoin-core", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to calculate accumulator checkpoint"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to create mint"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to deserialize"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to find Zerocoins in wallet.dat"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to read block"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to select a zerocoin"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to wipe zerocoinDB"),
QT_TRANSLATE_NOOP("allcoin-core", "Failed to write coin serial number into wallet"),
QT_TRANSLATE_NOOP("allcoin-core", "Fee (in ALC/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("allcoin-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("allcoin-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("allcoin-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("allcoin-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("allcoin-core", "Importing..."),
QT_TRANSLATE_NOOP("allcoin-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("allcoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("allcoin-core", "Incompatible version."),
QT_TRANSLATE_NOOP("allcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("allcoin-core", "Information"),
QT_TRANSLATE_NOOP("allcoin-core", "Initialization sanity check failed. ALLCOIN Core is shutting down."),
QT_TRANSLATE_NOOP("allcoin-core", "Input is not valid."),
QT_TRANSLATE_NOOP("allcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("allcoin-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid private key."),
QT_TRANSLATE_NOOP("allcoin-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("allcoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("allcoin-core", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("allcoin-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Line: %d"),
QT_TRANSLATE_NOOP("allcoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("allcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("allcoin-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("allcoin-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("allcoin-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("allcoin-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("allcoin-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("allcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("allcoin-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("allcoin-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("allcoin-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Lookup(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Masternode options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("allcoin-core", "Masternode:"),
QT_TRANSLATE_NOOP("allcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Mint did not make it into blockchain"),
QT_TRANSLATE_NOOP("allcoin-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("allcoin-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("allcoin-core", "Need address because change is not exact"),
QT_TRANSLATE_NOOP("allcoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("allcoin-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("allcoin-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("allcoin-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("allcoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("allcoin-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("allcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("allcoin-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("allcoin-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("allcoin-core", "Number of custom location backups to retain (default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("allcoin-core", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("allcoin-core", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("allcoin-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("allcoin-core", "Options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("allcoin-core", "Percentage of automatically minted Zerocoin  (1-100, default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("allcoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Print version and exit"),
QT_TRANSLATE_NOOP("allcoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("allcoin-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("allcoin-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("allcoin-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Reindex the ALC and zALC money supply statistics"),
QT_TRANSLATE_NOOP("allcoin-core", "Reindex the accumulator database"),
QT_TRANSLATE_NOOP("allcoin-core", "Reindexing zerocoin database..."),
QT_TRANSLATE_NOOP("allcoin-core", "Reindexing zerocoin failed"),
QT_TRANSLATE_NOOP("allcoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("allcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("allcoin-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("allcoin-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("allcoin-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("allcoin-core", "Selected coins value is less than payment target"),
QT_TRANSLATE_NOOP("allcoin-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Session not complete!"),
QT_TRANSLATE_NOOP("allcoin-core", "Session timed out."),
QT_TRANSLATE_NOOP("allcoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("allcoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("allcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("allcoin-core", "Signing failed."),
QT_TRANSLATE_NOOP("allcoin-core", "Signing timed out."),
QT_TRANSLATE_NOOP("allcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("allcoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("allcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("allcoin-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("allcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("allcoin-core", "Spend Valid"),
QT_TRANSLATE_NOOP("allcoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Staking options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("allcoin-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("allcoin-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("allcoin-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("allcoin-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("allcoin-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("allcoin-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("allcoin-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("allcoin-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("allcoin-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("allcoin-core", "Syncing zALC wallet..."),
QT_TRANSLATE_NOOP("allcoin-core", "The coin spend has been used"),
QT_TRANSLATE_NOOP("allcoin-core", "The new spend coin transaction did not verify"),
QT_TRANSLATE_NOOP("allcoin-core", "The selected mint coin is an invalid coin"),
QT_TRANSLATE_NOOP("allcoin-core", "The transaction did not verify"),
QT_TRANSLATE_NOOP("allcoin-core", "This help message"),
QT_TRANSLATE_NOOP("allcoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("allcoin-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("allcoin-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("allcoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Too many spends needed"),
QT_TRANSLATE_NOOP("allcoin-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("allcoin-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction Created"),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction Mint Started"),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("allcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("allcoin-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("allcoin-core", "Try to spend with a higher security level to include more coins"),
QT_TRANSLATE_NOOP("allcoin-core", "Trying to spend an already spent serial #, try again."),
QT_TRANSLATE_NOOP("allcoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("allcoin-core", "Unable to find transaction containing mint"),
QT_TRANSLATE_NOOP("allcoin-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("allcoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("allcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("allcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("allcoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("allcoin-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("allcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("allcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("allcoin-core", "Value is below the smallest available denomination (= 1) of zALC"),
QT_TRANSLATE_NOOP("allcoin-core", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("allcoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("allcoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("allcoin-core", "Version 1 zALC require a security level of 100 to successfully spend."),
QT_TRANSLATE_NOOP("allcoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("allcoin-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("allcoin-core", "Wallet needed to be rewritten: restart ALLCOIN Core to complete"),
QT_TRANSLATE_NOOP("allcoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Wallet window title"),
QT_TRANSLATE_NOOP("allcoin-core", "Warning"),
QT_TRANSLATE_NOOP("allcoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("allcoin-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("allcoin-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("allcoin-core", "Will retry..."),
QT_TRANSLATE_NOOP("allcoin-core", "You don't have enough Zerocoins in your wallet"),
QT_TRANSLATE_NOOP("allcoin-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("allcoin-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("allcoin-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("allcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("allcoin-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("allcoin-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("allcoin-core", "isValid(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("allcoin-core", "on startup"),
QT_TRANSLATE_NOOP("allcoin-core", "wallet.dat corrupt, salvage failed"),
};
