//
//     Generated by private class-dump
//

@class NSString;
@protocol UITextFieldDelegate;

@interface SHSPhoneLogic : NSObject <UITextFieldDelegate> {
    id<UITextFieldDelegate> _delegate;
}

@property (weak, nonatomic) id<UITextFieldDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)selectTextForInput:(id)arg0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
+ (void)setImageLeftView:(id)arg0 image:(id)arg1;
+ (void)updateLeftImageView:(id)arg0 imagePath:(id)arg1;
+ (long long)pushCaretPosition:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
+ (void)applyFormat:(id)arg0 forText:(id)arg1;
+ (void)popCaretPosition:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 caretPosition:(long long)arg2;
+ (BOOL)logicTextField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;

- (BOOL)textFieldShouldClear:(id)arg0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (id)delegate;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (BOOL)textFieldShouldEndEditing:(id)arg0;
- (void)setDelegate:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;

@end
