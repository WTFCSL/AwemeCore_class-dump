//
//     Generated by private class-dump
//

@class AWEPlayInteractionViewController, AWEOlderVerticalGuideViewController, NSDictionary, NSString, AWEOlderInteractiveGuideViewController, UITableView;

@interface AWEOlderInteractiveGuideManager : NSObject <AWEOlderInteractiveGuideManagerProtocol> {
    NSDictionary *_avatarGuideConfig;
    NSDictionary *_commenGuideConfig;
    AWEOlderInteractiveGuideViewController *_guideVC;
    AWEOlderVerticalGuideViewController *_verticalGuideVC;
    AWEPlayInteractionViewController *_interactionVC;
    UITableView *_tableView;
    long long _tabType;
    long long _followStatus;
    long long _loopTimes;
    long long _lastShowCommentBubbleGuideIndex;
}

@property (retain, nonatomic) NSDictionary *avatarGuideConfig;
@property (retain, nonatomic) NSDictionary *commenGuideConfig;
@property (retain, nonatomic) AWEOlderInteractiveGuideViewController *guideVC;
@property (retain, nonatomic) AWEOlderVerticalGuideViewController *verticalGuideVC;
@property (weak, nonatomic) AWEPlayInteractionViewController *interactionVC;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long tabType;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long loopTimes;
@property (nonatomic) long long lastShowCommentBubbleGuideIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (long long)followStatus;
- (long long)loopTimes;
- (void)setFollowStatus:(long long)arg0;
- (long long)tabType;
- (void)isOpenCommentVC;
- (void)setTabType:(long long)arg0;
- (id)interactionVC;
- (void)setInteractionVC:(id)arg0;
- (void)setLoopTimes:(long long)arg0;
- (void)showOlderInteractGuideWithVideoPlayInTargetVC:(id)arg0 followStatus:(long long)arg1 inContainerView:(id)arg2 isNextLoop:(BOOL)arg3 tabType:(long long)arg4;
- (void)showOlderVerticalGuideWithTips:(id)arg0 forTargetView:(id)arg1 targetViewCickHandler:(id /* block */)arg2;
- (void)setLastShowCommentBubbleGuideIndex:(long long)arg0;
- (BOOL)__userHasOpenOtherProfileVC;
- (BOOL)__interactMaskGuideTimeLimit;
- (BOOL)__userHasOpenCommentVC;
- (double)__olderInteractProfileGuideShowTimeGetter;
- (double)__guideShowInterval;
- (double)__olderInteractCommentGuideShowTimeGetter;
- (BOOL)__shouldShowInteractGuideNormal;
- (void)__clearAlreadyShowGuide;
- (BOOL)__showAvatarGuideIfNeeded;
- (BOOL)__showCommentGuideIfNeeded;
- (BOOL)__shouldShowInteractAvatarGuide;
- (double)__avatarGuideShowInterval;
- (long long)__olderInteractProfileGuideShowCountGetter;
- (long long)__avatarGuideShowCount;
- (void)__showAvatarGuide;
- (BOOL)__shouldShowInteractCommentGuide;
- (double)__commentGuideShowInterval;
- (long long)__olderInteractCommentGuideShowCountGetter;
- (long long)__commentGuideShowCount;
- (void)__showCommentGuide;
- (id)verticalGuideVC;
- (void)setVerticalGuideVC:(id)arg0;
- (BOOL)__enableTableViewFullVisible;
- (id)guideVC;
- (id)__commentLabelString;
- (void)__olderInteractCommentGuideShowTimeStorage:(double)arg0;
- (void)__olderInteractCommentGuideShowCountStorage:(long long)arg0;
- (void)__trackOlderGuideShowWithType:(id)arg0;
- (id)__avatarLabelString;
- (void)__olderInteractProfileGuideShowTimeStorage:(double)arg0;
- (void)__olderInteractProfileGuideShowCountStorage:(long long)arg0;
- (BOOL)__isHotTab;
- (BOOL)__isFamiliarTab;
- (BOOL)__checkCommentListShowingOnViewController:(id)arg0;
- (BOOL)__checkSharePanelShowingOnViewController:(id)arg0;
- (id)__getCurrentTableViewForViewController:(id)arg0;
- (id)commenGuideConfig;
- (id)avatarGuideConfig;
- (void)isOpenOtherProfileVC;
- (void)__olderInteractCommentBubbleGuideShowTimeStorage:(double)arg0;
- (double)__olderInteractCommentBubbleGuideShowTimeGetter;
- (void)__olderInteractCommentBubbleGuideShowCountStorage:(long long)arg0;
- (long long)__olderInteractCommentBubbleGuideShowCountGetter;
- (long long)__commentBubbleGuideShowCount;
- (long long)__commentBubbleGuideShowInterval;
- (void)__trackOlderGuieBubbleShowWithType:(id)arg0;
- (void)setAvatarGuideConfig:(id)arg0;
- (void)setCommenGuideConfig:(id)arg0;
- (void)setGuideVC:(id)arg0;
- (long long)lastShowCommentBubbleGuideIndex;
- (id)init;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;

@end
