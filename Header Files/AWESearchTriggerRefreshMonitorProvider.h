//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchTriggerRefreshMonitorProvider : NSObject <AWESearchStageMonitorEventProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldSwitchToV3Cost;

- (id)handleEventDidStart:(id)arg0;
- (id)handleEventDidBindContext:(id)arg0;
- (id)handleEventAddStage:(id)arg0 withAppendParams:(id)arg1;
- (id)handleEventDidEnd:(id)arg0;
- (id)eliminateKeysBeforeSendEvent;
- (id)eventName;

@end
