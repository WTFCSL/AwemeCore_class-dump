//
//     Generated by private class-dump
//

@class AWEUserModel, NSString, UIImageView, AWEBinding, UILabel, UIView, UIButton;
@protocol AFDCloseFriendsSettingsPanelCellViewDelegate, AWEIMActiveUserInfoService;

@interface AFDCloseFriendsSettingsPanelCell : UICollectionViewCell <AFDCloseFriendsSettingsPanelCellProtocol> {
    id<AFDCloseFriendsSettingsPanelCellViewDelegate> _delegate;
    NSString *_pageIdentifier;
    AWEUserModel *_userModel;
    UIView *_lineView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitle;
    UIButton *_addCloseFriendsButton;
    UIView *_onlineDotView;
    id<AWEIMActiveUserInfoService> _activeInfo;
    AWEBinding *_closeFriendsBinding;
    unsigned long long _roundCorners;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitle;
@property (retain, nonatomic) UIButton *addCloseFriendsButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (retain, nonatomic) AWEBinding *closeFriendsBinding;
@property (nonatomic) unsigned long long roundCorners;
@property (weak, nonatomic) id<AFDCloseFriendsSettingsPanelCellViewDelegate> delegate;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)onlineDotView;
- (void)setActiveInfo:(id)arg0;
- (id)activeInfo;
- (void)setOnlineDotView:(id)arg0;
- (id)addCloseFriendsButton;
- (void)addCornerRadius:(double)arg0 corner:(unsigned long long)arg1;
- (void)setAddCloseFriendsButton:(id)arg0;
- (void)addCloseFriendsButtonAction:(id)arg0;
- (void)p_updateAddCloseFriendsButtonStatusV2:(long long)arg0;
- (void)p_onUserTapped;
- (void)setRoundCorners:(unsigned long long)arg0;
- (id)closeFriendsBinding;
- (void)p_updateActiveUserState;
- (void)setCloseFriendsBinding:(id)arg0;
- (unsigned long long)roundCorners;
- (BOOL)p_canBeRemoved;
- (void)renderModel:(id)arg0 strategy:(id)arg1;
- (void)enableProfilePageTransition:(BOOL)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)delegate;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;
- (void)layoutUI;

@end
