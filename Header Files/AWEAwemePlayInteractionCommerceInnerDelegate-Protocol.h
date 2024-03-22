//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;
@protocol AWEAdSimilarRecommendView, AWEAdPromptViewManager, AWEAdLynxCardManager;

@protocol AWEAwemePlayInteractionCommerceInnerDelegate <NSObject>

@property (nonatomic, retain) UILabel *cleanModeAdTitle;
@property (nonatomic, retain) id<AWEAdPromptViewManager> promptViewManager;
@property (nonatomic, retain) id<AWEAdLynxCardManager> adLynxCardManager;
@property (nonatomic, retain) UIView<AWEAdSimilarRecommendView> *similarRecommendView;
@property (nonatomic, copy) NSString *componentsPriorityType;
@property (nonatomic) BOOL alreadyShowAdOperationGuide;
@property (nonatomic) BOOL adInteractedWithFeedAutoPLay;
@property (nonatomic, readonly) BOOL adOperationGuideShowing;
@property (nonatomic, readonly) BOOL forbidCommentViewLoadInAdvance;

- (void)resumeCardAnimation;
- (void)cancelCardAnimation;
- (id)cleanModeAdTitle;
- (void)setCleanModeAdTitle:(id)arg0;
- (void)setPromptViewManager:(id)arg0;
- (id)adLynxCardManager;
- (void)setAdLynxCardManager:(id)arg0;
- (id)similarRecommendView;
- (void)setSimilarRecommendView:(id)arg0;
- (id)componentsPriorityType;
- (void)setComponentsPriorityType:(id)arg0;
- (BOOL)alreadyShowAdOperationGuide;
- (void)setAlreadyShowAdOperationGuide:(BOOL)arg0;
- (BOOL)adInteractedWithFeedAutoPLay;
- (void)setAdInteractedWithFeedAutoPLay:(BOOL)arg0;
- (BOOL)adOperationGuideShowing;
- (BOOL)forbidCommentViewLoadInAdvance;
- (void)updateAdOperationViewNewImmediately;
- (BOOL)isSimilarRecommendViewShowing;
- (void)reCalculateComponentPriority:(id)arg0;
- (void)promptCardAppearWithOffset:(double)arg0;
- (void)promptCardAppearWithOffset:(double)arg0;
- (void)promptCardDisAppear;
- (void)showSimilarRecommendViewIfNeedWithAnimation:(BOOL)arg0;
- (void)showSimilarRecommendViewIfNeedWithAnimation:(BOOL)arg0;
- (BOOL)checkToShowCardForCurrentPriorityComponent:(unsigned long long)arg0;
- (BOOL)checkToShowCardForCurrentPriorityComponent:(unsigned long long)arg0;
- (void)setupCardWithQuickSlideStrategy:(id)arg0;
- (void)setupCardWithQuickSlideStrategy:(id)arg0;
- (void)viewDidAppearForLazyLoad;
- (void)viewWillDisappearForLazyLoad;
- (id)promptViewManager;
- (void)setModel:(id)arg0;
- (BOOL)isInteracting;

@optional

- (void)showAnimationContainerWithIndex:(long long)arg0;
- (void)showAnimationContainerWithIndex:(long long)arg0;

@end
