//
//     Generated by private class-dump
//

@protocol AWEECOMIMMsgCellDelegate <NSObject>

- (void)msgCellDidSkipToReport:(id)arg0;
- (void)msgCellDidClickImage:(id)arg0 imageItemModel:(id)arg1;
- (void)msgCellDidSendQuestionAnswer:(id)arg0 cellModel:(id)arg1;
- (void)msgCellDidSendSelectableMsgCardMessage:(id)arg0 cellModel:(id)arg1;
- (void)msgCellDidChangeHeight:(id)arg0 tableCell:(id)arg1;
- (void)msgCellDidModifyUserConfig:(id)arg0 bizType:(int)arg1 openStatus:(int)arg2;
- (void)msgCellDidUserSwitchToHuman:(id)arg0 reqId:(id)arg1;
- (void)msgCellDidResendMessage:(id)arg0 lastSendMsgModel:(id)arg1;
- (void)msgCellDidClickAvatar:(id)arg0;
- (void)msgCellDidSendSelectableMessage:(id)arg0 cellModel:(id)arg1;
- (void)msgCellDidClickReEdit:(id)arg0;
- (void)msgCellDidUpdate:(id)arg0;
- (void)msgCellDidRatingCardChangeTextViewFirstResponder:(BOOL)arg0 msgModel:(id)arg1;

@end