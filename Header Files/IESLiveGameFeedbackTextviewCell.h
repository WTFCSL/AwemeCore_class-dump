//
//     Generated by private class-dump
//

@class UITextView, IESLiveGameFeedbackTextviewCellModel, NSString, UILabel;

@interface IESLiveGameFeedbackTextviewCell : UITableViewCell <UITextViewDelegate> {
    UILabel *_titleLabel;
    UITextView *_textView;
    IESLiveGameFeedbackTextviewCellModel *_cellModel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) IESLiveGameFeedbackTextviewCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)contentHeight;

- (void)setCellModel:(id)arg0;
- (void)setupWithCellModel:(id)arg0;
- (void)didClickKeyboardReturnKey;
- (id)textView;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setup;
- (void)setTextView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)textViewDidBeginEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (id)cellModel;

@end
