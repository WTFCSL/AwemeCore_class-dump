//
//     Generated by private class-dump
//

@class IESLiveInteractionBattleFullLinkMonitor;

@interface IESLiveInteractAnimationTraker : NSObject {
    IESLiveInteractionBattleFullLinkMonitor *_monitor;
}

@property (retain, nonatomic) IESLiveInteractionBattleFullLinkMonitor *monitor;

- (void)didSetAttachingDIContext;
- (void)monitorWithName:(id)arg0 extra:(id)arg1 eventType:(unsigned long long)arg2;
- (void)monitorWithName:(id)arg0 extra:(id)arg1 eventType:(unsigned long long)arg2 metric:(id)arg3;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
