//
//     Generated by private class-dump
//

@class NSString;
@protocol BUAHMDSDKMonitor;

@interface BUASDKMonitor : NSObject <BUASDKMonitor> {
    id<BUAHMDSDKMonitor> _monitor;
}

@property (retain, nonatomic) id<BUAHMDSDKMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)reportEvent:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (id)innerMonitor;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (id)initWithVersion:(id)arg0;

@end