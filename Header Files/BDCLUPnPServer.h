//
//     Generated by private class-dump
//

@class NSURLSession, NSMutableDictionary, NSTimer, NSOperationQueue, NSString, NSObject, BDGCDAsyncUdpSocket;
@protocol OS_dispatch_queue, BDCLUPnPServerDelegate;

@interface BDCLUPnPServer : NSObject <BDGCDAsyncUdpSocketDelegate> {
    BOOL _unicastUdpSocketInited;
    BOOL _udpSocketInited;
    BOOL _enableSsdpOptimize;
    id<BDCLUPnPServerDelegate> _delegate;
    BDGCDAsyncUdpSocket *_unicastUdpSocket;
    BDGCDAsyncUdpSocket *_multicastUdpSocket;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_checkQueue;
    NSMutableDictionary *_deviceDictionary;
    NSURLSession *_urlSession;
    NSTimer *_timer;
    unsigned long long _cycleIndex;
    long long _cacheDeviceCount;
}

@property (retain, nonatomic) BDGCDAsyncUdpSocket *unicastUdpSocket;
@property (retain, nonatomic) BDGCDAsyncUdpSocket *multicastUdpSocket;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQueue;
@property (retain, nonatomic) NSMutableDictionary *deviceDictionary;
@property (nonatomic) BOOL unicastUdpSocketInited;
@property (nonatomic) BOOL udpSocketInited;
@property (nonatomic) BOOL enableSsdpOptimize;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long cycleIndex;
@property (nonatomic) long long cacheDeviceCount;
@property (weak, nonatomic) id<BDCLUPnPServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareServer;

- (void)udpSocket:(id)arg0 didSendDataWithTag:(long long)arg1;
- (void)udpSocket:(id)arg0 didNotSendDataWithTag:(long long)arg1 dueToError:(id)arg2;
- (void)udpSocket:(id)arg0 didReceiveData:(id)arg1 fromAddress:(id)arg2 withFilterContext:(id)arg3;
- (void)udpSocketDidClose:(id)arg0 withError:(id)arg1;
- (void)JudgeDeviceWithData:(id)arg0;
- (id)deviceDictionary;
- (id)headerValueForKey:(id)arg0 inData:(id)arg1;
- (BOOL)isNilString:(id)arg0;
- (void)setDeviceDictionary:(id)arg0;
- (void)setEnableSsdpOptimize:(BOOL)arg0;
- (BOOL)closeConnection:(int)arg0;
- (BOOL)enableSsdpOptimize;
- (id)getUPnPURLWithUrlModel:(id)arg0 urlHeader:(id)arg1;
- (void)httpServerRestart:(id)arg0;
- (void)startWithOptimizeEnabled;
- (BOOL)udpSocketInited;
- (id)unicastUdpSocket;
- (void)setUdpSocketInited:(BOOL)arg0;
- (BOOL)unicastUdpSocketInited;
- (void)traceStartBrowseError:(id)arg0;
- (void)setUnicastUdpSocketInited:(BOOL)arg0;
- (id)multicastUdpSocket;
- (void)unsubscribeForDevice:(id)arg0;
- (void)sendUdpSearchPacket;
- (void)checkCacheDeviceAvailable;
- (id)getSearchStringWithSTString:(id)arg0;
- (void)getDeviceInfoAndAddDevice:(id)arg0;
- (void)getDeviceWithLocation:(id)arg0 withUSN:(id)arg1 privateServiceVersion:(int)arg2 andIsCached:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)checkWithDevice:(id)arg0 count:(long long)arg1 maxCount:(long long)arg2 timeout:(double)arg3 retryInterval:(double)arg4 offlineDevice:(BOOL)arg5 urlSession:(id)arg6 checkCompletion:(id /* block */)arg7;
- (void)handleDeviceOffline:(id)arg0;
- (void)checkDeviceWithDevice:(id)arg0 timeout:(double)arg1 urlSession:(id)arg2 completion:(id /* block */)arg3;
- (void)removeDeviceWithKey:(id)arg0;
- (long long)cacheDeviceCount;
- (id)cacheArray:(id)arg0 findDeviceWithLocation:(id)arg1 usn:(id)arg2;
- (void)traceBDDLNABrowseError:(id)arg0 message:(id)arg1 extra:(id)arg2;
- (void)getDeviceWithLocation:(id)arg0 withUSN:(id)arg1 privateServiceVersion:(int)arg2 completion:(id /* block */)arg3;
- (void)updateCachedCustomServiceVersionWithDevice:(id)arg0;
- (BOOL)useDLNACustomizedService:(int)arg0;
- (void)subscribeForDevice:(id)arg0;
- (void)subscribeWithDevice:(id)arg0 callback:(id /* block */)arg1;
- (void)unsubscribeWithDevice:(id)arg0 callback:(id /* block */)arg1;
- (void)subscribe:(BOOL)arg0 device:(id)arg1 callback:(id /* block */)arg2;
- (void)checkServiceAlive:(id)arg0;
- (void)checkServiceAlive:(id)arg0 maxCount:(long long)arg1 timeout:(double)arg2 retryInterval:(double)arg3 urlSession:(id)arg4 completion:(id /* block */)arg5;
- (void)setUnicastUdpSocket:(id)arg0;
- (void)setMulticastUdpSocket:(id)arg0;
- (void)setCacheDeviceCount:(long long)arg0;
- (id)timer;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void)startWithError:(id)arg0;
- (void).cxx_destruct;
- (id)urlSession;
- (void)stop;
- (void)setCheckQueue:(id)arg0;
- (id)operationQueue;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setUrlSession:(id)arg0;
- (void)addDevice:(id)arg0;
- (id)checkQueue;
- (void)search;
- (void)start;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (unsigned long long)cycleIndex;
- (void)onError;
- (void)setCycleIndex:(unsigned long long)arg0;
- (void)onChange;

@end
