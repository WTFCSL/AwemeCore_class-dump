//
//     Generated by private class-dump
//

@class UIImageView, NSString, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveGameInteractEntranceItem : UIView {
    UIImageView *_iconImageView;
    UIImageView *_animationBgView;
    NSString *_animationWebpStr;
    unsigned long long _status;
    UIImageView<IESLiveWebPPlayer> *_animationView;
    UILabel *_bottomTitleLbl;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *animationBgView;
@property (copy, nonatomic) NSString *animationWebpStr;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UILabel *bottomTitleLbl;

- (id)animationBgView;
- (void)setAnimationBgView:(id)arg0;
- (void)renderStatus:(unsigned long long)arg0;
- (void)setBottomTitleLbl:(id)arg0;
- (id)bottomTitleLbl;
- (void)p_animateWithResourceName:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 DIContext:(id)arg1;
- (void)hideRedDot:(BOOL)arg0;
- (void)setAnimationWebpStr:(id)arg0;
- (id)animationWebpStr;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;
- (id)iconImageView;
- (void)loadViews;
- (void)setIconImageView:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end