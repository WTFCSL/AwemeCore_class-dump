//
//     Generated by private class-dump
//

@class DYLoginNextActionButton, AWECreateSubAccountDetailViewConfig, UIImage, NSString, DYUserProtocolView, UIButton, UITextField, AWENewLoginButton, UILabel;
@protocol AWECreateSubAccountDetailViewDelegate;

@interface AWECreateSubAccountDetailBaseView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate, AWECreateSubAccountDetailViewProtocol> {
    id<AWECreateSubAccountDetailViewDelegate> _delegate;
    DYLoginNextActionButton *_finishButton;
    AWENewLoginButton *_avatarButton;
    UILabel *_avatarHintLabel;
    UITextField *_nameTextField;
    UILabel *_errorTipLabel;
    UIButton *_cleanNameButton;
    UILabel *_nameTextLabel;
    DYUserProtocolView *_protocolView;
    AWECreateSubAccountDetailViewConfig *_config;
    UIImage *_defaultAvatarImage;
    UILabel *_phoneTextLabel;
}

@property (retain, nonatomic) AWECreateSubAccountDetailViewConfig *config;
@property (retain, nonatomic) UIImage *defaultAvatarImage;
@property (retain, nonatomic) UILabel *phoneTextLabel;
@property (retain, nonatomic) DYLoginNextActionButton *finishButton;
@property (retain, nonatomic) AWENewLoginButton *avatarButton;
@property (retain, nonatomic) UILabel *avatarHintLabel;
@property (retain, nonatomic) UITextField *nameTextField;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) UIButton *cleanNameButton;
@property (retain, nonatomic) UILabel *nameTextLabel;
@property (retain, nonatomic) DYUserProtocolView *protocolView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECreateSubAccountDetailViewDelegate> delegate;

- (id)defaultAvatarImage;
- (id)protocolView;
- (void)setProtocolView:(id)arg0;
- (void)setupGestureRecognizer;
- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg0;
- (void)stopLoaingWithError:(id)arg0;
- (id)avatarHintLabel;
- (void)endTheEditor;
- (id)nameTextLabel;
- (id)phoneTextLabel;
- (id)cleanNameButton;
- (void)dismissKeyboard:(id)arg0;
- (void)nameTextFieldChanged;
- (void)nameTextFieldChanged:(id)arg0;
- (void)avatarButtonTapped;
- (void)cleanTextFieldAction;
- (void)finishButtonTappped;
- (void)updateAvatarWith:(id)arg0;
- (void)updateWithCurrentName:(id)arg0 subName:(id)arg1 phoneNumber:(id)arg2;
- (void)setAvatarHintLabel:(id)arg0;
- (void)setCleanNameButton:(id)arg0;
- (void)setNameTextLabel:(id)arg0;
- (void)setDefaultAvatarImage:(id)arg0;
- (void)setPhoneTextLabel:(id)arg0;
- (void)handleError:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)config;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)initWithConfig:(id)arg0;
- (void)submit;
- (id)delegate;
- (BOOL)becomeFirstResponder;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)setDelegate:(id)arg0;
- (void)setupSubviews;
- (void)hideError;
- (void)showError;
- (id)nameTextField;
- (void)setNameTextField:(id)arg0;
- (id)finishButton;
- (void)setFinishButton:(id)arg0;
- (id)avatarButton;
- (void)setAvatarButton:(id)arg0;

@end
