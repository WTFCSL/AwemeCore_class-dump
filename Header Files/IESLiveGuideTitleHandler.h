//
//     Generated by private class-dump
//

@class IESLivePlaceholderTextView, NSString, IESLiveGuideTitleTextField, IESLiveGuideContentPanelModel, UIView;
@protocol IESLiveGuideTitleView, IESLiveTextCorrection, IESLiveGuideTitleHandlerDelegate;

@interface IESLiveGuideTitleHandler : NSObject <UITextViewDelegate, UITextFieldDelegate, IESLiveGuideTitleHandlerDelegate> {
    BOOL _useNewStyle;
    BOOL _isInToolBar;
    UIView<IESLiveGuideTitleView> *_liveTitleView;
    NSString *_roomTitle;
    id<IESLiveGuideTitleHandlerDelegate> _delegate;
    IESLivePlaceholderTextView *_liveTitleTextView;
    IESLiveGuideTitleTextField *_liveTitleTextField;
    IESLiveGuideContentPanelModel *_viewModel;
    id<IESLiveTextCorrection> _textCorrection;
    NSString *_disableEditTitleToast;
}

@property (retain, nonatomic) IESLivePlaceholderTextView *liveTitleTextView;
@property (retain, nonatomic) IESLiveGuideTitleTextField *liveTitleTextField;
@property (retain, nonatomic) IESLiveGuideContentPanelModel *viewModel;
@property (retain, nonatomic) id<IESLiveTextCorrection> textCorrection;
@property (retain, nonatomic) NSString *disableEditTitleToast;
@property (retain, nonatomic) UIView<IESLiveGuideTitleView> *liveTitleView;
@property (retain, nonatomic) NSString *roomTitle;
@property (weak, nonatomic) id<IESLiveGuideTitleHandlerDelegate> delegate;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL isInToolBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })titleTextSize;
- (void)textFiledEditChanged:(id)arg0;
- (id)roomTitle;
- (void)setRoomTitle:(id)arg0;
- (BOOL)isInToolBar;
- (void)setIsInToolBar:(BOOL)arg0;
- (id)liveTitleView;
- (void)updateWithOpenLiveModel:(id)arg0;
- (void)setLiveTitleView:(id)arg0;
- (id)liveTitleTextView;
- (id)liveTitleTextField;
- (id)disableEditTitleToast;
- (void)setDisableEditTitleToast:(id)arg0;
- (void)tapOnDisableEditStatus:(id)arg0;
- (id)textCorrection;
- (long long)getTitleLengthLimit;
- (id)toolBarImageName;
- (void)setLiveTitleTextView:(id)arg0;
- (void)setLiveTitleTextField:(id)arg0;
- (void)setTextCorrection:(id)arg0;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)textViewDidBeginEditing:(id)arg0;
- (void)textViewDidEndEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)updateWithViewModel:(id)arg0;
- (void)changeText;

@end