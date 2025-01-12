//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIImage, AWEECBottomPopupAction, UIImageView, UIButton, NSMutableArray, UILabel;

@interface AWEECBottomPopupView : UIView {
    BOOL _isButtonAlignedVertically;
    NSString *_title;
    NSString *_content;
    AWEECBottomPopupAction *_setting;
    UIImage *_image;
    NSArray *_actions;
    UIView *_contentView;
    UIButton *_closeButton;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_settingLabel;
    NSMutableArray *_actionButtons;
    UIView *_buttonsContainerView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEECBottomPopupAction *setting;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *settingLabel;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) UIView *buttonsContainerView;
@property (nonatomic) BOOL isButtonAlignedVertically;

+ (void)showWithTitle:(id)arg0 description:(id)arg1 setting:(id)arg2 headerImage:(id)arg3 actions:(id)arg4;

- (BOOL)isButtonAlignedVertically;
- (void)setIsButtonAlignedVertically:(BOOL)arg0;
- (id)settingLabel;
- (id)buttonsContainerView;
- (void)settingLabelClicked:(id)arg0;
- (void)setSettingLabel:(id)arg0;
- (void)setButtonsContainerView:(id)arg0;
- (id)actionButtons;
- (void).cxx_destruct;
- (id)image;
- (id)actions;
- (id)titleLabel;
- (id)content;
- (id)contentView;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setActions:(id)arg0;
- (void)setContent:(id)arg0;
- (void)_dismiss;
- (void)setActionButtons:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)_show;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)setting;
- (void)setSetting:(id)arg0;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg0;
- (void)_setupUI;

@end
