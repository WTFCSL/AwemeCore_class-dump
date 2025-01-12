//
//     Generated by private class-dump
//

@class NSString, HMDTTMonitor;

@interface SpeechEngineMonitor : NSObject {
    NSString *_hostAppID;
    NSString *_deviceID;
    NSString *_reqId;
    HMDTTMonitor *_monitorManager;
}

@property (retain, nonatomic) NSString *hostAppID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *reqId;
@property (retain, nonatomic) HMDTTMonitor *monitorManager;

- (id)reqId;
- (void)setReqId:(id)arg0;
- (void)setHostAppID:(id)arg0;
- (id)monitorManager;
- (void)setMonitorManager:(id)arg0;
- (id)hostAppID;
- (id)getDirectiveName:(long long)arg0;
- (id)getMessageName:(int)arg0;
- (id)initMonitorWithHostAppID:(id)arg0 deviceID:(id)arg1 sdkVersion:(id)arg2;
- (void)monitorDirectiveWithEngineName:(id)arg0 directiveType:(long long)arg1 data:(id)arg2 errorCode:(long long)arg3 extDic:(id)arg4;
- (void)monitorMessageWithEngineName:(id)arg0 messageType:(int)arg1 data:(id)arg2 extDic:(id)arg3;
- (void)setDeviceID:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;

@end
