//
//     Generated by private class-dump
//

@class BDLinkDevice, NSString, NSObject;
@protocol BDLinkConnectionDelegate;

@interface BDLinkConnection : NSObject <BDByteCastConnectionProtocol> {
    BOOL _isConnected;
    BOOL _delayDisconnect;
    BOOL _isConnecting;
    NSObject<BDLinkConnectionDelegate> *_delegate;
    BDLinkDevice *_linkDevice;
}

@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL delayDisconnect;
@property (nonatomic) BOOL isConnecting;
@property (weak, nonatomic) NSObject<BDLinkConnectionDelegate> *delegate;
@property (readonly, nonatomic) BDLinkDevice *linkDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disConnect;
- (id)initWithLinkService:(id)arg0 delegate:(id)arg1;
- (id)linkDevice;
- (void)connectWithNetworkCheck:(BOOL)arg0 maxCount:(long long)arg1 timeout:(double)arg2 retryInterval:(double)arg3;
- (void)registerWithSourceDeviceInfo:(id)arg0 andCallback:(id /* block */)arg1;
- (void)unregisterWithSourceDeviceInfo:(id)arg0 andCallback:(id /* block */)arg1;
- (void)checkConnectWithMaxCount:(long long)arg0 timeout:(double)arg1 retryInterval:(double)arg2 completion:(id /* block */)arg3;
- (BOOL)delayDisconnect;
- (void)setDelayDisconnect:(BOOL)arg0;
- (void)checkServiceAlive:(id)arg0 maxCount:(long long)arg1 timeout:(double)arg2 retryInterval:(double)arg3 completion:(id /* block */)arg4;
- (void)checkWithDevice:(id)arg0 timeout:(double)arg1 retryInterval:(double)arg2 count:(long long)arg3 maxCount:(long long)arg4 checkCompletion:(id /* block */)arg5;
- (void)connect;
- (void)setIsConnected:(BOOL)arg0;
- (BOOL)isConnecting;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setIsConnecting:(BOOL)arg0;

@end
