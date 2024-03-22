//
//     Generated by private class-dump
//

@protocol IESLiveMultiTabService <NSObject>

- (long long)currentTabType;
- (void)insertPortraitSubTab:(id)arg0 atIndex:(long long)arg1 isSelected:(BOOL)arg2;
- (void)removeSubTab:(id)arg0;
- (void)scrollToTab:(long long)arg0 animated:(BOOL)arg1;
- (long long)currentLandscapeTabType;
- (long long)getLastQuitRoomTabID;
- (id)multiTabForFullScreenWithTabID:(long long)arg0;
- (id)currentPortraitMultiTabView;
- (id)insideTabAnimationContainer;
- (id)insideTabToolbarContainer;
- (BOOL)isEnableMutiTab;
- (BOOL)shouldShowMultiTab;
- (double)multiTabCellWidth;
- (double)multiTabTopOffset;
- (double)currentTabIndicatorPosition;
- (void)setTabSelectionViewRightMarginWithWidth:(double)arg0;
- (BOOL)couldOtherViewRecognizePanWithGestureRecognizer:(id)arg0;
- (void)resetRegisterMultiProxyContainer;
- (id)insideMultiTabContainer;
- (long long)findIndexWithTabId:(long long)arg0;
- (id)outMultiTabView;
- (double)tabBarHeight;

@end
