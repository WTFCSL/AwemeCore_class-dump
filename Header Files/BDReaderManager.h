//
//     Generated by private class-dump
//

@class NSString;
@protocol BDReaderManagerDelegate;

@interface BDReaderManager : NSObject {
    id<BDReaderManagerDelegate> _managerDelegate;
    NSString *_appId;
    NSString *_deviceId;
    NSString *_userId;
    NSString *_channel;
    unsigned long long _sdkVersion;
    double _fps;
}

@property (weak, nonatomic) id<BDReaderManagerDelegate> managerDelegate;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long sdkVersion;
@property (nonatomic) double fps;

+ (id)BDReaderPath;
+ (id)shareInstance;

- (void)trackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (id)BDReaderVersion;
- (void)observeFPS;
- (void)log:(int)arg0 module:(const char *)arg1 func:(const char *)arg2 content:(id)arg3;
- (void)onEvent:(id)arg0 params:(id)arg1;
- (void)trackPerfService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)enterScence:(id)arg0 sceneType:(unsigned long long)arg1;
- (void)leaveScence:(id)arg0 sceneType:(unsigned long long)arg1;
- (void)onError:(id)arg0 params:(id)arg1;
- (void)setAppId:(id)arg0;
- (id)channel;
- (void).cxx_destruct;
- (id)deviceId;
- (id)monitor;
- (void)setChannel:(id)arg0;
- (id)userId;
- (void)setDeviceId:(id)arg0;
- (double)fps;
- (id)appId;
- (void)setUserId:(id)arg0;
- (unsigned long long)sdkVersion;
- (void)setFps:(double)arg0;
- (void)setManagerDelegate:(id)arg0;
- (id)managerDelegate;
- (void)setSdkVersion:(unsigned long long)arg0;

@end
