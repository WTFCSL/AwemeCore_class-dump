//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIView, UIViewController;
@protocol LSIMInputVCDelegate, AWEIMPOIInputViewControllerProtocol;

@interface LSIMInputVCImpl : NSObject <LSIMInputVCProtocol, AWEIMPOIInputViewControllerDelegate> {
    id<LSIMInputVCDelegate> _inputVCDelegate;
    UIViewController<AWEIMPOIInputViewControllerProtocol> *_inputVC;
}

@property (retain, nonatomic) UIViewController<AWEIMPOIInputViewControllerProtocol> *inputVC;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *textView;
@property (readonly, copy, nonatomic) NSString *currentText;
@property (readonly, nonatomic) long long currentInputType;
@property (weak, nonatomic) id<LSIMInputVCDelegate> inputVCDelegate;
@property (copy, nonatomic) NSDictionary *adParams;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL notNeedLeftButtons;
@property (nonatomic) BOOL needDefaultEmotionIconPanelOnly;
@property (nonatomic) BOOL panelUseLocalConfigOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)inputViewTypeWithAWEInputType:(long long)arg0;

- (id)adParams;
- (void)setAdParams:(id)arg0;
- (void)inputViewController:(id)arg0 growingTextViewDidChange:(id)arg1;
- (void)inputViewControllerDidChangeHeight:(id)arg0;
- (double)defaultInputHeight;
- (void)syncRefreshSubviewsFrame;
- (void)setNotNeedLeftButtons:(BOOL)arg0;
- (void)setNeedDefaultEmotionIconPanelOnly:(BOOL)arg0;
- (void)setPanelUseLocalConfigOnly:(BOOL)arg0;
- (void)setInputVCDelegate:(id)arg0;
- (void)hideKeyboardByUser:(BOOL)arg0;
- (void)didSendContent:(id)arg0 textView:(id)arg1 userInfo:(id)arg2 customToast:(id)arg3 trackParams:(id)arg4;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 inputViewType:(long long)arg1 oldInputViewType:(long long)arg2;
- (void)onLifePhotoButtonOnChatPanelClicked;
- (void)onLifeCameraButtonOnChatPanelClicked;
- (void)onLifeArticlesButtonOnChatPanelClicked;
- (void)onLifeOrdersButtonOnChatPanelClicked;
- (id)inputVCDelegate;
- (BOOL)notNeedLeftButtons;
- (BOOL)needDefaultEmotionIconPanelOnly;
- (BOOL)panelUseLocalConfigOnly;
- (id)initWithWithFunctions:(id)arg0;
- (id)textView;
- (long long)currentInputType;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)setMaxLength:(long long)arg0;
- (long long)maxLength;
- (void)clearContent;
- (id)view;
- (void)setInputVC:(id)arg0;
- (id)inputVC;
- (id)currentText;

@end
