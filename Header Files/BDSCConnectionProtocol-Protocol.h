//
//     Generated by private class-dump
//

@class NSString;
@protocol BDSCConnectionDelegate, BDSCDeviceProtocol;

@protocol BDSCConnectionProtocol <NSObject>

+ (id)connectionWithDevice:(id)arg0 delegate:(id)arg1;
+ (BOOL)canCreateByDevice:(id)arg0;

@property (weak, nonatomic) id<BDSCConnectionDelegate> delegate;
@property (readonly, nonatomic) id<BDSCDeviceProtocol> device;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, copy, nonatomic) NSString *protocolType;
@property (readonly, nonatomic) id engine;

- (void)disConnect;
- (void)registerWithCallback:(id /* block */)arg0;
- (void)unregisterWithCallback:(id /* block */)arg0;
- (void)setMessageReceivedCallback:(id /* block */)arg0;
- (void)updateSortedProtocolArray:(id)arg0;
- (void)connect;
- (BOOL)isConnected;
- (id)engine;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)device;
- (id)protocolType;

@optional

- (void)showAirPlayDevicePicker;

@end
