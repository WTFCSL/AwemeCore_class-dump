//
//     Generated by private class-dump
//

@class UIView, AWEBillboardLabel, AWEDiscoverDAccessibilityLabel, AWEChallengeStarBillBoardLabel, UIImageView, AWECollectionButton, AWEUserCountDescView, CAGradientLayer, YYLabel, AWEChallengeModel, UIButton;

@interface AWEChallengeDetailHeaderBasicInfoContainerView : UIView {
    BOOL _isHalfScreen;
    BOOL _isNewLayoutUI;
    BOOL _isCommonChallenge;
    BOOL _adjustOnce;
    AWEDiscoverDAccessibilityLabel *_challengeNameLabel;
    AWECollectionButton *_collectionButton;
    UIImageView *_challengeImageView;
    YYLabel *_authorNameNewLabel;
    UIButton *_transferButton;
    AWEBillboardLabel *_hotHashtagLabel;
    AWEChallengeStarBillBoardLabel *_starBillBoardLabel;
    YYLabel *_tagLabel;
    YYLabel *_hotAttachmentLabel;
    CAGradientLayer *_tagBackgroundLayer;
    UIImageView *_nameLabelArrowImageView;
    UIView *_loadingImageView;
    UIView *_loadingNameLabel;
    UIView *_loadingDescView;
    AWEUserCountDescView *_userCountView;
    AWEChallengeModel *_model;
}

@property (retain, nonatomic) AWEDiscoverDAccessibilityLabel *challengeNameLabel;
@property (retain, nonatomic) UIImageView *challengeImageView;
@property (retain, nonatomic) AWEBillboardLabel *hotHashtagLabel;
@property (retain, nonatomic) AWEChallengeStarBillBoardLabel *starBillBoardLabel;
@property (retain, nonatomic) YYLabel *authorNameNewLabel;
@property (retain, nonatomic) YYLabel *tagLabel;
@property (retain, nonatomic) YYLabel *hotAttachmentLabel;
@property (retain, nonatomic) CAGradientLayer *tagBackgroundLayer;
@property (retain, nonatomic) UIImageView *nameLabelArrowImageView;
@property (retain, nonatomic) UIView *loadingImageView;
@property (retain, nonatomic) UIView *loadingNameLabel;
@property (retain, nonatomic) UIView *loadingDescView;
@property (retain, nonatomic) AWEUserCountDescView *userCountView;
@property (retain, nonatomic) AWEChallengeModel *model;
@property (nonatomic) BOOL adjustOnce;
@property (retain, nonatomic) AWECollectionButton *collectionButton;
@property (retain, nonatomic) UIButton *transferButton;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) BOOL isNewLayoutUI;
@property (nonatomic) BOOL isCommonChallenge;

- (void)awe_themeReload;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg0;
- (void)hideLoading;
- (void)setCollectionButton:(id)arg0;
- (id)collectionButton;
- (id)rankAttributedTitle;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg0;
- (BOOL)isNewLayoutUI;
- (BOOL)shouldUseCommerceNewStyle;
- (void)setIsNewLayoutUI:(BOOL)arg0;
- (BOOL)isEnhanceFavoriteButton;
- (void)setIsCommonChallenge:(BOOL)arg0;
- (BOOL)isCommonChallenge;
- (void)updateChallengeNameLabelWithName:(id)arg0;
- (BOOL)shouldShowAuthorName;
- (void)updateAuthorNameNewLabel;
- (id)userCountView;
- (void)setupCommerceUI;
- (void)updateChallengeImageWithProfileURL:(id)arg0;
- (id)challengeImageView;
- (id)challengeNameLabel;
- (id)authorNameNewLabel;
- (BOOL)isNewLayoutV1;
- (void)layoutUserCountView;
- (void)layoutButtonsWithModel:(id)arg0 underView:(id)arg1 sendTrackEvent:(BOOL)arg2;
- (void)layoutFavoriteButton;
- (id)transferButton;
- (void)layoutButtonsWhenHasTransferButtonUnderView:(id)arg0;
- (id)hotAttachmentLabel;
- (BOOL)isStarChallengeBillboard;
- (BOOL)isNormalChallengeBillboard;
- (id)starBillBoardLabel;
- (id)hotHashtagLabel;
- (BOOL)shouldAddHotTagNewLineWithTitle:(id)arg0 attachmentWidth:(double)arg1;
- (double)challengeNamePreferredMaxLayoutWidth;
- (BOOL)hasCommerceUserData;
- (BOOL)hasVSUserData;
- (BOOL)hasStarUserData;
- (id)nameLabelArrowImageView;
- (void)setNameLabelArrowImageView:(id)arg0;
- (id)loadingNameLabel;
- (id)loadingDescView;
- (void)updateTagLabelWithName:(id)arg0;
- (void)goToHotSearch;
- (id)tagBackgroundLayer;
- (void)setChallengeNameLabel:(id)arg0;
- (void)setChallengeImageView:(id)arg0;
- (void)setAuthorNameNewLabel:(id)arg0;
- (void)setTransferButton:(id)arg0;
- (void)setHotHashtagLabel:(id)arg0;
- (void)setStarBillBoardLabel:(id)arg0;
- (void)setHotAttachmentLabel:(id)arg0;
- (void)setTagBackgroundLayer:(id)arg0;
- (void)setLoadingNameLabel:(id)arg0;
- (void)setLoadingDescView:(id)arg0;
- (void)setUserCountView:(id)arg0;
- (BOOL)adjustOnce;
- (void)setAdjustOnce:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;
- (void)showLoading;

@end