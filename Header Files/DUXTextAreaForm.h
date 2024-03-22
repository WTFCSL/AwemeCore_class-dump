//
//     Generated by private class-dump
//

@class NSString, UIImageView, DUXTextArea, UILabel, UIImage;

@interface DUXTextAreaForm : UIView {
    NSString *_title;
    UIImage *_image;
    DUXTextArea *_textArea;
    long long _maxLengthType;
    long long _maxLength;
    id /* block */ _didClickImageAction;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UILabel *_maxLengthLabel;
    UILabel *_extraLabel;
}

@property (retain, nonatomic) DUXTextArea *textArea;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *maxLengthLabel;
@property (retain, nonatomic) UILabel *extraLabel;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long maxLengthType;
@property (nonatomic) long long maxLength;
@property (copy, nonatomic) id /* block */ didClickImageAction;

- (id)extraLabel;
- (void)setExtraLabel:(id)arg0;
- (void)setTextArea:(id)arg0;
- (id)maxLengthLabel;
- (void)setTextAreaConstraints;
- (void)setMaxLengthType:(long long)arg0;
- (long long)maxLengthType;
- (id /* block */)didClickImageAction;
- (void)checkMaxLength;
- (void)didClickImage;
- (id)initWithTitle:(id)arg0 maxLengthType:(long long)arg1 maxLength:(long long)arg2;
- (void)showAuxiliaryReminder:(id)arg0;
- (void)showExtraText:(id)arg0 color:(id)arg1;
- (void)dismissHit;
- (void)setDidClickImageAction:(id /* block */)arg0;
- (void)setMaxLengthLabel:(id)arg0;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (id)iconView;
- (id)image;
- (BOOL)endEditing:(BOOL)arg0;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setMaxLength:(long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (long long)maxLength;
- (void)setTitle:(id)arg0;
- (void)showError:(id)arg0;
- (id)textArea;

@end
