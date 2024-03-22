//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEMusicDetailTopTipsContainerView, AWEMusicDetailBackgroundHeaderPendantView, AWEMusicDetailHeaderDataHelper, AWEMusicDetailLeaderboardEntryView, UIButton, UIView, CAGradientLayer, AWEMusicDetailHeaderLayoutManager, AWEMusicDetailHeaderCountDownLabel, NSString, NSMutableArray, UIStackView, AWEMusicDetailHeaderTitleLabel, AWECollectionButton, AWEMusicDetailHeaderPromotionView, CADisplayLink, UIImage;
@protocol AWEMusicStreamingPlayEventService, MusicService, AWEMusicDetailHeaderViewDelegate;

@interface AWEMusicDetailHeaderView : UIView <AWEMusicDetailLeaderboardEntryViewDelegate, AWEMusicServiceDelegate, CAAnimationDelegate, AWEMusicDetailHeaderViewProtocol> {
    BOOL _hasTitleChanged;
    BOOL _autoPlayedOnAppear;
    BOOL _isLunaVisible;
    BOOL _lunaUgEntryBtnShowedOnce;
    BOOL _miniLunaUgEntryBtnShowedOnce;
    BOOL _canShowLunaUgBtn;
    BOOL _infoTrackerReportedOnce;
    BOOL _fullSongShowOnce;
    id /* block */ _handleShareMusicAction;
    double _headerViewHeight;
    UILabel *_authorNameLabel;
    AWECollectionButton *_collectBtn;
    NSMutableArray *_verifiedUserViewArray;
    id<AWEMusicDetailHeaderViewDelegate> _delegate;
    AWEMusicDetailHeaderLayoutManager *_layoutManager;
    AWEMusicDetailHeaderDataHelper *_dataHelper;
    UIView *_coverContainer;
    UIImageView *_coverImageView;
    UIImage *_downgradingCoverImage;
    CAGradientLayer *_coverMaskLayer;
    UIImageView *_playImageView;
    AWEMusicDetailHeaderCountDownLabel *_countDownLabel;
    UILabel *_userCountLabel;
    AWEMusicDetailLeaderboardEntryView *_leaderboardButton;
    UIImageView *_authorNameArrow;
    UIView *_headerContainer;
    AWEMusicDetailHeaderTitleLabel *_titleLabel;
    UIButton *_editTitleNewButton;
    UIStackView *_musicActionsView;
    UIButton *_completeMusicBtn;
    UIButton *_lunaUgBtn;
    UIButton *_miniLunaBtn;
    UIButton *_inconspicuousLunaUgBtn;
    UIButton *_inconspicuousMiniLunaUgBtn;
    UILabel *_matchedPGCMusicInfoLabel;
    UIImageView *_matchedPGCMusicInfoArrow;
    AWEMusicDetailHeaderPromotionView *_promotionView;
    NSString *_lunaPlaylistID;
    AWEMusicDetailBackgroundHeaderPendantView *_pendentView;
    NSString *_titleName;
    CADisplayLink *_displayLink;
    id<MusicService> _musicService;
    id<AWEMusicStreamingPlayEventService> _playEventService;
    AWEMusicDetailTopTipsContainerView *_topTipsContainer;
    UIImageView *_decorateTagView;
}

@property (retain, nonatomic) AWEMusicDetailHeaderLayoutManager *layoutManager;
@property (weak, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (retain, nonatomic) UIView *coverContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImage *downgradingCoverImage;
@property (retain, nonatomic) CAGradientLayer *coverMaskLayer;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) AWEMusicDetailHeaderCountDownLabel *countDownLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) AWEMusicDetailLeaderboardEntryView *leaderboardButton;
@property (retain, nonatomic) UIImageView *authorNameArrow;
@property (retain, nonatomic) UIView *headerContainer;
@property (retain, nonatomic) AWEMusicDetailHeaderTitleLabel *titleLabel;
@property (retain, nonatomic) UIButton *editTitleNewButton;
@property (nonatomic) BOOL hasTitleChanged;
@property (retain, nonatomic) UIStackView *musicActionsView;
@property (retain, nonatomic) UIButton *completeMusicBtn;
@property (retain, nonatomic) UIButton *lunaUgBtn;
@property (retain, nonatomic) UIButton *miniLunaBtn;
@property (retain, nonatomic) UIButton *inconspicuousLunaUgBtn;
@property (retain, nonatomic) UIButton *inconspicuousMiniLunaUgBtn;
@property (retain, nonatomic) UILabel *matchedPGCMusicInfoLabel;
@property (retain, nonatomic) UIImageView *matchedPGCMusicInfoArrow;
@property (retain, nonatomic) AWEMusicDetailHeaderPromotionView *promotionView;
@property (nonatomic) BOOL autoPlayedOnAppear;
@property (retain, nonatomic) NSString *lunaPlaylistID;
@property (retain, nonatomic) AWEMusicDetailBackgroundHeaderPendantView *pendentView;
@property (copy, nonatomic) NSString *titleName;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) id<AWEMusicStreamingPlayEventService> playEventService;
@property (nonatomic) BOOL isLunaVisible;
@property (nonatomic) BOOL lunaUgEntryBtnShowedOnce;
@property (nonatomic) BOOL miniLunaUgEntryBtnShowedOnce;
@property (nonatomic) BOOL canShowLunaUgBtn;
@property (retain, nonatomic) AWEMusicDetailTopTipsContainerView *topTipsContainer;
@property (nonatomic) BOOL infoTrackerReportedOnce;
@property (nonatomic) BOOL fullSongShowOnce;
@property (retain, nonatomic) UIImageView *decorateTagView;
@property (nonatomic) double headerViewHeight;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) AWECollectionButton *collectBtn;
@property (retain, nonatomic) NSMutableArray *verifiedUserViewArray;
@property (weak, nonatomic) id<AWEMusicDetailHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWECollectionButton *collectToLunaBtn;
@property (copy, nonatomic) id /* block */ handleShareMusicAction;

+ (BOOL)musicAppAvailable;

- (id)searchParams;
- (void)awe_themeDidChange:(long long)arg0;
- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)musicServiceReadyToPlay:(id)arg0;
- (double)currentPlayTime;
- (id)trackerParams;
- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (void)addNotification;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setTitleName:(id)arg0;
- (id)titleName;
- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (id)dataHelper;
- (void)setDataHelper:(id)arg0;
- (void)pauseWithFadeOutDuration:(double)arg0 completion:(id /* block */)arg1;
- (void)pauseAudio;
- (id)userCountLabel;
- (void)setUserCountLabel:(id)arg0;
- (id)fromGroupID;
- (id)enterFromPageString;
- (id)coverContainer;
- (id)authorNameArrow;
- (double)titleLabelHeight;
- (double)rightLabelsHeight;
- (id)coverMaskLayer;
- (double)headerContainerHeight;
- (void)setCoverContainer:(id)arg0;
- (id)downgradingCoverImage;
- (void)setDowngradingCoverImage:(id)arg0;
- (void)setCoverMaskLayer:(id)arg0;
- (void)setAuthorNameArrow:(id)arg0;
- (BOOL)hasChallengeGuideView;
- (long long)getCurrentMusicianFollowStatus;
- (id)getCurrentMusicianModel;
- (id)verifiedUserViewArray;
- (void)jumpToMatchedPGCMusicDetailPage;
- (id /* block */)handleShareMusicAction;
- (void)setHandleShareMusicAction:(id /* block */)arg0;
- (id)dataContext;
- (id)promoTickerIconType;
- (double)favoriteHintBubbleYOffset;
- (void)weakBindDataHelper:(id)arg0;
- (void)pausePGCAudio;
- (long long)numberOfVerifiedUser;
- (void)updateWithModel:(id)arg0 newTitleName:(id)arg1;
- (void)updateWhenDataContextChanged:(id)arg0;
- (void)updateDummyModel:(id)arg0;
- (id)collectBtn;
- (void)didTapOnLeaderboardEntryView:(id)arg0;
- (void)jumpToAuthorPage;
- (long long)musicDiversionCode;
- (BOOL)isAutoPlayMusic;
- (BOOL)shouldShowMatchedPGCInfoView;
- (BOOL)hasLeaderboardInfo;
- (BOOL)shouldShowLunaUg;
- (id)leaderboardInfo;
- (id)dummyMusicModel;
- (BOOL)shouldShowSimilarTips;
- (BOOL)completeMusicEnvironmentCheckPassed:(BOOL)arg0;
- (id)p_colorWithLightColor:(id)arg0 darkColor:(id)arg1;
- (id)matchedPGCMusicInfoArrow;
- (id)matchedPGCMusicInfoLabel;
- (void)p_updatePGCInfo;
- (double)p_widthWithString:(id)arg0 font:(id)arg1;
- (double)p_widthWithLabelString:(id)arg0;
- (id)p_createMatchedPGCLabel;
- (id)arrowImgeView;
- (void)setMatchedPGCMusicInfoLabel:(id)arg0;
- (void)setMatchedPGCMusicInfoArrow:(id)arg0;
- (id)editTitleNewButton;
- (void)onDisplayRefresh;
- (void)editTitleClick;
- (void)setEditTitleNewButton:(id)arg0;
- (id)topTipsContainer;
- (double)headerContainerTopMargin;
- (id)decorateTagView;
- (id)leaderboardButton;
- (id)promotionView;
- (id)musicActionsView;
- (void)setPendentView:(id)arg0;
- (id)pendentView;
- (void)buildCollectButton;
- (id)musicService;
- (void)albumPlayClick:(id)arg0;
- (void)receviceNotification:(id)arg0;
- (void)setMusicService:(id)arg0;
- (BOOL)hasTitleChanged;
- (void)setHasTitleChanged:(BOOL)arg0;
- (void)setLunaPlaylistID:(id)arg0;
- (BOOL)isLunaVisible;
- (void)setIsLunaVisible:(BOOL)arg0;
- (void)setVerifiedUserViewArray:(id)arg0;
- (void)p_updateTopTipsView;
- (void)p_updateHeaderView;
- (void)p_updateCountDownLabel;
- (void)p_updateMusicServiceWithModel:(id)arg0;
- (void)autoPlayMusicIfNeeded;
- (void)p_trackReceivedHeaderResponse;
- (BOOL)canShowPromotionView;
- (void)p_trackPromoteTickerShow;
- (void)p_updateDummyHeaderView;
- (id)playEventService;
- (void)_refreshMusicServiceStatus:(long long)arg0;
- (BOOL)autoPlayedOnAppear;
- (void)setAutoPlayedOnAppear:(BOOL)arg0;
- (void)showVolumeBalanceInfoWith:(id)arg0;
- (void)p_trackUnavailableWithStatus:(id)arg0;
- (void)switchPlayStatus:(BOOL)arg0;
- (void)p_updateCoverContainerAccessibilityContent;
- (void)p_updateColorWithTheme:(long long)arg0;
- (id)p_notCollectedButtonImage;
- (BOOL)infoTrackerReportedOnce;
- (void)setInfoTrackerReportedOnce:(BOOL)arg0;
- (void)p_updateMusicActionsView:(BOOL)arg0;
- (void)p_updateConstraint;
- (void)p_updateCover;
- (void)p_updateUseCount;
- (void)p_updateTitle;
- (void)p_updateAuthorLabel;
- (void)updateLeaderboardConstraints;
- (void)p_updateMusicPGCInfoView;
- (void)p_updatePromotionView;
- (void)p_checkLunaSongFaultStatus;
- (void)p_arrangeInconspicuousMiniLunaBtn:(BOOL)arg0;
- (void)p_arrangeMiniLunaBtn:(BOOL)arg0;
- (void)p_arrangeInconspicuousLunaBtn:(BOOL)arg0;
- (void)p_arrangeLunaBtn:(BOOL)arg0;
- (void)p_arrangeCompleteMusicBtnWithDummy:(BOOL)arg0;
- (id)lunaUgBtn;
- (BOOL)lunaUgEntryBtnShowedOnce;
- (void)setLunaUgEntryBtnShowedOnce:(BOOL)arg0;
- (id)inconspicuousLunaUgBtn;
- (id)completeMusicBtn;
- (BOOL)fullSongShowOnce;
- (void)setFullSongShowOnce:(BOOL)arg0;
- (id)miniLunaBtn;
- (BOOL)miniLunaUgEntryBtnShowedOnce;
- (void)setMiniLunaUgEntryBtnShowedOnce:(BOOL)arg0;
- (id)inconspicuousMiniLunaUgBtn;
- (void)p_updateCompleteBtnColorWithTheme:(long long)arg0;
- (void)p_updateCollectBtnColorWithTheme:(long long)arg0;
- (void)p_updateInconspicuousLunaUgBtnColorWithTheme:(long long)arg0;
- (void)p_updateLunaBtnColorWithTheme:(long long)arg0;
- (id)p_lunaButtonImage;
- (id)p_inconspicuousLunaButtonImage;
- (id)defaultGuideToastDic;
- (id)plainButtonWithImage:(id)arg0 text:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3;
- (void)completeMusicBtnAction;
- (id)ugButtonTitle;
- (void)lunaUgBtnAction;
- (void)miniLunaBtnAction;
- (void)setCollectBtn:(id)arg0;
- (void)updateCollectionBtnStyle;
- (id)p_songIdForLunaUg;
- (id)p_lunaPopUpCoverURL;
- (double)userCountWidth;
- (id)guideToast;
- (id)lunaCollectedToast;
- (void)setLeaderboardButton:(id)arg0;
- (void)setMusicActionsView:(id)arg0;
- (void)setCompleteMusicBtn:(id)arg0;
- (void)setLunaUgBtn:(id)arg0;
- (void)setMiniLunaBtn:(id)arg0;
- (void)setInconspicuousLunaUgBtn:(id)arg0;
- (void)setInconspicuousMiniLunaUgBtn:(id)arg0;
- (void)setPromotionView:(id)arg0;
- (id)lunaPlaylistID;
- (void)setPlayEventService:(id)arg0;
- (BOOL)canShowLunaUgBtn;
- (void)setCanShowLunaUgBtn:(BOOL)arg0;
- (void)setTopTipsContainer:(id)arg0;
- (void)setDecorateTagView:(id)arg0;
- (id)layoutManager;
- (void)setDisplayLink:(id)arg0;
- (id)init;
- (id)linkTextAttributes;
- (void).cxx_destruct;
- (id)processID;
- (void)setHeaderViewHeight:(double)arg0;
- (id)model;
- (id)titleLabel;
- (double)headerViewHeight;
- (void)setup;
- (id)delegate;
- (id)displayLink;
- (void)_startAnimation;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)_stopAnimation;
- (void)setLayoutManager:(id)arg0;
- (id)headerContainer;
- (void)setHeaderContainer:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;
- (void)updateTitle:(id)arg0;

@end
