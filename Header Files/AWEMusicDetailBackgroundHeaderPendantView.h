//
//     Generated by private class-dump
//

@class AWEMusicModel, UIView, AWEMusicDetailResponse;
@protocol AWEMusicDetailMusicHeaderPendantViewProtocol, AWEVerifiedUserViewProtocol;

@interface AWEMusicDetailBackgroundHeaderPendantView : UIStackView {
    BOOL _isNewStyleForInspirationHeaderView;
    id /* block */ _pauseMusicBlock;
    id /* block */ _handleShareMusicAction;
    AWEMusicDetailResponse *_detail;
    AWEMusicModel *_model;
    UIView<AWEMusicDetailMusicHeaderPendantViewProtocol> *_challengeGuideView;
    UIView<AWEMusicDetailMusicHeaderPendantViewProtocol> *_taskLiteEntranceView;
    UIView<AWEVerifiedUserViewProtocol> *_soleVerifiedUserView;
    UIView<AWEVerifiedUserViewProtocol> *_verifiedUserViewUnderFollowShoot;
}

@property (retain, nonatomic) AWEMusicDetailResponse *detail;
@property (retain, nonatomic) AWEMusicModel *model;
@property (retain, nonatomic) UIView<AWEMusicDetailMusicHeaderPendantViewProtocol> *challengeGuideView;
@property (retain, nonatomic) UIView<AWEMusicDetailMusicHeaderPendantViewProtocol> *taskLiteEntranceView;
@property (retain, nonatomic) UIView<AWEVerifiedUserViewProtocol> *soleVerifiedUserView;
@property (retain, nonatomic) UIView<AWEVerifiedUserViewProtocol> *verifiedUserViewUnderFollowShoot;
@property (nonatomic) BOOL isNewStyleForInspirationHeaderView;
@property (copy, nonatomic) id /* block */ pauseMusicBlock;
@property (copy, nonatomic) id /* block */ handleShareMusicAction;

+ (id)defaultVerifiedViewLayoutManger;
+ (id)followShootCombinedVerifiedViewLayoutManger;

- (void)awe_themeDidChange:(long long)arg0;
- (id /* block */)pauseMusicBlock;
- (void)setPauseMusicBlock:(id /* block */)arg0;
- (void)setTaskLiteEntranceView:(id)arg0;
- (id)taskLiteEntranceView;
- (void)setIsNewStyleForInspirationHeaderView:(BOOL)arg0;
- (BOOL)hasChallengeGuideView;
- (BOOL)shouldShowVerifiedUserView;
- (BOOL)shouldShowTaskLite;
- (void)setChallengeGuideView:(id)arg0;
- (void)setSoleVerifiedUserView:(id)arg0;
- (void)setVerifiedUserViewUnderFollowShoot:(id)arg0;
- (id)challengeGuideView;
- (BOOL)isNewStyleForInspirationHeaderView;
- (id)verifiedUserViewUnderFollowShoot;
- (id)soleVerifiedUserView;
- (long long)getCurrentMusicianFollowStatus;
- (id)getCurrentMusicianModel;
- (id)initWithIsNewStyleForInspirationHeaderView:(BOOL)arg0;
- (void)updateWithMusicModel:(id)arg0 response:(id)arg1;
- (BOOL)isMultipleCell;
- (id)verifiedUserViewArray;
- (void)jumpToMatchedPGCMusicDetailPage;
- (BOOL)shouldShowPendentView;
- (id /* block */)handleShareMusicAction;
- (void)setHandleShareMusicAction:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)model;
- (id)detail;
- (void)layoutSubviews;
- (void)setupViews;

@end