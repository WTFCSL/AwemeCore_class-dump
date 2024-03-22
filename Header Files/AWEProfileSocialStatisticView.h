//
//     Generated by private class-dump
//

@class MASConstraint, UILabel, NSNumber, UIView;

@interface AWEProfileSocialStatisticView : UIView {
    BOOL _shouldLimitFansCount;
    BOOL _canShowFriendsLabel;
    BOOL _isCurrentUser;
    BOOL _isCompanyUser;
    BOOL _isTeenModeOn;
    BOOL _hasUserMood;
    id /* block */ _followClickedBlock;
    id /* block */ _fansClickedBlock;
    id /* block */ _praiseClickedBlock;
    id /* block */ _friendClickedBlock;
    id /* block */ _blankClickedBlock;
    UILabel *_followLabel;
    UILabel *_fansLabel;
    UILabel *_praiseLabel;
    UILabel *_friendLabel;
    UILabel *_followPrefixBtn;
    UILabel *_fansPrefixBtn;
    UILabel *_praisePrefixBtn;
    UILabel *_friendPrefixBtn;
    UIView *_followContainerView;
    UIView *_fansContainerView;
    UIView *_praiseContainerView;
    UIView *_friendContainerView;
    UIView *_followAccessView;
    UIView *_fansAccessView;
    UIView *_praiseAccessView;
    UIView *_friendAccessView;
    NSNumber *_followingCount;
    NSNumber *_fansCount;
    NSNumber *_praiseCount;
    NSNumber *_friendCount;
    double _labelFont;
    double _buttonFont;
    double _gap;
    MASConstraint *_otherLabelBottomConstraint;
    UIView *_leftSeparateView;
    UIView *_rightSeparateView;
}

@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) UILabel *praiseLabel;
@property (retain, nonatomic) UILabel *friendLabel;
@property (retain, nonatomic) UILabel *followPrefixBtn;
@property (retain, nonatomic) UILabel *fansPrefixBtn;
@property (retain, nonatomic) UILabel *praisePrefixBtn;
@property (retain, nonatomic) UILabel *friendPrefixBtn;
@property (retain, nonatomic) UIView *followContainerView;
@property (retain, nonatomic) UIView *fansContainerView;
@property (retain, nonatomic) UIView *praiseContainerView;
@property (retain, nonatomic) UIView *friendContainerView;
@property (retain, nonatomic) UIView *followAccessView;
@property (retain, nonatomic) UIView *fansAccessView;
@property (retain, nonatomic) UIView *praiseAccessView;
@property (retain, nonatomic) UIView *friendAccessView;
@property (retain, nonatomic) NSNumber *followingCount;
@property (retain, nonatomic) NSNumber *fansCount;
@property (retain, nonatomic) NSNumber *praiseCount;
@property (retain, nonatomic) NSNumber *friendCount;
@property (nonatomic) BOOL canShowFriendsLabel;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isCompanyUser;
@property (nonatomic) BOOL isTeenModeOn;
@property (nonatomic) BOOL hasUserMood;
@property (nonatomic) double labelFont;
@property (nonatomic) double buttonFont;
@property (nonatomic) double gap;
@property (retain, nonatomic) MASConstraint *otherLabelBottomConstraint;
@property (retain, nonatomic) UIView *leftSeparateView;
@property (retain, nonatomic) UIView *rightSeparateView;
@property (copy, nonatomic) id /* block */ followClickedBlock;
@property (copy, nonatomic) id /* block */ fansClickedBlock;
@property (copy, nonatomic) id /* block */ praiseClickedBlock;
@property (copy, nonatomic) id /* block */ friendClickedBlock;
@property (copy, nonatomic) id /* block */ blankClickedBlock;
@property (nonatomic) BOOL shouldLimitFansCount;

- (id)followingCount;
- (void)setFansCount:(id)arg0;
- (id /* block */)followClickedBlock;
- (void)setFollowClickedBlock:(id /* block */)arg0;
- (id)fansCount;
- (id)praiseLabel;
- (id)fansLabel;
- (void)setPraiseLabel:(id)arg0;
- (void)setFansLabel:(id)arg0;
- (void)setFollowingCount:(id)arg0;
- (void)p_setUpUI;
- (id)followLabel;
- (void)setFollowLabel:(id)arg0;
- (void)setFriendLabel:(id)arg0;
- (void)p_updateSocialStatisticContent:(BOOL)arg0;
- (void)updateFollowBtnTitle:(id)arg0;
- (void)setFansClickedBlock:(id /* block */)arg0;
- (void)setFriendClickedBlock:(id /* block */)arg0;
- (void)setPraiseClickedBlock:(id /* block */)arg0;
- (void)setBlankClickedBlock:(id /* block */)arg0;
- (void)setShouldLimitFansCount:(BOOL)arg0;
- (void)setPraiseCount:(id)arg0;
- (void)setCanShowFriendsLabel:(BOOL)arg0;
- (void)setIsCompanyUser:(BOOL)arg0;
- (void)updateAllLabelTextColor:(BOOL)arg0;
- (void)updateFansLabel:(id)arg0 isLoaded:(BOOL)arg1;
- (void)updateFollowLabel:(id)arg0 isLoaded:(BOOL)arg1;
- (void)updateFriendsLabel:(id)arg0 isLoaded:(BOOL)arg1;
- (void)updatePraiseLabel:(id)arg0 isLoaded:(BOOL)arg1;
- (void)handleTapGestureRecognizerWithLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)initFontSize;
- (id)friendLabel;
- (id)praisePrefixBtn;
- (id)followPrefixBtn;
- (id)fansPrefixBtn;
- (id)friendPrefixBtn;
- (id)praiseAccessView;
- (id)friendAccessView;
- (id)followAccessView;
- (id)fansAccessView;
- (BOOL)canShowFriendsLabel;
- (id)praiseContainerView;
- (id)friendContainerView;
- (id)followContainerView;
- (id)fansContainerView;
- (double)modernBigFontScale;
- (void)setFontFitScreen;
- (BOOL)shouldLimitFansCount;
- (id)limitCountFansTextWithFontSize:(double)arg0;
- (id)praiseCount;
- (id)newPraiseLabel;
- (id)otherLabelBottomConstraint;
- (BOOL)isCompanyUser;
- (void)calibrateFontSizeAndGapIfNeeded;
- (BOOL)shouldAutoSuitFont;
- (void)setIsTeenModeOn:(BOOL)arg0;
- (void)setFontSizeWithNumberSize:(double)arg0 btnFontSize:(double)arg1;
- (id /* block */)fansClickedBlock;
- (id /* block */)praiseClickedBlock;
- (id /* block */)friendClickedBlock;
- (id /* block */)blankClickedBlock;
- (BOOL)canAffordLabelsWithFontSize:(double)arg0 btnFontSize:(double)arg1;
- (void)changeLabelInTeenMode:(BOOL)arg0;
- (void)updateFollowLabelTitle:(id)arg0;
- (id)leftSeparateView;
- (id)rightSeparateView;
- (BOOL)compareWidthWithLabel:(id)arg0;
- (void)setFollowPrefixBtn:(id)arg0;
- (void)setFansPrefixBtn:(id)arg0;
- (void)setPraisePrefixBtn:(id)arg0;
- (void)setFriendPrefixBtn:(id)arg0;
- (void)setFollowContainerView:(id)arg0;
- (void)setFansContainerView:(id)arg0;
- (void)setPraiseContainerView:(id)arg0;
- (void)setFriendContainerView:(id)arg0;
- (void)setFollowAccessView:(id)arg0;
- (void)setFansAccessView:(id)arg0;
- (void)setPraiseAccessView:(id)arg0;
- (void)setFriendAccessView:(id)arg0;
- (BOOL)isTeenModeOn;
- (BOOL)hasUserMood;
- (void)setHasUserMood:(BOOL)arg0;
- (void)setOtherLabelBottomConstraint:(id)arg0;
- (void)setLeftSeparateView:(id)arg0;
- (void)setRightSeparateView:(id)arg0;
- (double)buttonFont;
- (void).cxx_destruct;
- (void)setLabelFont:(double)arg0;
- (void)updateWithConfig:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)labelFont;
- (void)setGap:(double)arg0;
- (void)dealloc;
- (double)gap;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)updateUI;
- (id)friendCount;
- (void)setFriendCount:(id)arg0;
- (void)setButtonFont:(double)arg0;
- (void)handleTapGestureRecognizer:(id)arg0;

@end