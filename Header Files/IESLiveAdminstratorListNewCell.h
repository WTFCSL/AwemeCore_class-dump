//
//     Generated by private class-dump
//

@class UIImageView, UILabel, GetAdminListResponse_AdminUser;

@interface IESLiveAdminstratorListNewCell : IESLiveAdminNewCell {
    UIImageView *_fansImage;
    UILabel *_statusLable;
    UILabel *_subTitleLable;
    GetAdminListResponse_AdminUser *_adminUserModel;
    unsigned long long _adminUserType;
}

@property (retain, nonatomic) UIImageView *fansImage;
@property (retain, nonatomic) UILabel *statusLable;
@property (retain, nonatomic) UILabel *subTitleLable;
@property (retain, nonatomic) GetAdminListResponse_AdminUser *adminUserModel;
@property (nonatomic) unsigned long long adminUserType;

- (id)subTitleLable;
- (void)setSubTitleLable:(id)arg0;
- (void)configWithManager:(id)arg0;
- (void)configWithManagerModel:(id)arg0;
- (void)settingBtnClicked:(id)arg0;
- (id)fansImage;
- (id)statusLable;
- (BOOL)promptEnabled;
- (void)showAdminSettingSheetWithPromptEnabled:(id)arg0;
- (void)setAdminUserModel:(id)arg0;
- (void)refreshStatusLabelConfig;
- (void)setAdminUserType:(unsigned long long)arg0;
- (void)setFansImage:(id)arg0;
- (void)setStatusLable:(id)arg0;
- (id)adminUserModel;
- (unsigned long long)adminUserType;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end