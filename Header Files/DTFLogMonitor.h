//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface DTFLogMonitor : NSObject {
    NSString *_token;
    NSMutableDictionary *_bizInfo;
    NSString *_appid;
    BOOL _bIsCardFace;
}

+ (void)writeLogWithActionId:(id)arg0 extParams:(id)arg1 appId:(id)arg2 seed:(id)arg3 ucId:(id)arg4;
+ (void)setUploadBlock:(id /* block */)arg0;
+ (void)writeLogWithActionId:(id)arg0 extParams:(id)arg1 appId:(id)arg2 seed:(id)arg3 ucId:(id)arg4 bizType:(id)arg5 formatterDictionary:(id)arg6;
+ (BOOL)uploadLogChooice;
+ (void)distantUploadlog;
+ (id)getPublicLogDic:(id)arg0;
+ (id)getExtLogDic:(id)arg0;
+ (void)DTF_writeLogWithActionId:(id)arg0 extParams:(id)arg1 appId:(id)arg2 seed:(id)arg3 ucId:(id)arg4;
+ (void)setSDKVersion:(id)arg0;
+ (id)getInstance;

- (void)addPublicLog:(id)arg0;
- (void)addMonitorLogWithSeedId:(id)arg0 param:(id)arg1 extParam:(id)arg2;
- (void)addMonitorLogWithSeedId:(id)arg0 ucId:(id)arg1 param:(id)arg2 extParam:(id)arg3;
- (void)addMonitorLogWithSeedId:(id)arg0 extParam:(id)arg1;
- (void)setupBaseExtInfo;
- (void)addMonitorLogWithSeedId:(id)arg0 ucId:(id)arg1 extParam:(id)arg2;
- (void)addDebugMonitorLogWithSeedId:(id)arg0 extParam:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)upload;

@end
