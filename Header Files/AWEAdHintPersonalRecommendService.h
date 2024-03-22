//
//     Generated by private class-dump
//

@class AWEAdHintRecord, NSString;

@interface AWEAdHintPersonalRecommendService : HTSService <AWEUserMessage, AWEAdPersonalRecommendSwitchMessage, BDXContainerLifecycleProtocol, AWEAdHintPersonalRecommendService> {
    BOOL _hintPopupShowing;
    BOOL _shouldHint;
    AWEAdHintRecord *_record;
    unsigned long long _status;
}

@property (retain, nonatomic) AWEAdHintRecord *record;
@property (nonatomic) BOOL hintPopupShowing;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL shouldHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerABExperiment;
+ (BOOL)hintRecommendEnableWithExporsure:(BOOL)arg0;
+ (id)getHintRecommendDislikeTimesWithExporsure:(BOOL)arg0;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)containerDidClose:(id)arg0;
- (void)didFinishLogin;
- (void)onServiceInit;
- (void)updateAdPersonalRecommendStatus:(BOOL)arg0;
- (void)saveRecord;
- (BOOL)shouldHint;
- (void)updateShouldHintStatus;
- (void)setHintPopupShowing:(BOOL)arg0;
- (void)recordShowHintRecommend;
- (void)setShouldHint:(BOOL)arg0;
- (void)updateRecommendStatusWithAweme:(id)arg0;
- (BOOL)shouldShowHintRecommendWithAweme:(id)arg0 enterFrom:(id)arg1;
- (void)openHintRecommendPopupViewWithAweme:(id)arg0 closeCompletion:(id /* block */)arg1;
- (void)recordDislikeAwemeIfNeeded:(id)arg0;
- (BOOL)hintPopupShowing;
- (id)currentKey;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)record;
- (void)setStatus:(unsigned long long)arg0;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (void)setRecord:(id)arg0;

@end