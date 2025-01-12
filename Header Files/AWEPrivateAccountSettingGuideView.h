//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIButton;

@interface AWEPrivateAccountSettingGuideView : UIView {
    id /* block */ _closeButtonClickedBlock;
    id /* block */ _singleTapBlock;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_arrowImageView;
    UIImageView *_lockImageView;
    UIButton *_closeButton;
    long long _type;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (copy, nonatomic) id /* block */ singleTapBlock;

- (void)setSingleTapBlock:(id /* block */)arg0;
- (void)p_closeButtonClicked;
- (id /* block */)closeButtonClickedBlock;
- (void)setCloseButtonClickedBlock:(id /* block */)arg0;
- (id /* block */)singleTapBlock;
- (void)p_configUI;
- (void)p_singleTaped;
- (void)trackWhenDismissClicked;
- (void)trackWhenButtonClicked;
- (id)textForTitleLabel;
- (id)textForSubtitleLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (long long)type;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)lockImageView;
- (void)setLockImageView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
