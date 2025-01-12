//
//     Generated by private class-dump
//

@class NSArray, UIImageView, TTTAttributedLabel, UILabel, UIView, NSString;

@interface AWEGDPRPromotionAgreementPopupView : UIView <TTTAttributedLabelDelegate> {
    id /* block */ _linkDidClickBlock;
    id /* block */ _onClose;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_line;
    TTTAttributedLabel *_descriptionLabel;
    NSArray *_actions;
    id /* block */ _dismissBlock;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) TTTAttributedLabel *descriptionLabel;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ linkDidClickBlock;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentAlertViewWithImageURL:(id)arg0 placeholderImage:(id)arg1 title:(id)arg2 description:(id)arg3 actions:(id)arg4;

- (void)attributedLabel:(id)arg0 didSelectLinkWithURL:(id)arg1;
- (void)setLinkDidClickBlock:(id /* block */)arg0;
- (void)setupSubviewsUI;
- (id /* block */)linkDidClickBlock;
- (void)dismiss;
- (void).cxx_destruct;
- (id)actions;
- (id)imageView;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)descriptionLabel;
- (void)setImageView:(id)arg0;
- (void)setActions:(id)arg0;
- (id)containerView;
- (id)line;
- (void)setTitleLabel:(id)arg0;
- (void)setLine:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;
- (void)setupButtons;

@end
