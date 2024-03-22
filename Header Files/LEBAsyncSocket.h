//
//     Generated by private class-dump
//

@class NSData, NSString, NSURL, NSObject, NSMutableArray, LEBAsyncWritePacket, LEBAsyncReadPacket, LEBAsyncSocketPreBuffer;
@protocol OS_dispatch_queue, LEBAsyncSocketDelegate, OS_dispatch_source;

@interface LEBAsyncSocket : NSObject {
    unsigned int flags;
    unsigned short config;
    id<LEBAsyncSocketDelegate> delegate;
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
    LEBAsyncReadPacket *currentRead;
    LEBAsyncWritePacket *currentWrite;
    unsigned long long socketFDBytesAvailable;
    LEBAsyncSocketPreBuffer *preBuffer;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } streamContext;
    struct __CFReadStream { } *readStream;
    struct __CFWriteStream { } *writeStream;
    struct SSLContext { } *sslContext;
    LEBAsyncSocketPreBuffer *sslPreBuffer;
    unsigned long long sslWriteCachedLength;
    int sslErrCode;
    int lastSSLHandshakeError;
    void *IsOnSocketQueueOrTargetQueueKey;
    id userData;
    double alternateAddressDelay;
}

@property (weak) id<LEBAsyncSocketDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isIPv4Enabled) BOOL IPv4Enabled;
@property (getter=isIPv6Enabled) BOOL IPv6Enabled;
@property (getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;
@property double alternateAddressDelay;
@property (retain) id userData;
@property (readonly) BOOL isDisconnected;
@property (readonly) BOOL isConnected;
@property (readonly) NSString *connectedHost;
@property (readonly) unsigned short connectedPort;
@property (readonly) NSURL *connectedUrl;
@property (readonly) NSString *localHost;
@property (readonly) unsigned short localPort;
@property (readonly) NSData *connectedAddress;
@property (readonly) NSData *localAddress;
@property (readonly) BOOL isIPv4;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isSecure;
@property BOOL autoDisconnectOnClosedReadStream;

+ (id)urlFromSockaddrUN:(const struct sockaddr_un { unsigned char x0; unsigned char x1; char x2[104]; } *)arg0;
+ (id)socketFromConnectedSocketFD:(int)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3 error:(id *)arg4;
+ (id)socketFromConnectedSocketFD:(int)arg0 socketQueue:(id)arg1 error:(id *)arg2;
+ (id)socketFromConnectedSocketFD:(int)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 error:(id *)arg3;
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
+ (id)hostFromAddress:(id)arg0;
+ (unsigned short)portFromAddress:(id)arg0;
+ (BOOL)isIPv4Address:(id)arg0;
+ (BOOL)isIPv6Address:(id)arg0;
+ (BOOL)getHost:(id *)arg0 port:(unsigned short *)arg1 fromAddress:(id)arg2;
+ (BOOL)getHost:(id *)arg0 port:(unsigned short *)arg1 family:(char *)arg2 fromAddress:(id)arg3;
+ (id)CRLFData;
+ (id)CRData;
+ (id)LFData;
+ (id)ZeroData;

- (id)getInterfaceAddressFromUrl:(id)arg0;
- (BOOL)bindSocket:(int)arg0 toInterface:(id)arg1 error:(id *)arg2;
- (void)closeSocket:(int)arg0;
- (void)closeUnusedSocket:(int)arg0;
- (int)createSocket:(int)arg0 connectInterface:(id)arg1 errPtr:(id *)arg2;
- (void)connectSocket:(int)arg0 address:(id)arg1 stateIndex:(int)arg2;
- (id)connectedUrl;
- (id)connectedUrlFromSocketUN:(int)arg0;
- (double)alternateAddressDelay;
- (void)setAlternateAddressDelay:(double)arg0;
- (BOOL)preConnectWithUrl:(id)arg0 error:(id *)arg1;
- (BOOL)connectWithAddressUN:(id)arg0 error:(id *)arg1;
- (void)lookup:(int)arg0 didAndFail:(id)arg1;
- (BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)arg0;
- (BOOL)acceptOnUrl:(id)arg0 error:(id *)arg1;
- (BOOL)connectToUrl:(id)arg0 withTimeout:(double)arg1 error:(id *)arg2;
- (BOOL)enableBackgroundingOnSocket;
- (BOOL)enableBackgroundingOnSocketWithCaveat;
- (BOOL)isIPv6;
- (BOOL)isSecure;
- (id)localAddress;
- (void)closeWithError:(id)arg0;
- (id)init;
- (void)disconnect;
- (void)setDelegateQueue:(id)arg0;
- (id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1;
- (void).cxx_destruct;
- (id)userData;
- (BOOL)isConnected;
- (id)delegateQueue;
- (void)performBlock:(id /* block */)arg0;
- (void)setUserData:(id)arg0;
- (id)delegate;
- (unsigned short)localPort;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)isIPv4;
- (BOOL)isDisconnected;
- (int)socketFD;
- (BOOL)isIPv6Enabled;
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
- (BOOL)isIPv4PreferredOverIPv6;
- (void)setIPv4PreferredOverIPv6:(BOOL)arg0;
- (BOOL)acceptOnPort:(unsigned short)arg0 error:(id *)arg1;
- (BOOL)acceptOnInterface:(id)arg0 port:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)doAccept:(int)arg0;
- (BOOL)preConnectWithInterface:(id)arg0 error:(id *)arg1;
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToAddress:(id)arg0 error:(id *)arg1;
- (BOOL)connectToAddress:(id)arg0 withTimeout:(double)arg1 error:(id *)arg2;
- (BOOL)connectToAddress:(id)arg0 viaInterface:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (void)lookup:(int)arg0 didSucceedWithAddress4:(id)arg1 address6:(id)arg2;
- (BOOL)connectWithAddress4:(id)arg0 address6:(id)arg1 error:(id *)arg2;
- (void)didConnect:(int)arg0;
- (void)didNotConnect:(int)arg0 error:(id)arg1;
- (void)startConnectTimeout:(double)arg0;
- (void)endConnectTimeout;
- (void)doConnectTimeout;
- (void)disconnectAfterReading;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReadingAndWriting;
- (void)maybeClose;
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
- (id)localHost;
- (id)connectedHost4;
- (id)connectedHost6;
- (unsigned short)connectedPort4;
- (unsigned short)connectedPort6;
- (id)localHost4;
- (id)localHost6;
- (unsigned short)localPort4;
- (unsigned short)localPort6;
- (id)connectedHostFromSocket4:(int)arg0;
- (id)connectedHostFromSocket6:(int)arg0;
- (unsigned short)connectedPortFromSocket4:(int)arg0;
- (unsigned short)connectedPortFromSocket6:(int)arg0;
- (id)localHostFromSocket4:(int)arg0;
- (id)localHostFromSocket6:(int)arg0;
- (unsigned short)localPortFromSocket4:(int)arg0;
- (unsigned short)localPortFromSocket6:(int)arg0;
- (id)connectedAddress;
- (void)getInterfaceAddress4:(id *)arg0 address6:(id *)arg1 fromDescription:(id)arg2 port:(unsigned short)arg3;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg0;
- (BOOL)usingCFStreamForTLS;
- (BOOL)usingSecureTransportForTLS;
- (void)suspendReadSource;
- (void)resumeReadSource;
- (void)suspendWriteSource;
- (void)resumeWriteSource;
- (void)readDataWithTimeout:(double)arg0 tag:(long long)arg1;
- (void)readDataWithTimeout:(double)arg0 buffer:(id)arg1 bufferOffset:(unsigned long long)arg2 tag:(long long)arg3;
- (void)readDataWithTimeout:(double)arg0 buffer:(id)arg1 bufferOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToLength:(unsigned long long)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
- (void)readDataToLength:(unsigned long long)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 maxLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (float)progressOfReadReturningTag:(long long *)arg0 bytesDone:(unsigned long long *)arg1 total:(unsigned long long *)arg2;
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
- (float)progressOfWriteReturningTag:(long long *)arg0 bytesDone:(unsigned long long *)arg1 total:(unsigned long long *)arg2;
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
- (BOOL)autoDisconnectOnClosedReadStream;
- (void)setAutoDisconnectOnClosedReadStream:(BOOL)arg0;
- (void)markSocketQueueTargetQueue:(id)arg0;
- (void)unmarkSocketQueueTargetQueue:(id)arg0;
- (int)socket4FD;
- (int)socket6FD;
- (struct __CFReadStream { } *)readStream;
- (struct __CFWriteStream { } *)writeStream;
- (struct SSLContext { } *)sslContext;

@end
