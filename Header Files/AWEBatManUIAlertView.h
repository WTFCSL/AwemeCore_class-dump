//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UITapGestureRecognizer, UIImage, UITextView, UIImageView, UIWindow, NSAttributedString, UILabel;

@interface AWEBatManUIAlertView : UIView <UIGestureRecognizerDelegate> {
    BOOL _dismissWhenTappedInBlankArea;
    BOOL _bringAlertViewFromLoadingToBatMan;
    BOOL _isCheckedAgreement1;
    BOOL _isCheckedAgreement2;
    BOOL _useHtmlRender;
    BOOL _shouldShowIconImage;
    BOOL _messageShouldAlignLeft;
    BOOL _isButtonAlignedVertically;
    BOOL _disableLocalizations;
    UIView *_viewToShowAlert;
    id /* block */ _dismissBlock;
    id /* block */ _dismissBlockWithoutCallCancelAction;
    id /* block */ _configUIBlock;
    double _maxContentHeight;
    double _customCornerRadius;
    UIImage *_headerImage;
    UIImageView *_headerImageView;
    long long _closeButtonStyle;
    id /* block */ _closeButtonClickedBlock;
    UIImage *_iconImage;
    UIImageView *_iconImageView;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    UILabel *_attributedLabel;
    NSString *_message;
    NSAttributedString *_attributedMessage;
    UITextView *_descriptionTextView;
    UIView *_bodyView;
    NSString *_text;
    NSAttributedString *_attributedText;
    id /* block */ _handleBlock;
    NSArray *_actions;
    long long _style;
    double _containerWidth;
    double _containerMaxHeight;
    double _textViewHorizatalInset;
    UIView *_animationView;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tapGes;
    UITapGestureRecognizer *_tapToDismissGes;
    NSArray *_buttons;
    NSArray *_buttonTitles;
    UIWindow *_windowToShowAlert;
    struct CGSize { double width; double height; } _headerImageSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerImageEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _iconImageEdgeInsets;
}

@property (nonatomic) long long style;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerMaxHeight;
@property (nonatomic) double textViewHorizatalInset;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) UILabel *attributedLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissGes;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *buttonTitles;
@property (weak, nonatomic) UIWindow *windowToShowAlert;
@property (weak, nonatomic) UIView *viewToShowAlert;
@property (nonatomic) BOOL dismissWhenTappedInBlankArea;
@property (nonatomic) BOOL bringAlertViewFromLoadingToBatMan;
@property (nonatomic) BOOL isCheckedAgreement1;
@property (nonatomic) BOOL isCheckedAgreement2;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ dismissBlockWithoutCallCancelAction;
@property (copy, nonatomic) id /* block */ configUIBlock;
@property (nonatomic) BOOL useHtmlRender;
@property (nonatomic) double maxContentHeight;
@property (nonatomic) double customCornerRadius;
@property (retain, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerImageEdgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } headerImageSize;
@property (nonatomic) long long closeButtonStyle;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (nonatomic) BOOL shouldShowIconImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } iconImageEdgeInsets;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (nonatomic) BOOL messageShouldAlignLeft;
@property (retain, nonatomic) UIView *bodyView;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) id /* block */ handleBlock;
@property (nonatomic) BOOL isButtonAlignedVertically;
@property (nonatomic) BOOL disableLocalizations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
+ (void)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6 UIConfigBlock:(id /* block */)arg7;
+ (BOOL)isSomeAlertShowing;
+ (id)alertViewWithStyle:(long long)arg0;

- (void)setCloseButtonStyle:(long long)arg0;
- (long long)closeButtonStyle;
- (void)onCloseButtonClicked:(id)arg0;
- (void)loadSubviews;
- (void)dismissSelfDefineAlert;
- (id)tapGes;
- (void)setTapGes:(id)arg0;
- (BOOL)useHtmlRender;
- (double)maxContentHeight;
- (BOOL)isButtonAlignedVertically;
- (void)didTapAlertView:(id)arg0;
- (void)setTapToDismissGes:(id)arg0;
- (id)tapToDismissGes;
- (id)viewToShowAlert;
- (id)windowToShowAlert;
- (void)p__showSelfDefineAlertWithAnimation;
- (void)loadSubviewsForClassicStyle;
- (void)onAttributedLabelClicked:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })headerImageEdgeInsets;
- (BOOL)shouldShowIconImage;
- (double)textViewHorizatalInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })iconImageEdgeInsets;
- (double)containerMaxHeight;
- (BOOL)dismissWhenTappedInBlankArea;
- (id /* block */)dismissBlockWithoutCallCancelAction;
- (void)findCancelActionAndExecute;
- (void)p__dismissSelfDefineAlertWithAnimation;
- (id /* block */)handleBlock;
- (void)resetUIBeforeShowingForClassicStyle;
- (BOOL)messageShouldAlignLeft;
- (id)initForShareTrendingHeaderImage:(id)arg0;
- (void)setViewToShowAlert:(id)arg0;
- (void)setDismissWhenTappedInBlankArea:(BOOL)arg0;
- (void)setDismissBlockWithoutCallCancelAction:(id /* block */)arg0;
- (id /* block */)configUIBlock;
- (void)setConfigUIBlock:(id /* block */)arg0;
- (void)setUseHtmlRender:(BOOL)arg0;
- (void)setMaxContentHeight:(double)arg0;
- (void)setHeaderImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setShouldShowIconImage:(BOOL)arg0;
- (void)setIconImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setMessageShouldAlignLeft:(BOOL)arg0;
- (void)setHandleBlock:(id /* block */)arg0;
- (void)setIsButtonAlignedVertically:(BOOL)arg0;
- (BOOL)disableLocalizations;
- (void)setDisableLocalizations:(BOOL)arg0;
- (void)setContainerMaxHeight:(double)arg0;
- (void)setTextViewHorizatalInset:(double)arg0;
- (void)setWindowToShowAlert:(id)arg0;
- (id /* block */)closeButtonClickedBlock;
- (void)setCloseButtonClickedBlock:(id /* block */)arg0;
- (BOOL)isCheckedAgreement2;
- (BOOL)isCheckedAgreement1;
- (void)setBringAlertViewFromLoadingToBatMan:(BOOL)arg0;
- (void)setIsCheckedAgreement1:(BOOL)arg0;
- (void)setIsCheckedAgreement2:(BOOL)arg0;
- (void)setHeaderImageSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)bringAlertViewFromLoadingToBatMan;
- (struct CGSize { double x0; double x1; })headerImageSize;
- (void)enableActionWithIndex:(unsigned long long)arg0 isEnable:(BOOL)arg1;
- (void)setMessage:(id)arg0;
- (long long)style;
- (id)iconImage;
- (id)attributedText;
- (id)init;
- (void)addAction:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg0;
- (void)setText:(id)arg0;
- (id)actions;
- (void)setButtons:(id)arg0;
- (id)attributedTitle;
- (id)buttons;
- (void)show;
- (id)titleLabel;
- (id)message;
- (void)setAttributedTitle:(id)arg0;
- (id)title;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setActions:(id)arg0;
- (id)text;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setStyle:(long long)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setIconImage:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)attributedMessage;
- (void)setIconImageView:(id)arg0;
- (id)bodyView;
- (void)setBodyView:(id)arg0;
- (void)dismiss:(BOOL)arg0;
- (void)setHeaderImage:(id)arg0;
- (id)headerImage;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)attributedLabel;
- (void)setAttributedLabel:(id)arg0;
- (void)setAttributedMessage:(id)arg0;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg0;
- (id)buttonTitles;
- (void)setButtonTitles:(id)arg0;
- (id)descriptionTextView;
- (void)setDescriptionTextView:(id)arg0;
- (double)customCornerRadius;
- (void)setCustomCornerRadius:(double)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end
