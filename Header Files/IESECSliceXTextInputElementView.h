//
//     Generated by private class-dump
//

@class NSString, UITextField;

@interface IESECSliceXTextInputElementView : IESECSliceXBaseContentElementView <UITextFieldDelegate> {
    BOOL _needOpenKeyBoard;
    UITextField *_contentTextField;
    long long _maxLength;
    unsigned long long _textLength;
}

@property (nonatomic) long long maxLength;
@property (nonatomic) unsigned long long textLength;
@property (nonatomic) BOOL needOpenKeyBoard;
@property (retain, nonatomic) UITextField *contentTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentTextField;
- (void)setContentTextField:(id)arg0;
- (void)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)arg0 width:(double)arg1 widthMode:(unsigned long long)arg2 height:(double)arg3 heightMode:(unsigned long long)arg4;
- (void)setNeedOpenKeyBoard:(BOOL)arg0;
- (BOOL)needOpenKeyBoard;
- (void)setTextLength:(unsigned long long)arg0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (unsigned long long)textLength;
- (void)setMaxLength:(long long)arg0;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (long long)maxLength;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)textFieldDidChange:(id)arg0;

@end
