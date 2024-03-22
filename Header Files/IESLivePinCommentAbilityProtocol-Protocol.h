//
//     Generated by private class-dump
//

@protocol IESLivePinCommentAbilityDelegate;

@protocol IESLivePinCommentAbilityProtocol <NSObject>

@property (weak, nonatomic) id<IESLivePinCommentAbilityDelegate> delegate;

- (id)initWithRoomModel:(id)arg0 diContext:(id)arg1;
- (BOOL)hasPinAuth;
- (void)pinCommentNode:(id)arg0;
- (void)handleHighlightItem:(id)arg0 withNode:(id)arg1;
- (id)pinCommonFromHighlightItem:(id)arg0;
- (void)unPinCommentNode:(id)arg0;
- (double)preferHeightWithNode:(id)arg0;
- (BOOL)isDuplicateNode:(id)arg0 withOtherNode:(id)arg1;
- (long long)itemId:(id)arg0;
- (void)injectTrackEventParams:(id)arg0 withNode:(id)arg1 forType:(long long)arg2;
- (id)duplicateToastText;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (BOOL)isValidPinNode:(id)arg0;
- (BOOL)isValidHighlightItem:(id)arg0;
- (void)didClickedActionSheetItemWithMsgListNode:(id)arg0;
- (void)didClickedOnPinWithNode:(id)arg0;
- (void)didDisplayedOnceOnPinWithNode:(id)arg0;
- (void)didDisplayedOnPinWithNode:(id)arg0;

@end
