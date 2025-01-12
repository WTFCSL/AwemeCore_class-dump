//
//     Generated by private class-dump
//

@class AWESearchTriggerRefreshMonitorProvider, NSString;

@interface AWETopicTriggerRefreshMonitorProvider : NSObject <AWESearchStageMonitorEventProvider> {
    AWESearchTriggerRefreshMonitorProvider *_realImp;
}

@property (retain, nonatomic) AWESearchTriggerRefreshMonitorProvider *realImp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handleEventDidStart:(id)arg0;
- (id)handleEventAddStage:(id)arg0 withAppendParams:(id)arg1;
- (id)handleEventDidEnd:(id)arg0;
- (id)eliminateKeysBeforeSendEvent;
- (id)realImp;
- (void)setRealImp:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)eventName;

@end
