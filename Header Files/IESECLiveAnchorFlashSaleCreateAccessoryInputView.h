//
//     Generated by private class-dump
//

@class IESECLiveAnchorCreateFlashSaleItem, NSString, UITextField, UIView, UILabel, MASConstraint;

@interface IESECLiveAnchorFlashSaleCreateAccessoryInputView : UIView <UITextFieldDelegate> {
    UIView *_headerView;
    UILabel *_headerTextLabel;
    UITextField *_textField;
    UILabel *_confirmLabel;
    UIView *_contentView;
    UIView *_coverView;
    NSString *_headerText;
    long long _lengthLimit;
    NSString *_lastFilledTextContent;
    IESECLiveAnchorCreateFlashSaleItem *_item;
    id /* block */ _confirmBlock;
    id /* block */ _cancelBlock;
    MASConstraint *_headerBottomToTextFieldTopConstraint;
    MASConstraint *_textFieldTopToContainerTopConstraint;
}

@property (retain, nonatomic) MASConstraint *headerBottomToTextFieldTopConstraint;
@property (retain, nonatomic) MASConstraint *textFieldTopToContainerTopConstraint;
@property (readonly, nonatomic) UIView *headerView;
@property (readonly, nonatomic) UILabel *headerTextLabel;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, nonatomic) UILabel *confirmLabel;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *coverView;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) long long lengthLimit;
@property (retain, nonatomic) NSString *lastFilledTextContent;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *item;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attachTo:(id)arg0;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (id)confirmLabel;
- (long long)lengthLimit;
- (void)setLengthLimit:(long long)arg0;
- (void)coverViewDidTap:(id)arg0;
- (void)confirmLabelDidTap:(id)arg0;
- (void)setHeaderBottomToTextFieldTopConstraint:(id)arg0;
- (void)setTextFieldTopToContainerTopConstraint:(id)arg0;
- (void)p_updateAfterSettingValue;
- (id)headerBottomToTextFieldTopConstraint;
- (id)textFieldTopToContainerTopConstraint;
- (BOOL)p_enterText;
- (BOOL)p_validateSpecialText:(id)arg0;
- (BOOL)p_validateText:(id)arg0;
- (id)lastFilledTextContent;
- (void)setLastFilledTextContent:(id)arg0;
- (id)item;
- (id)textField;
- (id)headerText;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (id)contentView;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)setCancelBlock:(id /* block */)arg0;
- (id)headerView;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)setItem:(id)arg0;
- (id)initWithItem:(id)arg0;
- (void)setHeaderText:(id)arg0;
- (id)headerTextLabel;
- (id)coverView;

@end
