//
//     Generated by private class-dump
//

@class UISwitch, UIImageView, UILabel, UIView, HTSLivePKApi;

@interface IESLivePKVolumeUpViewController : IESLiveRevenueInteractPopupViewController {
    long long _source;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UISwitch *_switchButton;
    UIView *_sepetorLineView;
    UIImageView *_imageView;
    HTSLivePKApi *_pkApi;
}

@property (nonatomic) long long source;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UISwitch *switchButton;
@property (retain, nonatomic) UIView *sepetorLineView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) HTSLivePKApi *pkApi;

- (void)setSwitchButton:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (void)setPkApi:(id)arg0;
- (id)pkApi;
- (id)sepetorLineView;
- (id)__boolToString:(BOOL)arg0;
- (void)__switchAction:(id)arg0;
- (BOOL)__stringToBool:(id)arg0;
- (void)setSepetorLineView:(id)arg0;
- (id)initWithSource:(long long)arg0;
- (long long)source;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (void)setSource:(long long)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setupViews;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)switchButton;

@end
