//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSURL, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_source, BDCastGCDWebServerDelegate, OS_dispatch_queue;

@interface BDCastGCDWebServer : NSObject {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_group> *_sourceGroup;
    NSMutableArray *_handlers;
    long long _activeConnections;
    BOOL _connected;
    struct __CFRunLoopTimer { } *_disconnectTimer;
    NSDictionary *_options;
    NSMutableDictionary *_authenticationBasicAccounts;
    NSMutableDictionary *_authenticationDigestAccounts;
    Class _connectionClass;
    double _disconnectDelay;
    NSObject<OS_dispatch_source> *_source4;
    NSObject<OS_dispatch_source> *_source6;
    struct __CFNetService { } *_registrationService;
    struct __CFNetService { } *_resolutionService;
    struct _DNSServiceRef_t { } *_dnsService;
    struct __CFSocket { } *_dnsSocket;
    struct __CFRunLoopSource { } *_dnsSource;
    NSString *_dnsAddress;
    unsigned long long _dnsPort;
    BOOL _bindToLocalhost;
    BOOL _suspendInBackground;
    unsigned long long _backgroundTask;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    void *isOnRunTargetQueueKey;
    id<BDCastGCDWebServerDelegate> _delegate;
    NSString *_serverName;
    unsigned long long _port;
    BOOL _shouldAutomaticallyMapHEADToGET;
    NSString *_authenticationRealm;
    long long _dispatchQueuePriority;
}

@property (readonly, nonatomic) NSURL *serverURL;
@property (readonly, nonatomic) NSURL *bonjourServerURL;
@property (readonly, nonatomic) NSURL *publicServerURL;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) NSString *serverName;
@property (retain, nonatomic) NSString *authenticationRealm;
@property (retain, nonatomic) NSMutableDictionary *authenticationBasicAccounts;
@property (retain, nonatomic) NSMutableDictionary *authenticationDigestAccounts;
@property (nonatomic) BOOL shouldAutomaticallyMapHEADToGET;
@property (nonatomic) long long dispatchQueuePriority;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL suspendInBackground;
@property (nonatomic) unsigned long long backgroundTask;
@property (nonatomic) struct __CFRunLoopTimer { } *disconnectTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source4;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source6;
@property (nonatomic) double disconnectDelay;
@property (nonatomic) struct __CFNetService { } *registrationService;
@property (nonatomic) struct __CFNetService { } *resolutionService;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSString *dnsAddress;
@property (nonatomic) unsigned long long dnsPort;
@property (nonatomic) struct _DNSServiceRef_t { } *dnsService;
@property (nonatomic) unsigned long long port;
@property (retain, nonatomic) Class connectionClass;
@property (nonatomic) BOOL bindToLocalhost;
@property (nonatomic) struct __CFSocket { } *dnsSocket;
@property (nonatomic) struct __CFRunLoopSource { } *dnsSource;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *sourceGroup;
@property (weak, nonatomic) id<BDCastGCDWebServerDelegate> delegate;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSString *bonjourName;
@property (readonly, nonatomic) NSString *bonjourType;

+ (void)setBuiltInLogger:(id /* block */)arg0;
+ (void)initialize;
+ (void)setLogLevel:(int)arg0;

- (void)addHandlerWithMatchBlock:(id /* block */)arg0 asyncProcessBlock:(id /* block */)arg1;
- (BOOL)startWithOptions:(id)arg0 error:(id *)arg1;
- (void)_didConnect;
- (void)addHandlerForMethod:(id)arg0 path:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(id /* block */)arg3;
- (void)addHandlerForMethod:(id)arg0 pathRegex:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(id /* block */)arg3;
- (void)notifyWebServerDidConnect;
- (struct __CFRunLoopTimer { } *)disconnectTimer;
- (void)setDisconnectTimer:(struct __CFRunLoopTimer { } *)arg0;
- (BOOL)suspendInBackground;
- (id)source4;
- (void)notifyWebServerDidDisConnect;
- (double)disconnectDelay;
- (struct __CFNetService { } *)resolutionService;
- (long long)dispatchQueuePriority;
- (int)_createListeningSocket:(BOOL)arg0 localAddress:(const void *)arg1 length:(unsigned int)arg2 maxPendingConnections:(unsigned long long)arg3 error:(id *)arg4;
- (id)_createDispatchSourceWithListeningSocket:(int)arg0 isIPv6:(BOOL)arg1;
- (void)notifyWebServerDidStart;
- (void)notifyWebServerDidStop;
- (void)setSuspendInBackground:(BOOL)arg0;
- (void)setSource4:(id)arg0;
- (void)setSource6:(id)arg0;
- (id)source6;
- (void)setDisconnectDelay:(double)arg0;
- (void)setRegistrationService:(struct __CFNetService { } *)arg0;
- (struct __CFNetService { } *)registrationService;
- (void)setResolutionService:(struct __CFNetService { } *)arg0;
- (void)setDnsPort:(unsigned long long)arg0;
- (unsigned long long)dnsPort;
- (void)setDnsAddress:(id)arg0;
- (id)dnsAddress;
- (void)setDnsService:(struct _DNSServiceRef_t { } *)arg0;
- (struct _DNSServiceRef_t { } *)dnsService;
- (void)setShouldAutomaticallyMapHEADToGET:(BOOL)arg0;
- (BOOL)shouldAutomaticallyMapHEADToGET;
- (void)setAuthenticationRealm:(id)arg0;
- (id)authenticationRealm;
- (void)setAuthenticationBasicAccounts:(id)arg0;
- (id)authenticationBasicAccounts;
- (void)setAuthenticationDigestAccounts:(id)arg0;
- (id)authenticationDigestAccounts;
- (void)setConnectionClass:(Class)arg0;
- (void)setDispatchQueuePriority:(long long)arg0;
- (void)setBindToLocalhost:(BOOL)arg0;
- (BOOL)bindToLocalhost;
- (void)setDnsSocket:(struct __CFSocket { } *)arg0;
- (struct __CFSocket { } *)dnsSocket;
- (void)setDnsSource:(struct __CFRunLoopSource { } *)arg0;
- (struct __CFRunLoopSource { } *)dnsSource;
- (void)setSourceGroup:(id)arg0;
- (void)willStartConnection:(id)arg0;
- (void)didEndConnection:(id)arg0;
- (void)addHandlerWithMatchBlock:(id /* block */)arg0 processBlock:(id /* block */)arg1;
- (void)notifyWebServerDidCompleteBonjourRegistration;
- (void)notifyWebServerDidUpdateNATPortMapping;
- (BOOL)startWithPort:(unsigned long long)arg0 bonjourName:(id)arg1;
- (id)bonjourServerURL;
- (id)publicServerURL;
- (void)addDefaultHandlerForMethod:(id)arg0 requestClass:(Class)arg1 asyncProcessBlock:(id /* block */)arg2;
- (void)addDefaultHandlerForMethod:(id)arg0 requestClass:(Class)arg1 processBlock:(id /* block */)arg2;
- (void)addHandlerForMethod:(id)arg0 path:(id)arg1 requestClass:(Class)arg2 processBlock:(id /* block */)arg3;
- (void)addHandlerForMethod:(id)arg0 pathRegex:(id)arg1 requestClass:(Class)arg2 processBlock:(id /* block */)arg3;
- (id)_responseWithContentsOfDirectory:(id)arg0;
- (void)addGETHandlerForPath:(id)arg0 staticData:(id)arg1 contentType:(id)arg2 cacheAge:(unsigned long long)arg3;
- (void)addGETHandlerForPath:(id)arg0 filePath:(id)arg1 isAttachment:(BOOL)arg2 cacheAge:(unsigned long long)arg3 allowRangeRequests:(BOOL)arg4;
- (void)addGETHandlerForBasePath:(id)arg0 directoryPath:(id)arg1 indexFilename:(id)arg2 cacheAge:(unsigned long long)arg3 allowRangeRequests:(BOOL)arg4;
- (void)setHandlers:(id)arg0;
- (id)handlers;
- (BOOL)isRunning;
- (unsigned long long)port;
- (void)_stop;
- (id)init;
- (void)setPort:(unsigned long long)arg0;
- (void)setConnected:(BOOL)arg0;
- (BOOL)_start:(id *)arg0;
- (void).cxx_destruct;
- (BOOL)connected;
- (void)stop;
- (id)delegateQueue;
- (void)setOptions:(id)arg0;
- (void)_didDisconnect;
- (id)delegate;
- (void)logInfo:(id)arg0;
- (BOOL)start;
- (void)setDelegate:(id)arg0;
- (id)options;
- (void)dealloc;
- (void)logError:(id)arg0;
- (void)_didEnterBackground:(id)arg0;
- (void)_willEnterForeground:(id)arg0;
- (id)serverURL;
- (id)serverName;
- (void)setServerName:(id)arg0;
- (void)_endBackgroundTask;
- (Class)connectionClass;
- (id)sourceGroup;
- (unsigned long long)backgroundTask;
- (void)setBackgroundTask:(unsigned long long)arg0;
- (id)bonjourName;
- (void)removeAllHandlers;
- (id)bonjourType;
- (void)_startBackgroundTask;
- (void)setDelegate:(id)arg0 synchronously:(BOOL)arg1;
- (void)synchronouslySetDelegate:(id)arg0;
- (void)logWarning:(id)arg0;
- (void)logVerbose:(id)arg0;

@end