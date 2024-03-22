//
//     Generated by private class-dump
//

@class UITextView, IESLiveRevenueInteractFeedbackViewModel, NSString, UILabel, IESLiveRevenueInteractFeedbackStyleConfig;

@interface IESLiveRevenueInteractFeedbackDetailCell : UITableViewCell <UITextViewDelegate> {
    UILabel *_titleLabel;
    UITextView *_textView;
    IESLiveRevenueInteractFeedbackViewModel *_viewModel;
    IESLiveRevenueInteractFeedbackStyleConfig *_styleConfig;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *textView;
@property (weak, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackStyleConfig *styleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStyleConfig:(id)arg0;
- (id)styleConfig;
- (void)didClickKeyboardReturnKey;
- (void)updateWithTitle:(id)arg0 viewModel:(id)arg1 styleConfig:(id)arg2;
- (id)textView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (void)setTextView:(id)arg0;
- (id)viewModel;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (void)textViewDidBeginEditing:(id)arg0;
- (void)textViewDidEndEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;

@end
