//
//     Generated by private class-dump
//

@class ACCCameraSubscription, ACCLightningRecordButton, NSString, ACCGroupedPredicate;

@interface ACCRecordButtonServiceImpl : NSObject <ACCRecordButtonService> {
    BOOL _shouldBeganImmediately;
    BOOL _supportPicture;
    BOOL _fromHold;
    long long _state;
    ACCLightningRecordButton *_recordButton;
    ACCGroupedPredicate *_callBeganImmediatelyPredicate;
    ACCGroupedPredicate *_supportPictureModePredicate;
    unsigned long long _mixSubtype;
    ACCCameraSubscription *_subscription;
}

@property (weak, nonatomic) ACCLightningRecordButton *recordButton;
@property (retain, nonatomic) ACCGroupedPredicate *callBeganImmediatelyPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *supportPictureModePredicate;
@property (nonatomic) unsigned long long mixSubtype;
@property (nonatomic) BOOL shouldBeganImmediately;
@property (nonatomic) BOOL supportPicture;
@property (nonatomic) BOOL fromHold;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)mixSubtype;
- (void)setMixSubtype:(unsigned long long)arg0;
- (void)linkRecordAnimationView:(id)arg0;
- (id)generateRecordButton;
- (void)syncRecordButtonState:(id)arg0;
- (void)triggerPropPanelRecordBeganTask;
- (void)triggerTouchBeganEventWithView:(id)arg0 touches:(id)arg1 event:(id)arg2;
- (void)triggerTouchMovedEventWithView:(id)arg0 touches:(id)arg1 event:(id)arg2;
- (void)triggerTouchEndedEventWithView:(id)arg0 touches:(id)arg1 event:(id)arg2;
- (void)triggerTouchCancelledEventWithView:(id)arg0 touches:(id)arg1 event:(id)arg2;
- (void)triggerStartRecordFromCountDown;
- (void)triggerStartPictureFromVolumnButton;
- (void)triggerStartRecordFromVolumnButton;
- (void)triggerStopRecordFromVolumnButton;
- (void)switchMixSubtypeToTap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recordButtonFrame:(id)arg0;
- (id)callBeganImmediatelyPredicate;
- (id)supportPictureModePredicate;
- (void)setFromHold:(BOOL)arg0;
- (void)touchBegan;
- (void)touchEnd;
- (void)setShouldBeganImmediately:(BOOL)arg0;
- (void)setSupportPicture:(BOOL)arg0;
- (BOOL)shouldBeganImmediately;
- (void)triggerRecordStartEvent:(long long)arg0;
- (void)switchMixTypeToHold;
- (BOOL)supportPicture;
- (void)triggerRecordStopEvent;
- (BOOL)fromHold;
- (void)setCallBeganImmediatelyPredicate:(id)arg0;
- (void)setSupportPictureModePredicate:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (id)recordButton;
- (void)setRecordButton:(id)arg0;

@end
