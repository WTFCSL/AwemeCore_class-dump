//
//     Generated by private class-dump
//

@class NSString, NSTimer, BDUGDeviceCollector, NSDictionary;

@interface BDUGDeviceManager : NSObject {
    NSString *_appID;
    NSString *_appName;
    NSString *_host;
    NSDictionary *_settingsData;
    BDUGDeviceCollector *_collector;
    NSTimer *_timer;
}

@property (retain, nonatomic) BDUGDeviceCollector *collector;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSDictionary *settingsData;

+ (id)buildQueryFromDictionary:(id)arg0;
+ (void)uploadDataWithURLPath:(id)arg0 deviceInfo:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedManager;

- (BOOL)checkLastReportTimestamp;
- (void)reportLaunchingUploadingWithCompletionHandler:(id /* block */)arg0;
- (void)startLaunchingReportWithCompletionHandler:(id /* block */)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)timer;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (void)setCollector:(id)arg0;
- (id)host;
- (void)setTimer:(id)arg0;
- (id)appID;
- (id)collector;
- (id)settingsData;
- (void)setSettingsData:(id)arg0;

@end
