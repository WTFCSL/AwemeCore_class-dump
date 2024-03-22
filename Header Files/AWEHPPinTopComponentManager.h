//
//     Generated by private class-dump
//

@class NSString, AWEHPPinTopUIContext;
@protocol AWEPzEngineProtocol;

@interface AWEHPPinTopComponentManager : NSObject <AWEAlertProtocol> {
    long long _showingCount;
    id<AWEPzEngineProtocol> _engine;
    AWEHPPinTopUIContext *_pinTopUIContext;
}

@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (nonatomic) long long showingCount;
@property (retain, nonatomic) AWEHPPinTopUIContext *pinTopUIContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithContext:(id)arg0 onClose:(id /* block */)arg1;
- (id)generatePinTopTaskWithModel:(id)arg0;
- (id)generatePinTopComponentUIWithConfig:(id)arg0;
- (void)showPinTopUIWithContext:(id)arg0;
- (long long)showingCount;
- (id)currentTabID;
- (void)handlePinTopCompletionWithTask:(id)arg0 result:(long long)arg1;
- (void)handlePinTopComponentShowWithTask:(id)arg0 result:(long long)arg1;
- (void)handlePinTopComponentDismissWithTask:(id)arg0 type:(long long)arg1;
- (void)handlePinTopComponentConfirmWithTask:(id)arg0;
- (void)handlePinTopSuccessBubbleShowWithTask:(id)arg0 result:(long long)arg1;
- (id)p_allNewTryPinTopWithModel:(id)arg0;
- (id)pinTopUIContext;
- (void)setPinTopUIContext:(id)arg0;
- (id)createPinTopTask;
- (void)setShowingCount:(long long)arg0;
- (void).cxx_destruct;
- (id)engine;
- (void)setEngine:(id)arg0;

@end