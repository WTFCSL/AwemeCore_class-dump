//
//     Generated by private class-dump
//

@class NSData, NSString, NSURL, EAGCDAsyncReadPacket, EAGCDAsyncSocketPreBuffer, NSObject, NSMutableArray, EAGCDAsyncWritePacket;
@protocol GCDAsyncSocketDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface EAccountGCDAsyncSocket : NSObject {
    unsigned int flags;
    unsigned short config;
    id<GCDAsyncSocketDelegate> delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int socket4FD;
    int socket6FD;
    int socketUN;
    NSURL *socketUrl;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSData *connectInterfaceUN;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *accept4Source;
    NSObject<OS_dispatch_source> *accept6Source;
    NSObject<OS_dispatch_source> *acceptUNSource;
    NSObject<OS_dispatch_source> *connectTimer;
    NSObject<OS_dispatch_source> *readSource;
    NSObject<OS_dispatch_source> *writeSource;
    NSObject<OS_dispatch_source> *readTimer;
    NSObject<OS_dispatch_source> *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    EAGCDAsyncReadPacket *currentRead;
    EAGCDAsyncWritePacket *currentWrite;
    unsigned long long socketFDBytesAvailable;
    EAGCDAsyncSocketPreBuffer *preBuffer;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } streamContext;
    struct __CFReadStream { } *readStream;
    struct __CFWriteStream { } *writeStream;
    struct SSLContext { } *sslContext;
    EAGCDAsyncSocketPreBuffer *sslPreBuffer;
    unsigned long long sslWriteCachedLength;
    int sslErrCode;
    int lastSSLHandshakeError;
    double alternateAddressDelay;
    void *IsOnSocketQueueOrTargetQueueKey;
}

@property (weak) id<GCDAsyncSocketDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isIPv4Enabled) BOOL IPv4Enabled;
@property (getter=isIPv6Enabled) BOOL IPv6Enabled;
@property (getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;
@property (readonly) BOOL isDisconnected;
@property (readonly) BOOL isConnected;
@property (readonly) NSString *connectedHost;
@property (readonly) unsigned short connectedPort;
@property (readonly) BOOL isIPv4;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isSecure;

+ (void)ignore:(id)arg0;
+ (void)cfstreamThread;
+ (void)scheduleCFStreams:(id)arg0;
+ (void)unscheduleCFStreams:(id)arg0;
+ (id)gaiError:(int)arg0;
+ (void)startCFStreamThreadIfNeeded;
+ (void)stopCFStreamThreadIfNeeded;
+ (id)lookupHost:(id)arg0 port:(unsigned short)arg1 error:(id *)arg2;
+ (id)hostFromSockaddr4:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)arg0;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)arg0;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)arg0;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)arg0;
+ (unsigned short)portFromAddress:(id)arg0;
+ (BOOL)isIPv4Address:(id)arg0;
+ (BOOL)isIPv6Address:(id)arg0;
+ (BOOL)getHost:(id *)arg0 port:(unsigned short *)arg1 fromAddress:(id)arg2;
+ (BOOL)getHost:(id *)arg0 port:(unsigned short *)arg1 family:(char *)arg2 fromAddress:(id)arg3;

- (BOOL)bindSocket:(int)arg0 toInterface:(id)arg1 error:(id *)arg2;
- (void)closeSocket:(int)arg0;
- (void)closeUnusedSocket:(int)arg0;
- (int)createSocket:(int)arg0 connectInterface:(id)arg1 errPtr:(id *)arg2;
- (void)connectSocket:(int)arg0 address:(id)arg1 stateIndex:(int)arg2;
- (double)alternateAddressDelay;
- (void)setAlternateAddressDelay:(double)arg0;
- (BOOL)isIPv6;
- (BOOL)isSecure;
- (void)closeWithError:(id)arg0;
- (void)disconnect;
- (void)setDelegateQueue:(id)arg0;
- (id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)delegateQueue;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)isIPv4;
- (BOOL)isDisconnected;
- (int)socketFD;
- (BOOL)isIPv6Enabled;
- (id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 socketQueue:(id)arg2;
- (void)setDelegate:(id)arg0 synchronously:(BOOL)arg1;
- (void)setDelegateQueue:(id)arg0 synchronously:(BOOL)arg1;
- (void)setDelegate:(id)arg0 delegateQueue:(id)arg1 synchronously:(BOOL)arg2;
- (void)setDelegate:(id)arg0 delegateQueue:(id)arg1;
- (BOOL)isIPv4Enabled;
- (void)setIPv4Enabled:(BOOL)arg0;
- (void)setIPv6Enabled:(BOOL)arg0;
- (BOOL)isIPv4PreferredOverIPv6;
- (void)setIPv4PreferredOverIPv6:(BOOL)arg0;
- (BOOL)preConnectWithInterface:(id)arg0 error:(id *)arg1;
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (void)lookup:(int)arg0 didSucceedWithAddress4:(id)arg1 address6:(id)arg2;
- (void)lookup:(int)arg0 didFail:(id)arg1;
- (BOOL)connectWithAddress4:(id)arg0 address6:(id)arg1 error:(id *)arg2;
- (void)didConnect:(int)arg0;
- (void)didNotConnect:(int)arg0 error:(id)arg1;
- (void)startConnectTimeout:(double)arg0;
- (void)endConnectTimeout;
- (void)doConnectTimeout;
- (id)badConfigError:(id)arg0;
- (id)badParamError:(id)arg0;
- (id)errnoErrorWithReason:(id)arg0;
- (id)errnoError;
- (id)sslError:(int)arg0;
- (id)connectTimeoutError;
- (id)readMaxedOutError;
- (id)readTimeoutError;
- (id)writeTimeoutError;
- (id)connectionClosedError;
- (id)otherError:(id)arg0;
- (id)connectedHost;
- (unsigned short)connectedPort;
- (id)connectedHost4;
- (id)connectedHost6;
- (unsigned short)connectedPort4;
- (unsigned short)connectedPort6;
- (id)connectedHostFromSocket4:(int)arg0;
- (id)connectedHostFromSocket6:(int)arg0;
- (unsigned short)connectedPortFromSocket4:(int)arg0;
- (unsigned short)connectedPortFromSocket6:(int)arg0;
- (void)getInterfaceAddress4:(id *)arg0 address6:(id *)arg1 fromDescription:(id)arg2 port:(unsigned short)arg3;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg0;
- (BOOL)usingCFStreamForTLS;
- (BOOL)usingSecureTransportForTLS;
- (void)suspendReadSource;
- (void)resumeReadSource;
- (void)suspendWriteSource;
- (void)resumeWriteSource;
- (void)readDataToLength:(unsigned long long)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
- (void)readDataToLength:(unsigned long long)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)maybeDequeueRead;
- (void)flushSSLBuffers;
- (void)doReadData;
- (void)doReadEOF;
- (void)completeCurrentRead;
- (void)endCurrentRead;
- (void)setupReadTimerWithTimeout:(double)arg0;
- (void)doReadTimeout;
- (void)doReadTimeoutWithExtension:(double)arg0;
- (void)writeData:(id)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
- (void)maybeDequeueWrite;
- (void)doWriteData;
- (void)completeCurrentWrite;
- (void)endCurrentWrite;
- (void)setupWriteTimerWithTimeout:(double)arg0;
- (void)doWriteTimeout;
- (void)doWriteTimeoutWithExtension:(double)arg0;
- (void)startTLS:(id)arg0;
- (void)maybeStartTLS;
- (int)sslReadWithBuffer:(void *)arg0 length:(unsigned long long *)arg1;
- (int)sslWriteWithBuffer:(const void *)arg0 length:(unsigned long long *)arg1;
- (void)ssl_startTLS;
- (void)ssl_continueSSLHandshake;
- (void)ssl_shouldTrustPeer:(BOOL)arg0 stateIndex:(int)arg1;
- (void)cf_finishSSLHandshake;
- (void)cf_abortSSLHandshake:(id)arg0;
- (void)cf_startTLS;
- (BOOL)createReadAndWriteStream;
- (BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)arg0;
- (BOOL)addStreamsToRunLoop;
- (void)removeStreamsFromRunLoop;
- (BOOL)openStreams;
- (int)socket4FD;
- (int)socket6FD;
- (struct __CFReadStream { } *)readStream;
- (struct __CFWriteStream { } *)writeStream;
- (struct SSLContext { } *)sslContext;

@end
