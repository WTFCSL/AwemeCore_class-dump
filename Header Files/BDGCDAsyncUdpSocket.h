//
//     Generated by private class-dump
//

@class NSString, NSData, BDGCDAsyncUdpSendPacket, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BDGCDAsyncUdpSocket : NSObject {
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    id /* block */ receiveFilterBlock;
    NSObject<OS_dispatch_queue> *receiveFilterQueue;
    BOOL receiveFilterAsync;
    id /* block */ sendFilterBlock;
    NSObject<OS_dispatch_queue> *sendFilterQueue;
    BOOL sendFilterAsync;
    unsigned int flags;
    unsigned short config;
    unsigned short max4ReceiveSize;
    unsigned int max6ReceiveSize;
    unsigned short maxSendSize;
    int socket4FD;
    int socket6FD;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *send4Source;
    NSObject<OS_dispatch_source> *send6Source;
    NSObject<OS_dispatch_source> *receive4Source;
    NSObject<OS_dispatch_source> *receive6Source;
    NSObject<OS_dispatch_source> *sendTimer;
    BDGCDAsyncUdpSendPacket *currentSend;
    NSMutableArray *sendQueue;
    unsigned long long socket4FDBytesAvailable;
    unsigned long long socket6FDBytesAvailable;
    unsigned int pendingFilterOperations;
    NSData *cachedLocalAddress4;
    NSString *cachedLocalHost4;
    unsigned short cachedLocalPort4;
    NSData *cachedLocalAddress6;
    NSString *cachedLocalHost6;
    unsigned short cachedLocalPort6;
    NSData *cachedConnectedAddress;
    NSString *cachedConnectedHost;
    unsigned short cachedConnectedPort;
    int cachedConnectedFamily;
    void *IsOnSocketQueueOrTargetQueueKey;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } streamContext;
    struct __CFReadStream { } *readStream4;
    struct __CFReadStream { } *readStream6;
    struct __CFWriteStream { } *writeStream4;
    struct __CFWriteStream { } *writeStream6;
    id userData;
}

+ (int)familyFromAddress:(id)arg0;
+ (void)listenerThread;
+ (void)startListenerThreadIfNeeded;
+ (void)addStreamListener:(id)arg0;
+ (void)removeStreamListener:(id)arg0;
+ (void)ignore:(id)arg0;
+ (id)hostFromSockaddr4:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)arg0;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)arg0;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)arg0;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)arg0;
+ (id)hostFromAddress:(id)arg0;
+ (unsigned short)portFromAddress:(id)arg0;
+ (BOOL)isIPv4Address:(id)arg0;
+ (BOOL)isIPv6Address:(id)arg0;
+ (BOOL)getHost:(id *)arg0 port:(unsigned short *)arg1 fromAddress:(id)arg2;
+ (BOOL)getHost:(id *)arg0 port:(unsigned short *)arg1 family:(int *)arg2 fromAddress:(id)arg3;

- (BOOL)preConnect:(id *)arg0;
- (void)suspendSend4Source;
- (void)doSend;
- (void)doReceive;
- (void)doReceiveEOF;
- (void)suspendSend6Source;
- (void)setupSendAndReceiveSourcesForSocket4;
- (void)setupSendAndReceiveSourcesForSocket6;
- (BOOL)createSocket4:(BOOL)arg0 socket6:(BOOL)arg1 error:(id *)arg2;
- (void)resumeSend4Source;
- (void)resumeReceive4Source;
- (void)resumeSend6Source;
- (void)resumeReceive6Source;
- (void)closeSocket4;
- (void)closeSocket6;
- (BOOL)getLocalAddress:(id *)arg0 host:(id *)arg1 port:(unsigned short *)arg2 forSocket:(int)arg3 withFamily:(int)arg4;
- (void)maybeUpdateCachedLocalAddress4Info;
- (void)maybeUpdateCachedLocalAddress6Info;
- (void)maybeUpdateCachedConnectedAddressInfo;
- (BOOL)preOp:(id *)arg0;
- (BOOL)bindToPort:(unsigned short)arg0 interface:(id)arg1 error:(id *)arg2;
- (BOOL)preBind:(id *)arg0;
- (void)convertIntefaceDescription:(id)arg0 port:(unsigned short)arg1 intoAddress4:(id *)arg2 address6:(id *)arg3;
- (void)closeSockets;
- (BOOL)createSockets:(id *)arg0;
- (void)maybeConnect;
- (void)asyncResolveHost:(id)arg0 port:(unsigned short)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)maybeDequeueSend;
- (void)notifyDidNotConnect:(id)arg0;
- (int)getAddress:(id *)arg0 error:(id *)arg1 fromAddresses:(id)arg2;
- (BOOL)connectWithAddress4:(id)arg0 error:(id *)arg1;
- (BOOL)connectWithAddress6:(id)arg0 error:(id *)arg1;
- (void)notifyDidConnectToAddress:(id)arg0;
- (void)endCurrentSend;
- (BOOL)joinMulticastGroup:(id)arg0 onInterface:(id)arg1 error:(id *)arg2;
- (BOOL)performMulticastRequest:(int)arg0 forGroup:(id)arg1 onInterface:(id)arg2 error:(id *)arg3;
- (BOOL)leaveMulticastGroup:(id)arg0 onInterface:(id)arg1 error:(id *)arg2;
- (BOOL)preJoin:(id *)arg0;
- (void)convertNumericHost:(id)arg0 port:(unsigned short)arg1 intoAddress4:(id *)arg2 address6:(id *)arg3;
- (unsigned int)indexOfInterfaceAddr6:(id)arg0;
- (void)sendData:(id)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
- (void)doPreSend;
- (void)setSendFilter:(id /* block */)arg0 withQueue:(id)arg1 isAsynchronous:(BOOL)arg2;
- (void)notifyDidNotSendDataWithTag:(long long)arg0 dueToError:(id)arg1;
- (void)notifyDidSendDataWithTag:(long long)arg0;
- (void)setupSendTimerWithTimeout:(double)arg0;
- (id)sendTimeoutError;
- (void)doSendTimeout;
- (void)suspendReceive4Source;
- (void)suspendReceive6Source;
- (void)setReceiveFilter:(id /* block */)arg0 withQueue:(id)arg1 isAsynchronous:(BOOL)arg2;
- (BOOL)isConnectedToAddress4:(id)arg0;
- (BOOL)isConnectedToAddress6:(id)arg0;
- (void)notifyDidReceiveData:(id)arg0 fromAddress:(id)arg1 withFilterContext:(id)arg2;
- (id)socketClosedError;
- (void)closeReadAndWriteStreams;
- (void)notifyDidCloseWithError:(id)arg0;
- (BOOL)createReadAndWriteStreams:(id *)arg0;
- (BOOL)isIPv4Preferred;
- (BOOL)isIPv6Preferred;
- (BOOL)isIPVersionNeutral;
- (void)setPreferIPv4;
- (void)setPreferIPv6;
- (void)setIPVersionNeutral;
- (unsigned short)maxReceiveIPv4BufferSize;
- (void)setMaxReceiveIPv4BufferSize:(unsigned short)arg0;
- (unsigned int)maxReceiveIPv6BufferSize;
- (void)setMaxReceiveIPv6BufferSize:(unsigned int)arg0;
- (void)setMaxSendBufferSize:(unsigned short)arg0;
- (unsigned short)maxSendBufferSize;
- (unsigned int)indexOfInterfaceAddr4:(id)arg0;
- (id)localAddress_IPv4;
- (id)localHost_IPv4;
- (unsigned short)localPort_IPv4;
- (id)localAddress_IPv6;
- (id)localHost_IPv6;
- (unsigned short)localPort_IPv6;
- (BOOL)bindToPort:(unsigned short)arg0 error:(id *)arg1;
- (BOOL)bindToAddress:(id)arg0 error:(id *)arg1;
- (BOOL)joinMulticastGroup:(id)arg0 error:(id *)arg1;
- (BOOL)leaveMulticastGroup:(id)arg0 error:(id *)arg1;
- (BOOL)enableReusePort:(BOOL)arg0 error:(id *)arg1;
- (BOOL)enableBroadcast:(BOOL)arg0 error:(id *)arg1;
- (void)sendData:(id)arg0 withTag:(long long)arg1;
- (void)sendData:(id)arg0 toHost:(id)arg1 port:(unsigned short)arg2 withTimeout:(double)arg3 tag:(long long)arg4;
- (void)sendData:(id)arg0 toAddress:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)setSendFilter:(id /* block */)arg0 withQueue:(id)arg1;
- (BOOL)receiveOnce:(id *)arg0;
- (BOOL)beginReceiving:(id *)arg0;
- (void)pauseReceiving;
- (void)setReceiveFilter:(id /* block */)arg0 withQueue:(id)arg1;
- (void)closeAfterSending;
- (BOOL)registerForStreamCallbacks:(id *)arg0;
- (BOOL)addStreamsToRunLoop:(id *)arg0;
- (BOOL)openStreams:(id *)arg0;
- (BOOL)enableBackgroundingOnSockets;
- (BOOL)isIPv6;
- (BOOL)isClosed;
- (id)localAddress;
- (void)closeWithError:(id)arg0;
- (id)init;
- (void)setDelegateQueue:(id)arg0;
- (id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (id)userData;
- (void)close;
- (BOOL)isConnected;
- (id)delegateQueue;
- (void)performBlock:(id /* block */)arg0;
- (void)setUserData:(id)arg0;
- (id)delegate;
- (unsigned short)localPort;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)isIPv4;
- (int)socketFD;
- (BOOL)isIPv6Enabled;
- (id)gaiError:(int)arg0;
- (id)initWithSocketQueue:(id)arg0;
- (id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 socketQueue:(id)arg2;
- (void)setDelegate:(id)arg0 synchronously:(BOOL)arg1;
- (void)synchronouslySetDelegate:(id)arg0;
- (void)setDelegateQueue:(id)arg0 synchronously:(BOOL)arg1;
- (void)synchronouslySetDelegateQueue:(id)arg0;
- (void)getDelegate:(id *)arg0 delegateQueue:(id *)arg1;
- (void)setDelegate:(id)arg0 delegateQueue:(id)arg1 synchronously:(BOOL)arg2;
- (void)setDelegate:(id)arg0 delegateQueue:(id)arg1;
- (void)synchronouslySetDelegate:(id)arg0 delegateQueue:(id)arg1;
- (BOOL)isIPv4Enabled;
- (void)setIPv4Enabled:(BOOL)arg0;
- (void)setIPv6Enabled:(BOOL)arg0;
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)connectToAddress:(id)arg0 error:(id *)arg1;
- (id)badConfigError:(id)arg0;
- (id)badParamError:(id)arg0;
- (id)errnoErrorWithReason:(id)arg0;
- (id)errnoError;
- (id)otherError:(id)arg0;
- (id)connectedHost;
- (unsigned short)connectedPort;
- (id)localHost;
- (id)connectedAddress;
- (void)removeStreamsFromRunLoop;
- (void)markSocketQueueTargetQueue:(id)arg0;
- (void)unmarkSocketQueueTargetQueue:(id)arg0;
- (int)socket4FD;
- (int)socket6FD;
- (struct __CFReadStream { } *)readStream;
- (struct __CFWriteStream { } *)writeStream;

@end