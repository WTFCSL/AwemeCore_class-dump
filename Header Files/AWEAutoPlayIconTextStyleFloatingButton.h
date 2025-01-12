//
//     Generated by private class-dump
//

@class AWEPadAutoPlaySwitchView, AWEBubble, UIViewController, NSString, UILabel, UIView, AWEPadAutoPlayTipsConfig;

@interface AWEAutoPlayIconTextStyleFloatingButton : UIView <AWEPadUIAdaptionViewTransitionObserver, AWEFeedAutoPlayFloatingButtonProtocol> {
    BOOL _guidePopoverDidShow;
    id /* block */ onButtonClicked;
    UIView *_backgroundView;
    UILabel *_tipLabel;
    AWEPadAutoPlaySwitchView *_switchView;
    AWEBubble *_guideBubble;
    AWEPadAutoPlayTipsConfig *_tipsConfig;
    long long _guideBubbleDidShowCount;
    double _guideBubbleLastShowTime;
    UIViewController *_rootViewController;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) AWEPadAutoPlaySwitchView *switchView;
@property (retain, nonatomic) AWEBubble *guideBubble;
@property (retain, nonatomic) AWEPadAutoPlayTipsConfig *tipsConfig;
@property (nonatomic) BOOL guidePopoverDidShow;
@property (nonatomic) long long guideBubbleDidShowCount;
@property (nonatomic) double guideBubbleLastShowTime;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } buttonSize;
@property (copy, nonatomic) id /* block */ onButtonClicked;

- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (id /* block */)onButtonClicked;
- (void)dismissGuidePopoverIfNeeded;
- (void)setOnButtonClicked:(id /* block */)arg0;
- (void)updateViewWithAutoPlayState:(long long)arg0 animated:(BOOL)arg1;
- (void)showGuidePopoverIfNeededInContainerView:(id)arg0;
- (void)updatePlayTimeTip:(BOOL)arg0 withText:(id)arg1 autoPlayState:(long long)arg2;
- (BOOL)isButtonFold;
- (BOOL)isShowingLongPressBubble;
- (void)setupUI:(long long)arg0;
- (BOOL)shouldShowGuide;
- (void)initGuideShowState;
- (void)autoPlayFloatingButtonTapped:(id)arg0;
- (id)tipsConfig;
- (void)setGuideBubble:(id)arg0;
- (id)guideBubble;
- (void)markGuideDidShowOnce;
- (void)autoFoldIfNeed:(long long)arg0;
- (void)setTipsConfig:(id)arg0;
- (BOOL)guidePopoverDidShow;
- (void)setGuidePopoverDidShow:(BOOL)arg0;
- (long long)guideBubbleDidShowCount;
- (void)setGuideBubbleDidShowCount:(long long)arg0;
- (double)guideBubbleLastShowTime;
- (void)setGuideBubbleLastShowTime:(double)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)switchView;
- (void)setSwitchView:(id)arg0;

@end
