//
//     Generated by private class-dump
//

@class UITextField, NSString, AWEAntiAddictPreviewControlViewModel, UIImageView, UIView, UILabel, UIButton;
@protocol AWEAntiAddictPreviewControlViewDelegate;

@interface AWEAntiAddictPreviewControlView : UIView <UITextFieldDelegate> {
    BOOL _isVideoViewShrinked;
    AWEAntiAddictPreviewControlViewModel *_viewModel;
    id<AWEAntiAddictPreviewControlViewDelegate> _delegate;
    UIView *_videoView;
    UIButton *_returnButton;
    UIView *_boardView;
    UILabel *_mainTitleLabel;
    UIImageView *_mainEditImageView;
    UILabel *_subtitleLabel;
    UIImageView *_subEditImageView;
    UIButton *_confirmButton;
    UIImageView *_blurCoverImageView;
    UIView *_inputOutsideView;
    UIView *_inputBarView;
    UIView *_inputContainerView;
    UITextField *_inputTextfield;
    UILabel *_inputTintLabel;
    UIButton *_inputConfirmButton;
    UIView *_photoFrameFixer;
    unsigned long long _editingTitleType;
}

@property (retain, nonatomic) AWEAntiAddictPreviewControlViewModel *viewModel;
@property (weak, nonatomic) id<AWEAntiAddictPreviewControlViewDelegate> delegate;
@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) UIButton *returnButton;
@property (retain, nonatomic) UIView *boardView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIImageView *mainEditImageView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *subEditImageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIImageView *blurCoverImageView;
@property (retain, nonatomic) UIView *inputOutsideView;
@property (retain, nonatomic) UIView *inputBarView;
@property (retain, nonatomic) UIView *inputContainerView;
@property (retain, nonatomic) UITextField *inputTextfield;
@property (retain, nonatomic) UILabel *inputTintLabel;
@property (retain, nonatomic) UIButton *inputConfirmButton;
@property (retain, nonatomic) UIView *photoFrameFixer;
@property (nonatomic) BOOL isVideoViewShrinked;
@property (nonatomic) unsigned long long editingTitleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getPreviewVideoTypeEnum:(id)arg0;
+ (id)getPreviewVideoTypeString:(unsigned long long)arg0;

- (id)inputBarView;
- (id)returnButton;
- (void)setReturnButton:(id)arg0;
- (void)playConfrimButtonAnimation;
- (void)mainEditDidTap;
- (void)subEditDidTap;
- (id)inputOutsideView;
- (id)inputConfirmButton;
- (id)inputContainerView;
- (id)inputTintLabel;
- (id)inputTextfield;
- (id)p_getEditingTitleTypeName:(unsigned long long)arg0;
- (void)setEditingTitleType:(unsigned long long)arg0;
- (unsigned long long)editingTitleType;
- (void)p_trackClickEditButtonkWithType:(unsigned long long)arg0;
- (id)p_validTextFieldText;
- (void)p_trackClickInputConfirmButtonWithType:(unsigned long long)arg0;
- (void)p_updateInputConfirmEnable;
- (void)p_updateInputTint;
- (void)inputConfirmDidClick:(id)arg0;
- (void)inputEditingChanged:(id)arg0;
- (void)inputOutsideViewDidClick;
- (void)setInputOutsideView:(id)arg0;
- (void)setInputBarView:(id)arg0;
- (void)setInputContainerView:(id)arg0;
- (void)setInputTextfield:(id)arg0;
- (void)setInputTintLabel:(id)arg0;
- (void)setInputConfirmButton:(id)arg0;
- (id)boardView;
- (BOOL)isVideoViewShrinked;
- (void)setIsVideoViewShrinked:(BOOL)arg0;
- (void)presentBoardWithAnimation;
- (void)p_shrinkVideoViewWithCompletion:(id /* block */)arg0;
- (id)blurCoverImageView;
- (void)setBlurCoverImageView:(id)arg0;
- (double)calculateBoardViewTop;
- (id)mainTitleLabel;
- (id)mainEditImageView;
- (id)subEditImageView;
- (void)updateCustomLayout;
- (struct CGSize { double x0; double x1; })calculateShrinkVideoSize;
- (BOOL)isPadFullScreen;
- (id)photoFrameFixer;
- (void)setPhotoFrameFixer:(id)arg0;
- (void)returnButtonDidClick:(id)arg0;
- (void)confirmButtonDidClick:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 delegate:(id)arg2;
- (void)addVideoView:(id)arg0;
- (void)shrinkVideoViewIfNeeded;
- (void)updateBlurCoverWithModel:(id)arg0;
- (void)setBoardView:(id)arg0;
- (void)setMainTitleLabel:(id)arg0;
- (void)setMainEditImageView:(id)arg0;
- (void)setSubEditImageView:(id)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)subtitleLabel;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setVideoView:(id)arg0;
- (void)dealloc;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (id)videoView;
- (void)setupUI;
- (void)keyboardWillHideNotification:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)setupNotifications;
- (void)keyboardWillShowNotification:(id)arg0;

@end