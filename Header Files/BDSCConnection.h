//
//     Generated by private class-dump
//

@class NSString, BDByteCastConnection;
@protocol BDSCDeviceProtocol, BDSCConnectionDelegate;

@interface BDSCConnection : NSObject <BDByteCastConnectionDelegate, BDSCConnectionProtocol> {
    id<BDSCConnectionDelegate> _delegate;
    BDByteCastConnection *_byteCastConnection;
    id<BDSCDeviceProtocol> _device;
}

@property (retain, nonatomic) BDByteCastConnection *byteCastConnection;
@property (retain, nonatomic) id<BDSCDeviceProtocol> device;
@property (weak, nonatomic) id<BDSCConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, copy, nonatomic) NSString *protocolType;
@property (readonly, nonatomic) id engine;

+ (id)connectionWithDevice:(id)arg0 delegate:(id)arg1;
+ (BOOL)canCreateByDevice:(id)arg0;

- (void)disConnect;
- (void)registerWithCallback:(id /* block */)arg0;
- (void)unregisterWithCallback:(id /* block */)arg0;
- (void)byteCastConnection:(id)arg0 onError:(id)arg1;
- (void)byteCastConnection:(id)arg0 didConnectToService:(id)arg1;
- (void)byteCastConnection:(id)arg0 disConnectToService:(id)arg1;
- (void)setMessageReceivedCallback:(id /* block */)arg0;
- (id)initWithDevice:(id)arg0 delegate:(id)arg1;
- (void)updateSortedProtocolArray:(id)arg0;
- (id)byteCastConnection;
- (void)setByteCastConnection:(id)arg0;
- (void)connect;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)engine;
- (id)delegate;
- (void)setDevice:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)device;
- (id)protocolType;

@end
