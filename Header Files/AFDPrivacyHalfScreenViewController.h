//
//     Generated by private class-dump
//

@class UIView, NSString, UIImage, AWEButton, AFDButton, UIImageView, DUXAbandonedButton, UILabel, AWEProfileToggleView;

@interface AFDPrivacyHalfScreenViewController : AWEHalfScreenBaseViewController <AFDPrivacyHalfScreenViewControllerProtocol> {
    BOOL _useCardUIStyle;
    BOOL _needOptimizeLockImageInset;
    BOOL _useNonSquareLockImage;
    BOOL _useCustomLockImageInset;
    BOOL _useNoMaskStyle;
    BOOL _defaultSwitchState;
    BOOL _defaultLockShowState;
    BOOL _newLockPadding;
    BOOL _shouldShowLockImage;
    BOOL _shouldShowKnownButton;
    BOOL _shouldShowLeftAndRightButton;
    BOOL _shouldShowToggle;
    BOOL _shouldShowSettingsText;
    BOOL _shouldUseYYlabel;
    double _dismissTime;
    id /* block */ _tapDismissBlock;
    id /* block */ _slideDismissBlock;
    id /* block */ _afterDismissBlock;
    id /* block */ _afterDismissWithSwitchChangedBlock;
    double _imageViewTopPadding;
    double _imageViewBottomPadding;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_settingsLabel;
    UIImageView *_imageView;
    UIImageView *_lockImageView;
    UIImage *_closeImage;
    UIImage *_openImage;
    AWEButton *_knownButton;
    AWEButton *_leftCancelButton;
    AWEButton *_rightConfirmButton;
    DUXAbandonedButton *_leftActionButton;
    DUXAbandonedButton *_rightActionButton;
    AFDButton *_cancelButton;
    UIView *_linkView;
    UIView *_upLineView;
    UIView *_bottomLineView;
    UIView *_toggleContainerView;
    AWEProfileToggleView *_toggleView;
    UIView *_indicatorLineView;
    NSString *_userID;
    UIImage *_image;
    UIImage *_lockImage;
    NSString *_titleLabelText;
    NSString *_contentLabelText;
    NSString *_knownButtonText;
    NSString *_leftCancelButtonText;
    NSString *_rightConfirmButtonText;
    NSString *_toggleTitleText;
    NSString *_settingsText;
    id /* block */ _closeButtonClickedBlock;
    id /* block */ _singleTapBlock;
    id /* block */ _toggleBlock;
    id /* block */ _rightBtnClickedBlock;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _lockImageInset;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *settingsLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIImage *closeImage;
@property (retain, nonatomic) UIImage *openImage;
@property (retain, nonatomic) AWEButton *knownButton;
@property (retain, nonatomic) AWEButton *leftCancelButton;
@property (retain, nonatomic) AWEButton *rightConfirmButton;
@property (retain, nonatomic) DUXAbandonedButton *leftActionButton;
@property (retain, nonatomic) DUXAbandonedButton *rightActionButton;
@property (retain, nonatomic) AFDButton *cancelButton;
@property (retain, nonatomic) UIView *linkView;
@property (retain, nonatomic) UIView *upLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *toggleContainerView;
@property (retain, nonatomic) AWEProfileToggleView *toggleView;
@property (retain, nonatomic) UIView *indicatorLineView;
@property (retain, nonatomic) NSString *userID;
@property (nonatomic) BOOL defaultSwitchState;
@property (nonatomic) BOOL defaultLockShowState;
@property (nonatomic) BOOL newLockPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } lockImageInset;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *lockImage;
@property (retain, nonatomic) NSString *titleLabelText;
@property (retain, nonatomic) NSString *contentLabelText;
@property (retain, nonatomic) NSString *knownButtonText;
@property (retain, nonatomic) NSString *leftCancelButtonText;
@property (retain, nonatomic) NSString *rightConfirmButtonText;
@property (retain, nonatomic) NSString *toggleTitleText;
@property (retain, nonatomic) NSString *settingsText;
@property (nonatomic) BOOL shouldShowLockImage;
@property (nonatomic) BOOL shouldShowKnownButton;
@property (nonatomic) BOOL shouldShowLeftAndRightButton;
@property (nonatomic) BOOL shouldShowToggle;
@property (nonatomic) BOOL shouldShowSettingsText;
@property (nonatomic) BOOL shouldUseYYlabel;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (copy, nonatomic) id /* block */ singleTapBlock;
@property (copy, nonatomic) id /* block */ toggleBlock;
@property (copy, nonatomic) id /* block */ rightBtnClickedBlock;
@property (nonatomic) double dismissTime;
@property (copy, nonatomic) id /* block */ tapDismissBlock;
@property (copy, nonatomic) id /* block */ slideDismissBlock;
@property (copy, nonatomic) id /* block */ afterDismissBlock;
@property (copy, nonatomic) id /* block */ afterDismissWithSwitchChangedBlock;
@property (nonatomic) BOOL useCardUIStyle;
@property (nonatomic) BOOL needOptimizeLockImageInset;
@property (nonatomic) BOOL useNonSquareLockImage;
@property (nonatomic) BOOL useCustomLockImageInset;
@property (nonatomic) BOOL useNoMaskStyle;
@property (nonatomic) double imageViewTopPadding;
@property (nonatomic) double imageViewBottomPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setSingleTapBlock:(id /* block */)arg0;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)slideDismiss;
- (void)tapDismiss;
- (void)presentOnViewController:(id)arg0;
- (id)leftActionButton;
- (void)setLeftActionButton:(id)arg0;
- (BOOL)useCardUIStyle;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (id)indicatorLineView;
- (void)setIndicatorLineView:(id)arg0;
- (id /* block */)closeButtonClickedBlock;
- (void)setCloseButtonClickedBlock:(id /* block */)arg0;
- (id /* block */)toggleBlock;
- (void)setToggleBlock:(id /* block */)arg0;
- (id /* block */)rightBtnClickedBlock;
- (void)setRightBtnClickedBlock:(id /* block */)arg0;
- (id)contentLabelText;
- (void)setContentLabelText:(id)arg0;
- (void)setImageViewTopPadding:(double)arg0;
- (void)setImageViewBottomPadding:(double)arg0;
- (void)configWithImageView:(id)arg0 lockImage:(id)arg1 defaultLockState:(BOOL)arg2 titleLabelText:(id)arg3 contentLabelText:(id)arg4 leftCancelButtonText:(id)arg5 rightConfirmButtonText:(id)arg6 rightBtnClickedBlock:(id /* block */)arg7 leftButtonClickedBlock:(id /* block */)arg8;
- (void)configWithCloseButtonClickedBlock:(id /* block */)arg0 singleTapBlock:(id /* block */)arg1 toggleBlock:(id /* block */)arg2;
- (void)setShouldUseYYlabel:(BOOL)arg0;
- (BOOL)shouldShowToggle;
- (double)imageViewTopPadding;
- (BOOL)needOptimizeLockImageInset;
- (BOOL)useCustomLockImageInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })lockImageInset;
- (BOOL)newLockPadding;
- (BOOL)useNonSquareLockImage;
- (BOOL)defaultLockShowState;
- (double)imageViewBottomPadding;
- (id)toggleContainerView;
- (id)upLineView;
- (BOOL)shouldShowKnownButton;
- (id)knownButton;
- (BOOL)shouldShowSettingsText;
- (BOOL)shouldShowLeftAndRightButton;
- (id)rightConfirmButton;
- (id)leftCancelButton;
- (BOOL)useNoMaskStyle;
- (id)closeImage;
- (id)openImage;
- (void)setShouldShowLockImage:(BOOL)arg0;
- (void)setDefaultLockShowState:(BOOL)arg0;
- (void)setNewLockPadding:(BOOL)arg0;
- (void)setShouldShowLeftAndRightButton:(BOOL)arg0;
- (void)setLeftCancelButtonText:(id)arg0;
- (void)setRightConfirmButtonText:(id)arg0;
- (void)configWithImageView:(id)arg0 lockImage:(id)arg1 defaultLockState:(BOOL)arg2 titleLabelText:(id)arg3 contentLabelText:(id)arg4 leftCancelButtonText:(id)arg5 rightConfirmButtonText:(id)arg6 rightBtnClickedBlock:(id /* block */)arg7;
- (void)configWithImageView:(id)arg0 closeImage:(id)arg1 lockImage:(id)arg2 titleLabelText:(id)arg3 contentLabelText:(id)arg4 knownButtonText:(id)arg5 toggleTitleText:(id)arg6 defaultState:(BOOL)arg7 defaultLockState:(BOOL)arg8;
- (void)setLockImageInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setOpenImage:(id)arg0;
- (void)setCloseImage:(id)arg0;
- (void)setShouldShowKnownButton:(BOOL)arg0;
- (void)setKnownButtonText:(id)arg0;
- (void)setShouldShowToggle:(BOOL)arg0;
- (void)setToggleTitleText:(id)arg0;
- (void)setDefaultSwitchState:(BOOL)arg0;
- (void)setShouldShowSettingsText:(BOOL)arg0;
- (void)setSettingsText:(id)arg0;
- (void)highLightTextClicked;
- (id /* block */)singleTapBlock;
- (double)dismissTime;
- (BOOL)shouldUseYYlabel;
- (void)p_formatYYlabelForNewAccountEntry:(id)arg0;
- (id)settingsText;
- (void)settingsTextTapped;
- (id)knownButtonText;
- (void)knownButtonClicked;
- (id)configAWEButton:(double)arg0 radius:(double)arg1 backgroundColor:(id)arg2 font:(id)arg3 text:(id)arg4 titleColor:(id)arg5 action:(SEL)arg6;
- (id)leftCancelButtonText;
- (id)rightConfirmButtonText;
- (void)rightBtnClicked;
- (id)toggleTitleText;
- (BOOL)defaultSwitchState;
- (void)refreshLockImage:(BOOL)arg0;
- (id /* block */)afterDismissBlock;
- (id /* block */)afterDismissWithSwitchChangedBlock;
- (BOOL)hasSwitchStateChanged;
- (id /* block */)tapDismissBlock;
- (id /* block */)slideDismissBlock;
- (void)configWithImageView:(id)arg0 lockImage:(id)arg1 titleLabelText:(id)arg2 contentLabelText:(id)arg3 knownButtonText:(id)arg4 toggleTitleText:(id)arg5 defaultState:(BOOL)arg6 defaultLockState:(BOOL)arg7;
- (void)configWithImageView:(id)arg0 titleLabelText:(id)arg1 contentLabelText:(id)arg2 settingsText:(id)arg3 singleTapBlock:(id /* block */)arg4;
- (void)configWithImageView:(id)arg0 lockImage:(id)arg1 lockImageInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 titleLabelText:(id)arg3 contentLabelText:(id)arg4 knownButtonText:(id)arg5 toggleTitleText:(id)arg6 defaultState:(BOOL)arg7 defaultLockState:(BOOL)arg8;
- (void)configWithHighlightContentLabelText:(id)arg0;
- (void)configWithDismissBlock:(id /* block */)arg0;
- (void)resetToggleState;
- (void)setDismissTime:(double)arg0;
- (void)setTapDismissBlock:(id /* block */)arg0;
- (void)setSlideDismissBlock:(id /* block */)arg0;
- (void)setAfterDismissBlock:(id /* block */)arg0;
- (void)setAfterDismissWithSwitchChangedBlock:(id /* block */)arg0;
- (void)setUseNoMaskStyle:(BOOL)arg0;
- (void)setNeedOptimizeLockImageInset:(BOOL)arg0;
- (void)setUseNonSquareLockImage:(BOOL)arg0;
- (void)setUseCustomLockImageInset:(BOOL)arg0;
- (id)initWithYYlabel;
- (void)setSettingsLabel:(id)arg0;
- (void)setKnownButton:(id)arg0;
- (void)setLeftCancelButton:(id)arg0;
- (void)setRightConfirmButton:(id)arg0;
- (void)setUpLineView:(id)arg0;
- (void)setToggleContainerView:(id)arg0;
- (BOOL)shouldShowLockImage;
- (id)userID;
- (void)setCancelButton:(id)arg0;
- (id)init;
- (double)titleHeight;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)cancelButton;
- (id)image;
- (double)cornerRadius;
- (id)imageView;
- (id)titleLabel;
- (void)setUserID:(id)arg0;
- (unsigned long long)viewStyle;
- (void)setImageView:(id)arg0;
- (void)presentViewController:(id /* block */)arg0;
- (void)setImage:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (unsigned long long)animationStyle;
- (id)linkView;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;
- (void)setLinkView:(id)arg0;
- (void)cancelButtonTapped;
- (id)titleLabelText;
- (id)lockImage;
- (void)setLockImage:(id)arg0;
- (id)rightActionButton;
- (void)setRightActionButton:(id)arg0;
- (id)toggleView;
- (void)setToggleView:(id)arg0;
- (void)setTitleLabelText:(id)arg0;
- (id)lockImageView;
- (void)setLockImageView:(id)arg0;
- (double)containerHeight;
- (double)containerWidth;
- (id)settingsLabel;

@end
