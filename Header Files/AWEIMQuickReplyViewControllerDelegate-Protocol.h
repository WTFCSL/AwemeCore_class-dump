//
//     Generated by private class-dump
//

@protocol AWEIMQuickReplyViewControllerDelegate <NSObject>

@optional

- (void)quickReplyViewControllerTappedBlankMask:(id)arg0;
- (void)quickReplyViewController:(id)arg0 didSendContent:(id)arg1;
- (void)quickReplyViewControllerWillDismiss:(id)arg0;
- (void)quickReplyViewControllerDidDismiss:(id)arg0;
- (void)quickReplySendShareMessageSuccessNotification;
- (void)quickReplyVoipSendMessageLog;
- (BOOL)isQuickReplyViewControllerCanShowPushGuideBanner:(id)arg0;
- (void)quickReplyViewController:(id)arg0 didSelectEmoticonModel:(id)arg1;

@end
