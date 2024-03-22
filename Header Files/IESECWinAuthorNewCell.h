//
//     Generated by private class-dump
//

@class UIImageView, UILabel, IESECWinAuthorGuideInfoView, IESECRelationFansClubBubbleView, IESECBubbleView, IESECWinAuthorManageInfoBottomView, UIView, CAGradientLayer, NSString, IESECUIImageView, IESECRelationMultipleFunctionsFollowView, IESECWinAuthorObject, IESECWinAuthorManageInfoTopView;

@interface IESECWinAuthorNewCell : UICollectionViewCell <IESECRelationFansClubBubbleViewDelegate, IESECWInAuthorCellProtocol> {
    id /* block */ _clickAvatarBlock;
    id /* block */ _clickGoodAuthorBlock;
    id /* block */ _clickAuthorNameIconBlock;
    id /* block */ _clickBubbleBlock;
    id /* block */ _clickNameLabelAreaBlock;
    id /* block */ _clickOtherAreaBlock;
    IESECRelationMultipleFunctionsFollowView *_followView;
    UILabel *_nameLabel;
    IESECWinAuthorObject *_object;
    UIImageView *_avatarImageView;
    CAGradientLayer *_fixedLayer;
    CAGradientLayer *_animationLayer;
    IESECUIImageView *_livingIcon;
    IESECRelationFansClubBubbleView *_bubbleView;
    UIImageView *_goodAuthorImage;
    UILabel *_fansCountLabel;
    UIView *_splitView;
    UILabel *_ratePrefixLabel;
    UILabel *_rateLabel;
    IESECWinAuthorGuideInfoView *_guideInfoView;
    IESECWinAuthorManageInfoTopView *_topManageInfoView;
    IESECWinAuthorManageInfoBottomView *_bottomManageInfoView;
    UIImageView *_followBubbleImageView;
    IESECBubbleView *_fansClubGuideBubbleView;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) IESECWinAuthorObject *object;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAGradientLayer *fixedLayer;
@property (retain, nonatomic) CAGradientLayer *animationLayer;
@property (retain, nonatomic) IESECUIImageView *livingIcon;
@property (retain, nonatomic) IESECRelationFansClubBubbleView *bubbleView;
@property (retain, nonatomic) UIImageView *goodAuthorImage;
@property (retain, nonatomic) UILabel *fansCountLabel;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UILabel *ratePrefixLabel;
@property (retain, nonatomic) UILabel *rateLabel;
@property (retain, nonatomic) IESECWinAuthorGuideInfoView *guideInfoView;
@property (retain, nonatomic) IESECWinAuthorManageInfoTopView *topManageInfoView;
@property (retain, nonatomic) IESECWinAuthorManageInfoBottomView *bottomManageInfoView;
@property (retain, nonatomic) UIImageView *followBubbleImageView;
@property (retain, nonatomic) IESECRelationMultipleFunctionsFollowView *followView;
@property (retain, nonatomic) IESECBubbleView *fansClubGuideBubbleView;
@property (copy, nonatomic) id /* block */ clickAvatarBlock;
@property (copy, nonatomic) id /* block */ clickGoodAuthorBlock;
@property (copy, nonatomic) id /* block */ clickAuthorNameIconBlock;
@property (copy, nonatomic) id /* block */ clickBubbleBlock;
@property (copy, nonatomic) id /* block */ clickNameLabelAreaBlock;
@property (copy, nonatomic) id /* block */ clickOtherAreaBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLayer;
- (id)livingIcon;
- (void)setLivingIcon:(id)arg0;
- (id)splitView;
- (void)setSplitView:(id)arg0;
- (void)showBubbleView;
- (id)guideInfoView;
- (void)setGuideInfoView:(id)arg0;
- (id)rateLabel;
- (void)setRateLabel:(id)arg0;
- (id)followView;
- (void)setFollowView:(id)arg0;
- (void)updateDataWithObject:(id)arg0;
- (void)transferToLive;
- (void)transferToProfile;
- (void)transferToReputation;
- (id)followBubbleImageView;
- (id)goodAuthorImage;
- (void)clickGoodAuthor;
- (id)fansCountLabel;
- (id)ratePrefixLabel;
- (id)topManageInfoView;
- (id)bottomManageInfoView;
- (id)fixedLayer;
- (void)setFixedLayer:(id)arg0;
- (id)fansClubGuideBubbleView;
- (id /* block */)clickAvatarBlock;
- (id /* block */)clickGoodAuthorBlock;
- (id /* block */)clickAuthorNameIconBlock;
- (id /* block */)clickNameLabelAreaBlock;
- (id /* block */)clickOtherAreaBlock;
- (id /* block */)clickBubbleBlock;
- (id)getFollowView;
- (id)getAvatarView;
- (id)getWindowTitle;
- (void)configSubviewAlpha:(double)arg0;
- (void)showFollowBubbleWithCompletion:(id /* block */)arg0;
- (void)showFansClubRedpackBubbleWithCompletion:(id /* block */)arg0;
- (void)hideFansClubRedpackBubble;
- (void)showFansClubBubbleView;
- (void)clickAuthorNameIcon;
- (void)setClickAvatarBlock:(id /* block */)arg0;
- (void)setClickGoodAuthorBlock:(id /* block */)arg0;
- (void)setClickAuthorNameIconBlock:(id /* block */)arg0;
- (void)setClickBubbleBlock:(id /* block */)arg0;
- (void)setClickNameLabelAreaBlock:(id /* block */)arg0;
- (void)setClickOtherAreaBlock:(id /* block */)arg0;
- (void)setGoodAuthorImage:(id)arg0;
- (void)setFansCountLabel:(id)arg0;
- (void)setRatePrefixLabel:(id)arg0;
- (void)setTopManageInfoView:(id)arg0;
- (void)setBottomManageInfoView:(id)arg0;
- (void)setFollowBubbleImageView:(id)arg0;
- (void)setFansClubGuideBubbleView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)object;
- (id)nameLabel;
- (void)startAnimation;
- (void)setObject:(id)arg0;
- (void)stopAnimation;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)animationLayer;
- (void)setAnimationLayer:(id)arg0;
- (id)bubbleView;
- (void)setBubbleView:(id)arg0;
- (void)tapAction;

@end