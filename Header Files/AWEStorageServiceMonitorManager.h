//
//     Generated by private class-dump
//

@class AWEStorageServiceMonitor, NSString;

@interface AWEStorageServiceMonitorManager : NSObject {
    NSString *_sessionID;
    AWEStorageServiceMonitor *_monitor;
}

@property (retain, nonatomic) AWEStorageServiceMonitor *monitor;
@property (copy, nonatomic) NSString *sessionID;

+ (id)sharedInstance;

- (void)setDelegateForAWEStorage;
- (void)startMonitorIfNeeded;
- (id)init;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)monitor;
- (id)sessionID;
- (void)setMonitor:(id)arg0;
- (void)startMonitor;
- (void)stopMonitor;

@end