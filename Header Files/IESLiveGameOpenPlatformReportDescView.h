//
//     Generated by private class-dump
//

@class UITextView, NSString, IESLiveGameOpenPlatformReportDescViewModel, UIImageView, UILabel, UIButton;

@interface IESLiveGameOpenPlatformReportDescView : UIView <UITextViewDelegate> {
    IESLiveGameOpenPlatformReportDescViewModel *_viewModel;
    UILabel *_reasonTitleLabel;
    UILabel *_reasonContentLabel;
    UIButton *_rechooseButton;
    UILabel *_reasonDescLabel;
    UITextView *_textView;
    UIButton *_uploadButton;
    UIImageView *_uploadedImageView;
    UIButton *_discardImageButton;
}

@property (retain, nonatomic) IESLiveGameOpenPlatformReportDescViewModel *viewModel;
@property (retain, nonatomic) UILabel *reasonTitleLabel;
@property (retain, nonatomic) UILabel *reasonContentLabel;
@property (retain, nonatomic) UIButton *rechooseButton;
@property (retain, nonatomic) UILabel *reasonDescLabel;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *uploadButton;
@property (retain, nonatomic) UIImageView *uploadedImageView;
@property (retain, nonatomic) UIButton *discardImageButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (id)uploadButton;
- (void)setUploadButton:(id)arg0;
- (void)didClickKeyboardReturnKey;
- (void)p_didTapContent;
- (id)reasonTitleLabel;
- (id)reasonContentLabel;
- (id)rechooseButton;
- (id)reasonDescLabel;
- (id)uploadedImageView;
- (id)discardImageButton;
- (void)p_resetImageViewWithUploadImage:(id)arg0;
- (void)p_didTapUploadImage;
- (void)setReasonTitleLabel:(id)arg0;
- (void)setReasonContentLabel:(id)arg0;
- (void)setRechooseButton:(id)arg0;
- (void)setReasonDescLabel:(id)arg0;
- (void)setUploadedImageView:(id)arg0;
- (void)setDiscardImageButton:(id)arg0;
- (id)textView;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setTextView:(id)arg0;
- (id)viewModel;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)setupUI;

@end