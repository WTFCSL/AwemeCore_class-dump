//
//     Generated by private class-dump
//

@class NSDate, UIView, IESLiveGradientView, NSString, UIImageView, IESLiveAnimatedImageView, IESLiveFeedBigNoodleLabel, UILabel;
@protocol IESLivePlayerProtocol, HTSLiveFeedItem, IESLiveWebPPlayer, HTSLiveFeedCellDelegate;

@interface HTSLiveFeedCompactCollectionViewCell : UICollectionViewCell <IESLivePlayerControllerDelegate, HTSLiveFeedCellUpdater, IESLiveFeedDrawerPreviewCellProtocol> {
    BOOL _isFeedDrawerMode;
    BOOL _isFromRecommand;
    BOOL _hadSetupUI;
    BOOL _isLandscape;
    BOOL _isPreviewing;
    id<HTSLiveFeedCellDelegate> _delegate;
    id<HTSLiveFeedItem> _item;
    unsigned long long _cellStyle;
    UIView *_bgContainerView;
    UIImageView *_coverImageView;
    UIView *_coverContainerView;
    IESLiveGradientView *_gradientView;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    IESLiveFeedBigNoodleLabel *_watchCountLabel;
    UIImageView *_watchIconImageView;
    IESLiveAnimatedImageView *_tagView;
    UIImageView *_redPacketIcon;
    UILabel *_avatarNameLabel;
    UIImageView *_avatarImageView;
    UIImageView *_verifyImageView;
    UIImageView *_operationTag;
    UIImageView *_contentTag;
    id<IESLivePlayerProtocol> _player;
    NSDate *_startPreviewDate;
    UIImageView<IESLiveWebPPlayer> *_coverDynamicMask;
}

@property (retain, nonatomic) UIView *bgContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) IESLiveFeedBigNoodleLabel *watchCountLabel;
@property (retain, nonatomic) UIImageView *watchIconImageView;
@property (retain, nonatomic) IESLiveAnimatedImageView *tagView;
@property (retain, nonatomic) UIImageView *redPacketIcon;
@property (nonatomic) BOOL hadSetupUI;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) UILabel *avatarNameLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) UIImageView *operationTag;
@property (retain, nonatomic) UIImageView *contentTag;
@property (nonatomic) BOOL isPreviewing;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) NSDate *startPreviewDate;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *coverDynamicMask;
@property (retain, nonatomic) id<HTSLiveFeedItem> item;
@property (nonatomic) BOOL isFromRecommand;
@property (nonatomic) unsigned long long cellStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFeedDrawerMode;
@property (weak, nonatomic) id<HTSLiveFeedCellDelegate> delegate;

- (void)player:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)player:(id)arg0 didReceiveMetaInfo:(id)arg1 processed:(BOOL)arg2;
- (void)didSetAttachingDIContext;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)startPreviewDate;
- (void)setStartPreviewDate:(id)arg0;
- (void)makeConstraints;
- (id)verifyImageView;
- (void)setVerifyImageView:(id)arg0;
- (id)bgContainerView;
- (void)setBgContainerView:(id)arg0;
- (void)p_updateConstraints;
- (id)coverContainerView;
- (void)setCoverContainerView:(id)arg0;
- (void)setupNewUI;
- (id)redPacketIcon;
- (BOOL)canPreview;
- (id)avatarNameLabel;
- (void)setAvatarNameLabel:(id)arg0;
- (void)setupCommonUI;
- (BOOL)hadSetupUI;
- (void)setHadSetupUI:(BOOL)arg0;
- (BOOL)useNewCoverStyle;
- (void)setupCoverUI;
- (id)watchCountLabel;
- (id)operationTag;
- (BOOL)drawerCoverStyle_convertTitleAndAvatarName;
- (void)setCoverDynamicMask:(id)arg0;
- (id)coverDynamicMask;
- (BOOL)drawerCoverStyle_showWatchHotIcon;
- (void)setWatchCountLabel:(id)arg0;
- (id)watchIconImageView;
- (void)setWatchIconImageView:(id)arg0;
- (void)setRedPacketIcon:(id)arg0;
- (void)setOperationTag:(id)arg0;
- (BOOL)isFeedDrawerMode;
- (void)makeNewUIConstraints;
- (void)makeCoverUIConstraints;
- (BOOL)drawerCoverStyle_hideAvatarImageView;
- (BOOL)shouldShowEnterpriseVerify;
- (BOOL)drawerCoverStyle_hideAvatarName;
- (void)updateEnterpriseVerifyImageValue;
- (void)coverLoadCompleted:(id)arg0;
- (void)feedCoverImageStartLoad:(double)arg0 endTime:(double)arg1;
- (void)realStopPreview;
- (void)trackLivePreviewDuratin;
- (long long)liveDrawerCoverStyle;
- (void)update:(id)arg0 isFeedDrawer:(BOOL)arg1;
- (void)setIsFeedDrawerMode:(BOOL)arg0;
- (void)startPreviewWithPlayer:(id)arg0 withDuration:(double)arg1;
- (void)updateWithRoomModel:(id)arg0;
- (BOOL)isFromRecommand;
- (void)setIsFromRecommand:(BOOL)arg0;
- (id)accessibilityLabel;
- (id)item;
- (BOOL)isPreviewing;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (double)bottomPadding;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (void)setContentTag:(id)arg0;
- (void)setIsLandscape:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (BOOL)isPreview;
- (id)contentTag;
- (double)leadingPadding;
- (id)nameLabel;
- (unsigned long long)cellStyle;
- (BOOL)isLandscape;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (void)setItem:(id)arg0;
- (id)player;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (void)setCellStyle:(unsigned long long)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg0;
- (void)stopPreview;
- (void)refreshLayout;
- (void)setIsPreviewing:(BOOL)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end