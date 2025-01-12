//
//     Generated by private class-dump
//

@protocol RTVInteractionContentDelegate <NSObject, RTVInteractionSendMessageActionControllerDelegate>

@optional

- (BOOL)willChangeToLayoutType:(unsigned long long)arg0;
- (void)updateCurrentPlayItemProgress:(double)arg0 totalTime:(double)arg1;
- (void)willStartNextLoop;
- (id)transitionToInterfaceOrientations:(BOOL)arg0;
- (void)updateIsPause:(BOOL)arg0;
- (BOOL)currentInterfaceOrientationIsPortait;
- (id)dismissInterruptAndResignKeyWindow;
- (BOOL)isNarrowWindowVerticalAlignBottom;
- (void)foldInteraction;
- (void)exitInteractionWithReason:(long long)arg0 delay:(BOOL)arg1;

@end
