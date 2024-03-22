//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWETeenPlayInteractionRecorderEnterBar : AWETeenPlayInteractionBaseElement <AWETeenCrossInteractionViewsMessage> {
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIButton *_enterButton;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)enterButton;
- (void)setEnterButton:(id)arg0;
- (void)hideAllRecorderEnterBar;
- (void)p_entranceClickTrack;
- (void)p_guardGesture;
- (void)p_onEnterButtonClick;
- (void)p_onCloseButtonClick;
- (void).cxx_destruct;
- (id)iconView;
- (void)setData:(id)arg0;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end