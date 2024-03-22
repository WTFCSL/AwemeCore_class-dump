//
//     Generated by private class-dump
//

@class AWETeenModeAlertPCPopularizeViewModel, UIImageView, DUXButton, UILabel, UIView, AWETeenModeAlertConfigModel;

@interface AWETeenModeAlertPCPopularizeView : AWETeenModeAlertBaseView {
    UIView *_iconContainerView;
    UILabel *_titleLabel;
    UIView *_containerView;
    UIImageView *_logoImageView;
    UILabel *_placeHoldLabel;
    UILabel *_contentLabel;
    UILabel *_categoryLabel;
    DUXButton *_positiveButton;
    DUXButton *_negativeButton;
    AWETeenModeAlertPCPopularizeViewModel *_model;
    AWETeenModeAlertConfigModel *_configModel;
}

@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *placeHoldLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) DUXButton *positiveButton;
@property (retain, nonatomic) DUXButton *negativeButton;
@property (retain, nonatomic) AWETeenModeAlertPCPopularizeViewModel *model;
@property (retain, nonatomic) AWETeenModeAlertConfigModel *configModel;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)didEndShow;
- (void)didEndDismiss;
- (id)positiveButton;
- (id)negativeButton;
- (void)setPositiveButton:(id)arg0;
- (void)setNegativeButton:(id)arg0;
- (void)setupSimpleItemView;
- (id)placeHoldLabel;
- (BOOL)downgradeIconMode;
- (BOOL)adaptBigFont;
- (void)setPlaceHoldLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setData:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg0;
- (id)categoryLabel;
- (void)setCategoryLabel:(id)arg0;
- (void)setupContentView;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg0;
- (void)timerDidFire;

@end