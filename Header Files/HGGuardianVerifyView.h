//
//     Generated by private class-dump
//

@class NSString, HGIndicatorView, HGStyleTextField, HGConfirmAnimationButton, HGUniqueID;
@protocol HGGuardianVerifyViewDelegate;

@interface HGGuardianVerifyView : UIView <HGTextFieldDelegate> {
    id<HGGuardianVerifyViewDelegate> _delegate;
    HGIndicatorView *_indicatorView;
    HGStyleTextField *_nameTextField;
    HGStyleTextField *_idNumberTextField;
    HGConfirmAnimationButton *_confirmButton;
    HGUniqueID *_uniqueID;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (weak, nonatomic) id<HGGuardianVerifyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidChanged:(id)arg0;
- (id)initWithDelegate:(id)arg0 uniqueID:(id)arg1;
- (BOOL)isNameTextFieldValid;
- (void)confirmAction:(id)arg0;
- (BOOL)isIdNumberTextFieldValid;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)stopAnimation;
- (void)_cancelAction:(id)arg0;

@end
