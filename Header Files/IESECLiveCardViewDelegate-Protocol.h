//
//     Generated by private class-dump
//

@protocol IESECLiveCardViewDelegate <IESECLiveCardViewOuterDelegate>

@optional

- (void)cardView:(id)arg0 didClickWithJumpAction:(id /* block */)arg1 extraInfo:(id)arg2;
- (id)cardViewEnvironment;
- (void)cardView:(id)arg0 didShowWithCardModel:(id)arg1;
- (void)cardView:(id)arg0 didCloseWithReason:(long long)arg1;
- (void)cardView:(id)arg0 showBulletScreenNoticeText:(id)arg1 trackEvent:(id)arg2;
- (id)getMessageProductInfo;
- (long long)cardViewShowType;
- (void)cardAddToPanelContainerWith:(id)arg0;

@end
