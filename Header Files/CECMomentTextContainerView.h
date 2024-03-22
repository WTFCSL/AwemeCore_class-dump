//
//     Generated by private class-dump
//

@class CECMomentTextInfoView, CECMomentTextInputContainerView, NSString;
@protocol CECMomentTextContainerViewDelegate;

@interface CECMomentTextContainerView : UIView <CECMomentTextAreaDelegate> {
    id<CECMomentTextContainerViewDelegate> _delegate;
    CECMomentTextInputContainerView *_inputContainerView;
    CECMomentTextInfoView *_topInfoView;
}

@property (retain, nonatomic) CECMomentTextInfoView *topInfoView;
@property (weak, nonatomic) id<CECMomentTextContainerViewDelegate> delegate;
@property (retain, nonatomic) CECMomentTextInputContainerView *inputContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)inputContainerView;
- (void)setInputContainerView:(id)arg0;
- (void)textAreaDidBeginEditing:(id)arg0;
- (void)textAreaDidEndEditing:(id)arg0;
- (void)textAreaTextDidChange:(id)arg0;
- (void)toggleInfoLabel:(BOOL)arg0 animationDuration:(double)arg1;
- (void)cancelInputWithNeedClearText:(BOOL)arg0;
- (id)topInfoView;
- (double)contentViewBottomHeight;
- (void)setTopInfoView:(id)arg0;
- (void).cxx_destruct;
- (void)showKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end
