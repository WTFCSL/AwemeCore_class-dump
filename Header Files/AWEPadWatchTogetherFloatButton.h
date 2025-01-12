//
//     Generated by private class-dump
//

@class UIButton, UIViewController, AWEPadWatchTogetherDefaultIcon;
@protocol AWERTVInviteViewController;

@interface AWEPadWatchTogetherFloatButton : UIView {
    UIButton *_watchTogetherButton;
    UIViewController<AWERTVInviteViewController> *_feedShareView;
    AWEPadWatchTogetherDefaultIcon *_defaultIcon;
}

@property (retain, nonatomic) UIButton *watchTogetherButton;
@property (retain, nonatomic) UIViewController<AWERTVInviteViewController> *feedShareView;
@property (retain, nonatomic) AWEPadWatchTogetherDefaultIcon *defaultIcon;

- (void)setDefaultIcon:(id)arg0;
- (id)feedShareView;
- (void)setFeedShareView:(id)arg0;
- (id)watchTogetherButton;
- (void)getRTVListSelectInviteFriend:(id)arg0;
- (void)dismissContentSheet;
- (void)setWatchTogetherButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)defaultIcon;

@end
