//
//     Generated by private class-dump
//

@protocol AFDPlayRemoteFeedStreamCellDelegate <NSObject>

- (void)playerIsPaused;
- (void)videoBeginPlayWithModel:(id)arg0;
- (void)playerStartPlay;
- (void)becomeNewOperator;
- (BOOL)safeSettingBoolValueForKey:(id)arg0 defaultValue:(BOOL)arg1;
- (void)showCommentPanelWithAwemeModel:(id)arg0 interactionVC:(id)arg1;
- (BOOL)shouldAddMixElement;
- (void)playRemoteFeedCell:(id)arg0 didPlayWithProgress:(double)arg1 totalTime:(double)arg2;
- (void)playRemoteFeedCellWillStartNextLoop:(id)arg0;
- (void)playRemoteFeedCell:(id)arg0 didChangePlaybackState:(long long)arg1 withProgress:(long long)arg2;
- (void)playBySingleClick:(id)arg0;
- (void)guestDidTryScrollModel:(id)arg0;

@end
