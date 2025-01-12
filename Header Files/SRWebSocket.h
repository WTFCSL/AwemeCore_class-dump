//
//     Generated by private class-dump
//

@class NSURL, NSMutableData, NSObject, SRDelegateController, NSMutableArray, NSString, SRSecurityPolicy, NSInputStream, NSURLRequest, NSMutableSet, NSOperationQueue, NSArray, NSOutputStream, SRIOConsumerPool, SRProxyConnect;
@protocol OS_dispatch_queue, SRWebSocketDelegate, OS_dispatch_data;

@interface SRWebSocket : NSObject <NSStreamDelegate> {
    struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *_kvoLock;
    int _propertyLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_consumers;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_data> *_readBuffer;
    unsigned long long _readBufferOffset;
    NSObject<OS_dispatch_data> *_outputBuffer;
    unsigned long long _outputBufferOffset;
    unsigned char _currentFrameOpcode;
    unsigned long long _currentFrameCount;
    unsigned long long _readOpCount;
    unsigned int _currentStringScanPosition;
    NSMutableData *_currentFrameData;
    NSString *_closeReason;
    NSString *_secKey;
    SRSecurityPolicy *_securityPolicy;
    BOOL _requestRequiresSSL;
    BOOL _streamSecurityValidated;
    unsigned char _currentReadMaskKey[4];
    unsigned long long _currentReadMaskOffset;
    BOOL _closeWhenFinishedWriting;
    BOOL _failed;
    NSURLRequest *_urlRequest;
    BOOL _sentClose;
    BOOL _didFail;
    BOOL _cleanupScheduled;
    int _closeCode;
    BOOL _isPumping;
    NSMutableSet *_scheduledRunloops;
    SRWebSocket *_selfRetain;
    NSArray *_requestedProtocols;
    SRIOConsumerPool *_consumerPool;
    SRProxyConnect *_proxyConnect;
    BOOL _allowsUntrustedSSLCertificates;
    long long _readyState;
    NSURL *_url;
    struct __CFHTTPMessage { } *_receivedHTTPHeaders;
    NSArray *_requestCookies;
    NSString *_protocol;
    SRDelegateController *_delegateController;
}

@property long long readyState;
@property (nonatomic) BOOL allowsUntrustedSSLCertificates;
@property (readonly, nonatomic) SRDelegateController *delegateController;
@property (weak, nonatomic) id<SRWebSocketDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain, nonatomic) NSOperationQueue *delegateOperationQueue;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct __CFHTTPMessage { } *receivedHTTPHeaders;
@property (copy, nonatomic) NSArray *requestCookies;
@property (readonly, copy, nonatomic) NSString *protocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfReadyState;

- (BOOL)sendString:(id)arg0 error:(id *)arg1;
- (id)initWithURLRequest:(id)arg0 protocols:(id)arg1;
- (void)closeWithCode:(long long)arg0 reason:(id)arg1;
- (struct __CFHTTPMessage { } *)receivedHTTPHeaders;
- (id)initWithURLRequest:(id)arg0 protocols:(id)arg1 securityPolicy:(id)arg2;
- (id)initWithURLRequest:(id)arg0 protocols:(id)arg1 allowsUntrustedSSLCertificates:(BOOL)arg2;
- (id)initWithURL:(id)arg0 protocols:(id)arg1;
- (id)initWithURL:(id)arg0 protocols:(id)arg1 allowsUntrustedSSLCertificates:(BOOL)arg2;
- (void)_connectionDoneWithError:(id)arg0 readStream:(id)arg1 writeStream:(id)arg2;
- (void)_updateSecureStreamOptions;
- (BOOL)_checkHandshake:(struct __CFHTTPMessage { } *)arg0;
- (void)_readFrameNew;
- (void)_HTTPHeadersDidFinish;
- (void)_readHTTPHeader;
- (void)_readUntilHeaderCompleteWithCallback:(id /* block */)arg0;
- (id)requestCookies;
- (void)_sendFrameWithOpcode:(long long)arg0 data:(id)arg1;
- (void)assertOnWorkQueue;
- (void)_pumpWriting;
- (BOOL)sendDataNoCopy:(id)arg0 error:(id *)arg1;
- (void)_closeWithProtocolError:(id)arg0;
- (void)_readFrameContinue;
- (void)handleCloseWithData:(id)arg0;
- (void)_handlePingWithData:(id)arg0;
- (void)handlePong:(id)arg0;
- (void)_handleFrameWithData:(id)arg0 opCode:(long long)arg1;
- (void)_addConsumerWithDataLength:(unsigned long long)arg0 callback:(id /* block */)arg1 readToCurrentFrame:(BOOL)arg2 unmaskBytes:(BOOL)arg3;
- (void)_handleFrameHeader:(struct { BOOL x0; unsigned char x1; BOOL x2; unsigned long long x3; })arg0 curData:(id)arg1;
- (void)_addConsumerWithScanner:(id /* block */)arg0 callback:(id /* block */)arg1 dataLength:(unsigned long long)arg2;
- (void)_pumpScanner;
- (void)_cleanupSelfReference:(id)arg0;
- (void)_readUntilBytes:(const void *)arg0 length:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (void)_addConsumerWithScanner:(id /* block */)arg0 callback:(id /* block */)arg1;
- (BOOL)_innerPumpScanner;
- (void)safeHandleEvent:(unsigned long long)arg0 stream:(id)arg1;
- (id)initWithURLRequest:(id)arg0 securityPolicy:(id)arg1;
- (id)initWithURL:(id)arg0 securityPolicy:(id)arg1;
- (BOOL)sendPing:(id)arg0 error:(id *)arg1;
- (void)setDelegateOperationQueue:(id)arg0;
- (void)setRequestCookies:(id)arg0;
- (BOOL)allowsUntrustedSSLCertificates;
- (void)setAllowsUntrustedSSLCertificates:(BOOL)arg0;
- (id)protocol;
- (void)closeConnection;
- (void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1;
- (void).cxx_destruct;
- (void)open;
- (void)close;
- (id)initWithURL:(id)arg0;
- (void)_failWithError:(id)arg0;
- (long long)readyState;
- (id)delegateController;
- (id)delegate;
- (void)_writeData:(id)arg0;
- (void)unscheduleFromRunLoop:(id)arg0 forMode:(id)arg1;
- (void)stream:(id)arg0 handleEvent:(unsigned long long)arg1;
- (void)send:(id)arg0;
- (void)didConnect;
- (void)setDelegate:(id)arg0;
- (id)initWithURLRequest:(id)arg0;
- (void)dealloc;
- (id)url;
- (BOOL)sendData:(id)arg0 error:(id *)arg1;
- (id)delegateDispatchQueue;
- (void)setDelegateDispatchQueue:(id)arg0;
- (void)setReadyState:(long long)arg0;
- (void)_scheduleCleanup;
- (id)delegateOperationQueue;

@end
