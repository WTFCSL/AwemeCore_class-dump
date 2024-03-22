//
//     Generated by private class-dump
//

@class HMDTTMonitor;

@interface BDXBridgeProtocolMonitor : NSObject {
    HMDTTMonitor *_hmdMonitor;
}

@property (retain, nonatomic) HMDTTMonitor *hmdMonitor;

+ (id)hostAppID;
+ (id)hostAppChannel;
+ (id)sharedInstance;

- (id)hmdMonitor;
- (void)track:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)setHmdMonitor:(id)arg0;
- (void)trackPerformanceWithCallMessage:(id)arg0 callbackMessage:(id)arg1 callbackResult:(id)arg2 containerType:(id)arg3 callbackEncodeDuration:(id)arg4 callbackSendTimestamp:(id)arg5;
- (void).cxx_destruct;
- (id)initWithMonitor:(id)arg0;

@end