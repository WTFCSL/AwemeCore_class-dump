//
//     Generated by private class-dump
//

@class UIButton, UIImageView, UIView, NSAttributedString, UILabel;

@interface IESLiveNativeAppUndoAlertViewController : UIViewController {
    NSAttributedString *_titleText;
    NSAttributedString *_content;
    UIView *_backgroundView;
    UIView *_container;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_sureButton;
    UIView *_lineView;
}

@property (copy, nonatomic) NSAttributedString *titleText;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *sureButton;
@property (retain, nonatomic) UIView *lineView;

- (void)setSureButton:(id)arg0;
- (id)sureButton;
- (void)makeSubviews;
- (void)makeLayouts;
- (id)container;
- (void)setTitleText:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)iconView;
- (void)setContainer:(id)arg0;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)content;
- (id)titleText;
- (void)setContent:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)initWithTitle:(id)arg0 content:(id)arg1;

@end
