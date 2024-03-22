//
//     Generated by private class-dump
//

@class UIView, AWESkylightUnreadTipViewModel, AWESkylightDotConfig, NSTimer, UIImageView, BDImageView, UILabel, DUXBadge;

@interface AWESkylightUnreadTipView : UIView {
    AWESkylightUnreadTipViewModel *_viewModel;
    UIView *_containerView;
    BDImageView *_bottomImageView;
    BDImageView *_topImageView;
    UILabel *_descLabel;
    DUXBadge *_textDot;
    UIImageView *_arrowImage;
    AWESkylightDotConfig *_dotConfig;
    NSTimer *_dotTimer;
}

@property (retain, nonatomic) AWESkylightUnreadTipViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *bottomImageView;
@property (retain, nonatomic) BDImageView *topImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) DUXBadge *textDot;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) AWESkylightDotConfig *dotConfig;
@property (retain, nonatomic) NSTimer *dotTimer;

- (void)didClick;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)refreshView;
- (id)topImageView;
- (void)setTopImageView:(id)arg0;
- (id)initWithUnreadTipViewModel:(id)arg0;
- (void)setupAvatarImageView;
- (id)dotConfig;
- (void)setDotConfig:(id)arg0;
- (void)setupDesclabel;
- (void)setupArrowImage;
- (void)setupTextDot;
- (void)showTextDot;
- (id)creatFollowerImageView:(BOOL)arg0;
- (void)setTextDot:(id)arg0;
- (id)textDot;
- (id)dotTimer;
- (void)hideTextDot;
- (void)configDescLabelTitle;
- (id)attributedStringWithPrefix:(id)arg0 suffix:(id)arg1 attributes:(id)arg2 maximumWidth:(double)arg3 maximumNumberOfLines:(unsigned long long)arg4;
- (void)hideTextDotTimer;
- (void)setDotTimer:(id)arg0;
- (void)updateWithSkylightDotConfig:(id)arg0;
- (void)hideDotTimer;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)setupUI;
- (id)arrowImage;
- (void)setArrowImage:(id)arg0;
- (void)addObservers;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg0;

@end
