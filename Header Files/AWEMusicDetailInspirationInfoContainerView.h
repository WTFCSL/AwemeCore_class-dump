//
//     Generated by private class-dump
//

@class AWEMusicDetailHeaderDataHelper, UIView, AWEMusicDetailHeaderLayoutInspirationLayoutManager, NSString, UIImageView, UIButton, AWEMusicDetailHeaderTitleLabel, UILabel, AWEMusicDetailLeaderboardEntryView;
@protocol AWEMusicDetailInfoContainerViewDelegate;

@interface AWEMusicDetailInspirationInfoContainerView : UIView <AWEMusicDetailLeaderboardEntryViewDelegate> {
    UILabel *_authorNameLabel;
    NSString *_titleName;
    id<AWEMusicDetailInfoContainerViewDelegate> _delegate;
    AWEMusicDetailHeaderDataHelper *_dataHelper;
    AWEMusicDetailHeaderLayoutInspirationLayoutManager *_layoutManager;
    UILabel *_userCountLabel;
    UIImageView *_authorNameArrow;
    AWEMusicDetailLeaderboardEntryView *_leaderboardButton;
    AWEMusicDetailHeaderTitleLabel *_titleLabel;
    UIButton *_editTitleNewButton;
    UIView *_splitView;
    UIView *_titleArrowIconContainerView;
    UIImageView *_titleArrowIcon;
    UIImageView *_headerContainerArrowIcon;
    long long _headerType;
    UIImageView *_decorateTagView;
}

@property (weak, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (retain, nonatomic) AWEMusicDetailHeaderLayoutInspirationLayoutManager *layoutManager;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UIImageView *authorNameArrow;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) AWEMusicDetailLeaderboardEntryView *leaderboardButton;
@property (retain, nonatomic) AWEMusicDetailHeaderTitleLabel *titleLabel;
@property (retain, nonatomic) UIButton *editTitleNewButton;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UIView *titleArrowIconContainerView;
@property (retain, nonatomic) UIImageView *titleArrowIcon;
@property (retain, nonatomic) UIImageView *headerContainerArrowIcon;
@property (nonatomic) long long headerType;
@property (retain, nonatomic) UIImageView *decorateTagView;
@property (copy, nonatomic) NSString *titleName;
@property (weak, nonatomic) id<AWEMusicDetailInfoContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setTitleName:(id)arg0;
- (id)titleName;
- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (id)dataHelper;
- (void)setDataHelper:(id)arg0;
- (id)userCountLabel;
- (void)setUserCountLabel:(id)arg0;
- (id)authorNameArrow;
- (double)titleLabelHeight;
- (double)rightLabelsHeight;
- (void)setAuthorNameArrow:(id)arg0;
- (void)weakBindDataHelper:(id)arg0;
- (void)didTapOnLeaderboardEntryView:(id)arg0;
- (id)arrowImgeView;
- (id)initWithLayoutManager:(id)arg0;
- (id)editTitleNewButton;
- (id)splitView;
- (void)editTitleClick;
- (void)updateDummyHeaderView;
- (void)setSplitView:(id)arg0;
- (void)setEditTitleNewButton:(id)arg0;
- (id)decorateTagView;
- (id)leaderboardButton;
- (void)p_updateUseCount;
- (void)p_updateTitle;
- (void)p_updateAuthorLabel;
- (double)userCountWidth;
- (void)setLeaderboardButton:(id)arg0;
- (void)setDecorateTagView:(id)arg0;
- (void)updateDetailInfoView;
- (void)updateDetailInfoViewConstraint;
- (void)didTapAuthorLabel;
- (id)headerContainerArrowIcon;
- (void)p_configureLunaSongTitle:(id)arg0 hasArrow:(BOOL)arg1;
- (id)p_combineUnEditedTitleWithOriginTitle:(id)arg0;
- (void)p_updateTitleLabelInfoWithTitle:(id)arg0 isOriginal:(BOOL)arg1;
- (BOOL)p_isOrignalAbove;
- (void)p_updateSplitView;
- (void)p_updateLeaderboardInfo;
- (void)didTapWholeInfoArea;
- (id)titleArrowIconContainerView;
- (id)titleArrowIcon;
- (void)didTapTitleArrow;
- (void)didTapTitle;
- (void)setTitleArrowIconContainerView:(id)arg0;
- (void)setTitleArrowIcon:(id)arg0;
- (void)setHeaderContainerArrowIcon:(id)arg0;
- (id)layoutManager;
- (id)linkTextAttributes;
- (void)setHeaderType:(long long)arg0;
- (void).cxx_destruct;
- (long long)headerType;
- (id)titleLabel;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setLayoutManager:(id)arg0;
- (void)setupUI;
- (void)updateTitle:(id)arg0;

@end