//
//     Generated by private class-dump
//

@class IESLiveAnchorMultiLinkerLoadingView, UIView;

@protocol IESLiveMultiLinkerGridViewProtocol <NSObject>

@property (nonatomic) BOOL didUpdate;
@property (weak, nonatomic) UIView *tipViewSuperview;
@property (retain, nonatomic) IESLiveAnchorMultiLinkerLoadingView *loadingView;

- (void)updateActive:(BOOL)arg0;
- (id)tipViewSuperview;
- (void)onReceivedClearNotification:(BOOL)arg0;
- (void)updateLayoutWithType:(unsigned long long)arg0;
- (void)setTipViewSuperview:(id)arg0;
- (void)showInteractScoreButton:(BOOL)arg0;
- (void)updateInteractScorePositionWithSessionCount:(unsigned long long)arg0;
- (void)updateInteractScore:(id)arg0;
- (BOOL)didUpdate;
- (void)setDidUpdate:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@optional

- (void)sendMultiLinkerEvent:(unsigned long long)arg0 withParams:(id)arg1;
- (void)updateLoadingStatus:(BOOL)arg0;
- (void)updateProfileViewHidden;
- (void)updateOwnerTipBackgroungViewIfNeeed;
- (void)refreshTipViewIfNeeded;
- (void)handleNativeComponents:(id)arg0;
- (void)updateResultViewShow:(BOOL)arg0;
- (void)setupBattleScoreView:(id)arg0;
- (void)updateMedalIconShow:(BOOL)arg0;
- (void)updateLargeSmallView;
- (void)updateCloseMicTopOffset:(double)arg0;
- (void)updateProfileBottomOffset:(double)arg0;
- (void)updateUser:(id)arg0;

@end