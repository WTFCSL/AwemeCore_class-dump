//
//     Generated by private class-dump
//

@class HMDTTMonitor, NSString;

@interface IESMMTrackerHelper : NSObject <IESMMTrackerHelperProtocol> {
    HMDTTMonitor *_monitor;
}

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureMMTracker:(id)arg0;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (void)load;
+ (id)shareInstance;

- (void)hmdTrackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
- (void)localConfigureMMTracker:(id)arg0;
- (void)trackExceptionWithType:(id)arg0 callback:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
