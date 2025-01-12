//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIViewController;

@interface AWETeenModeBottomCommonBar : AWETeenPlayInteractionBaseElement <AWEBaseElementProtocol> {
    UIView *_containerView;
    UILabel *_titleLabel;
    UIView *_roundView;
    UILabel *_separateLabel;
    UILabel *_tipsLabel;
    UIImageView *_imageView;
    UIImageView *_arrowView;
    UIImageView *_avatarView;
    UIView *_maskView;
    NSString *_showType;
    UIViewController *_videoController;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundView;
@property (retain, nonatomic) UILabel *separateLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) NSString *showType;
@property (weak, nonatomic) UIViewController *videoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWithModel:(id)arg0;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)separateLabel;
- (void)setSeparateLabel:(id)arg0;
- (void)p_setupViews;
- (void)p_setupLayout;
- (void)p_onSingleTap;
- (id)roundView;
- (void)p_onSingleTapForHotSpot;
- (void)p_onSingleTapForAlbum;
- (void)p_onSingleTapForIPAlbumOrOthers;
- (void)p_onSingleTapForGroot;
- (void)p_onSingleTapForKnowledge;
- (void)p_onSingleTapForRelatedSearch;
- (id)p_setupGrootSchemaWithSchema:(id)arg0 pediaID:(id)arg1;
- (void)setRoundView:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)imageView;
- (id)titleLabel;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (void)setImageView:(id)arg0;
- (id)containerView;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (id)showType;
- (void)setShowType:(id)arg0;

@end
