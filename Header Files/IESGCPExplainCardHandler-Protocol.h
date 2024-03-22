//
//     Generated by private class-dump
//

@protocol IESGCPExplainCardHandler <NSObject>

- (id)initWithRoomID:(id)arg0 anchorID:(id)arg1;
- (id)explainCardViewWithModel:(id)arg0;

@optional

- (void)receivedGameCPShowMessage:(id)arg0;
- (void)receivedEnterIntroduceCardResponse:(id)arg0;
- (void)explainCardWillShowWithAnimated:(BOOL)arg0 showAtmosphere:(BOOL)arg1;
- (void)explainCardDidShowedWithAnimated:(BOOL)arg0;
- (void)explainCardWillDismissWithAnimated:(BOOL)arg0 reason:(unsigned long long)arg1;
- (void)explainCardDidDismissedWithAnimated:(BOOL)arg0;
- (BOOL)periodicCycleEnable;
- (void)periodicCycleDidTriggerWithDuration:(double)arg0;

@end
