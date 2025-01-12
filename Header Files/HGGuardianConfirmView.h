//
//     Generated by private class-dump
//

@class UITextView, HGCheckBox, HGConfirmAnimationButton, HGUniqueID;
@protocol HGGuardianConfirmViewDelegate;

@interface HGGuardianConfirmView : UIView {
    id<HGGuardianConfirmViewDelegate> _delegate;
    HGCheckBox *_checkBox;
    UITextView *_protocolView;
    HGConfirmAnimationButton *_agreeButton;
    HGUniqueID *_uniqueID;
    struct _NSRange { unsigned long long location; unsigned long long length; } _privacyRange;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (weak, nonatomic) id<HGGuardianConfirmViewDelegate> delegate;

- (id)initWithDelegate:(id)arg0 uniqueID:(id)arg1;
- (void)didAgree:(id)arg0;
- (void)didDisagree:(id)arg0;
- (void)onCheckBoxValueChanged;
- (void)protocolAction:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
