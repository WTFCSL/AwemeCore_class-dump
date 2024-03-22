//
//     Generated by private class-dump
//

@class UIView, NSString, AWEFavoriteFileAddNewVideoBaseViewController, AWEFavoriteRecommendModel, UIImageView, UIButton, DUXSwitch, DUXButton, UILabel;

@interface AWEFavoriteRecommendSelectVideoViewController : UIViewController {
    BOOL _isFromFansTool;
    BOOL _isSelectedVideo;
    BOOL _hasClickConfirmButton;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    NSString *_titleName;
    UIImageView *_titleEditImgView;
    UIView *_lineView;
    UILabel *_privacySwitchLabel;
    DUXSwitch *_privacySwitch;
    DUXButton *_confirmButton;
    AWEFavoriteFileAddNewVideoBaseViewController *_selectVideoViewController;
    AWEFavoriteRecommendModel *_recommendModel;
    id /* block */ _createRecommendFavoriteSuccessCompletion;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleName;
@property (retain, nonatomic) UIImageView *titleEditImgView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *privacySwitchLabel;
@property (retain, nonatomic) DUXSwitch *privacySwitch;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) AWEFavoriteFileAddNewVideoBaseViewController *selectVideoViewController;
@property (retain, nonatomic) AWEFavoriteRecommendModel *recommendModel;
@property (nonatomic) BOOL isSelectedVideo;
@property (nonatomic) BOOL hasClickConfirmButton;
@property (copy, nonatomic) id /* block */ createRecommendFavoriteSuccessCompletion;
@property (nonatomic) BOOL isFromFansTool;

- (void)didClickConfirmButton;
- (void)setTitleName:(id)arg0;
- (id)titleName;
- (void)didClickCancelButton;
- (void)setRecommendModel:(id)arg0;
- (id)recommendModel;
- (void)setIsFromFansTool:(BOOL)arg0;
- (id /* block */)createRecommendFavoriteSuccessCompletion;
- (void)setCreateRecommendFavoriteSuccessCompletion:(id /* block */)arg0;
- (id)initWithTitle:(id)arg0 recommendModel:(id)arg1 successCompletion:(id /* block */)arg2;
- (BOOL)isFromFansTool;
- (void)setTitleEditImgView:(id)arg0;
- (id)titleEditImgView;
- (void)didClickEditTitleButton;
- (void)setSelectVideoViewController:(id)arg0;
- (id)selectVideoViewController;
- (void)setIsSelectedVideo:(BOOL)arg0;
- (void)setPrivacySwitchLabel:(id)arg0;
- (id)privacySwitchLabel;
- (void)setPrivacySwitch:(id)arg0;
- (id)privacySwitch;
- (void)trackRecommendFavoriteCreateCancelButtonClick;
- (BOOL)isSelectedVideo;
- (BOOL)hasClickConfirmButton;
- (void)setHasClickConfirmButton:(BOOL)arg0;
- (void)trackRecommendFavoriteCreateConfirmButtonClick;
- (void)goToFavoriteFileVideoViewControllerWithCollectsName:(id)arg0 collectsId:(id)arg1;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)show;
- (id)titleLabel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end