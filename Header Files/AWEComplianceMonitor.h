//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEComplianceMonitor : NSObject <AWEUserMessage, HTSAccountMessage, AWEComplianceMonitor> {
    NSMutableDictionary *_eventDictionary;
    NSMutableDictionary *_vcDictionary;
    NSMutableDictionary *_pendingActions;
}

@property (retain, nonatomic) NSMutableDictionary *eventDictionary;
@property (retain, nonatomic) NSMutableDictionary *vcDictionary;
@property (retain, nonatomic) NSMutableDictionary *pendingActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogout;
- (void)equeueMonitorType:(long long)arg0 extraInfo:(id)arg1;
- (void)clearEventForKey:(id)arg0;
- (id)vcDictionary;
- (id)collectWindowLevelMessage;
- (BOOL)calculatedTeenModeEnabledWithModel:(id)arg0;
- (id)minorModeTypeWithModel:(id)arg0;
- (void)registerEventForKey:(id)arg0;
- (void)registerViewControllerEventInit:(id)arg0;
- (void)registerViewControllerEventAppear:(id)arg0;
- (void)registerViewControllerEventClick:(id)arg0;
- (void)registerViewControllerEventDealloc:(id)arg0;
- (void)clearRegisterViewControllerEvent:(id)arg0;
- (void)trackTeenModeChangeWithLastModel:(id)arg0 newModel:(id)arg1;
- (void)setVcDictionary:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)eventDictionary;
- (void)setEventDictionary:(id)arg0;
- (void)dealloc;
- (id)pendingActions;
- (void)setPendingActions:(id)arg0;

@end
