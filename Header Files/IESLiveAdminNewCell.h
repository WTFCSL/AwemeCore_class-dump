//
//     Generated by private class-dump
//

@class HTSLiveUser, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveAdminstratorListNewCellDelegate;

@interface IESLiveAdminNewCell : UITableViewCell {
    BOOL _isWhite;
    id<IESLiveAdminstratorListNewCellDelegate> _delegate;
    long long _index;
    UIView *_baseView;
    UIButton *_settingBtn;
    UIImageView *_backgroundImageView;
    UIImageView *_lowerDividerImageView;
    UIImageView *_avatarImage;
    UIImageView *_pendantImage;
    UIImageView *_honorView;
    UILabel *_nameLabel;
    HTSLiveUser *_userModel;
    double _lastClickTime;
}

@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) UIImageView *pendantImage;
@property (retain, nonatomic) UIImageView *honorView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) HTSLiveUser *userModel;
@property (nonatomic) double lastClickTime;
@property (weak, nonatomic) id<IESLiveAdminstratorListNewCellDelegate> delegate;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *settingBtn;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *lowerDividerImageView;
@property (nonatomic) BOOL isWhite;

+ (id)identifier;

- (void)avatarClicked;
- (id)settingBtn;
- (void)setSettingBtn:(id)arg0;
- (double)lastClickTime;
- (void)setLastClickTime:(double)arg0;
- (void)setIsWhite:(BOOL)arg0;
- (id)lowerDividerImageView;
- (void)configWithManagerModel:(id)arg0;
- (id)pendantImage;
- (id)honorView;
- (void)_setAvatarViewWithURL:(id)arg0;
- (void)_setPendantViewWithURL:(id)arg0;
- (void)changesettingBtnStatus:(BOOL)arg0;
- (void)_refreshsettingBtn;
- (void)settingBtnClicked:(id)arg0;
- (void)setLowerDividerImageView:(id)arg0;
- (void)setPendantImage:(id)arg0;
- (void)setHonorView:(id)arg0;
- (void)setIndex:(long long)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (BOOL)isWhite;
- (void).cxx_destruct;
- (id)baseView;
- (id)backgroundImageView;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)delegate;
- (long long)index;
- (id)nameLabel;
- (void)setBaseView:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (void)setBackgroundImageView:(id)arg0;
- (void)_setupUI;

@end