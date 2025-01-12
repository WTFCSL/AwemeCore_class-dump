//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWEAwemeModel, AWEAdInteractiveLandingpageRifleView;

@interface AWEAdInteractiveLandingpageManager : NSObject <AWEAdInteractiveLandingpageManager, AWEBDARifleViewDelegate> {
    BOOL _isFromHomepage;
    AWEAwemeModel *_aweme;
    UIViewController *_containerVC;
    AWEAdInteractiveLandingpageRifleView *_interactiveCardView;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWEAdInteractiveLandingpageRifleView *interactiveCardView;
@property (nonatomic) BOOL isFromHomepage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowInteractiveLandingpageCardWithModel:(id)arg0;
+ (id)adComponentWithAdModel:(id)arg0;
+ (BOOL)hasInteractiveDataWithComponent:(id)arg0;

- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)rifleView:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)setIsFromHomepage:(BOOL)arg0;
- (void)loadCardView;
- (void)layoutCardViewWithContainerView:(id)arg0;
- (void)setInteractiveCardView:(id)arg0;
- (id)interactiveCardView;
- (BOOL)isFromHomepage;
- (void)hideInteractiveCard;
- (void)setupContainerWithContainerVC:(id)arg0 model:(id)arg1 isFromHomepage:(BOOL)arg2;
- (void)showInteractiveCard;
- (void).cxx_destruct;
- (void)reset;

@end
