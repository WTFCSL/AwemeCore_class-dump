//
//     Generated by private class-dump
//

@class UIImageView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveMultiLinkerMediaCustomItemView : UIView {
    unsigned long long _currentStatus;
    UIImageView *_iconImageView;
    UIImageView<IESLiveWebPPlayer> *_animationView;
    UILabel *_bottomTitleLbl;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) UILabel *bottomTitleLbl;

- (void)didSetAttachingDIContext;
- (void)renderStatus:(unsigned long long)arg0;
- (void)setBottomTitleLbl:(id)arg0;
- (id)bottomTitleLbl;
- (void)p_animateWithResourceName:(id)arg0;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (void)setCurrentStatus:(unsigned long long)arg0;
- (id)iconImageView;
- (void)loadViews;
- (void)setIconImageView:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end
