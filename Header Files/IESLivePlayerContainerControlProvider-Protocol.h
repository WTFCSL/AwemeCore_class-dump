//
//     Generated by private class-dump
//

@class UIStackView, HTSLiveAmazingBackgroundView, HTSEventForwardingView;

@protocol IESLivePlayerContainerControlProvider <NSObject>

@property (readonly, nonatomic) long long hideStatus;
@property (readonly, nonatomic) HTSEventForwardingView *containerView;
@property (readonly, nonatomic) HTSEventForwardingView *topView;
@property (readonly, nonatomic) HTSEventForwardingView *bottomView;
@property (readonly, nonatomic) UIStackView *bottomStackViewForVS;
@property (readonly, nonatomic) HTSLiveAmazingBackgroundView *topMaskView;
@property (readonly, nonatomic) HTSLiveAmazingBackgroundView *bottomMaskView;

- (id)topMaskView;
- (id)bottomMaskView;
- (void)allViewTransformPortraitForHidden:(BOOL)arg0;
- (void)addView:(id)arg0 forKey:(id)arg1;
- (void)addView:(id)arg0 forKey:(id)arg1 position:(long long)arg2;
- (void)removeViewForKey:(id)arg0;
- (void)needCheckSubItemsForDisplaySyncWithIdentifier:(id)arg0;
- (void)checkedSubItemsForDisplaySyncWithIdentifier:(id)arg0;
- (void)relayoutForSeekPan:(BOOL)arg0;
- (void)addView:(id)arg0 isResident:(BOOL)arg1 forKey:(id)arg2;
- (void)checkShouldShowOnPad;
- (id)bottomStackViewForVS;
- (id)containerView;
- (id)topView;
- (id)bottomView;
- (long long)hideStatus;

@end