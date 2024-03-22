//
//     Generated by private class-dump
//

@class UILabel, ACCStickerContainerView, NSObject, AWEStoryTextImageModel, ACCRecorderTextModeGradientView, ACCAnimatedButton, UIView, NSString, AWEVideoPublishViewModel, ACCRecordTextModeColorManager, ACCTextStickerView, ACCRecordLayoutGuide, ACCTextStickerEditView;
@protocol ACCStickerLogger, ACCTextModeBackgroundManagerProtocol, ACCMultiStyleAlertProtocol;

@interface ACCRecorderTextModePreviewViewController : UIViewController <ACCStickerContainerDelegate> {
    BOOL _enableBack;
    id /* block */ _goNext;
    id /* block */ _close;
    id /* block */ _textViewDidApear;
    id /* block */ _onChangeColor;
    id /* block */ _onBeginEdit;
    id /* block */ _onEndEdit;
    id /* block */ _backToShootMode;
    id<ACCStickerLogger> _stickerLogger;
    ACCRecordLayoutGuide *_layoutGuide;
    AWEVideoPublishViewModel *_publishModel;
    id /* block */ _textDidChangeCallback;
    ACCAnimatedButton *_nextButton;
    UIView *_contentView;
    ACCAnimatedButton *_switchColorButton;
    ACCRecorderTextModeGradientView *_switchColorGradientView;
    ACCRecorderTextModeGradientView *_backgroundView;
    ACCStickerContainerView *_stickerContainerView;
    ACCTextStickerEditView *_textStickerEditView;
    ACCTextStickerView *_stickerView;
    UILabel *_textFunctionHintLabel;
    ACCAnimatedButton *_closeButton;
    NSObject<ACCMultiStyleAlertProtocol> *_backAlert;
    AWEStoryTextImageModel *_inputTextModel;
    ACCRecordTextModeColorManager *_colorManager;
    NSObject<ACCTextModeBackgroundManagerProtocol> *_backgroundManager;
    UILabel *_switchColorLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) ACCAnimatedButton *switchColorButton;
@property (retain, nonatomic) ACCRecorderTextModeGradientView *switchColorGradientView;
@property (retain, nonatomic) ACCRecorderTextModeGradientView *backgroundView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) ACCTextStickerEditView *textStickerEditView;
@property (weak, nonatomic) ACCTextStickerView *stickerView;
@property (retain, nonatomic) UILabel *textFunctionHintLabel;
@property (retain, nonatomic) ACCAnimatedButton *nextButton;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *backAlert;
@property (retain, nonatomic) AWEStoryTextImageModel *inputTextModel;
@property (retain, nonatomic) ACCRecordTextModeColorManager *colorManager;
@property (retain, nonatomic) NSObject<ACCTextModeBackgroundManagerProtocol> *backgroundManager;
@property (retain, nonatomic) UILabel *switchColorLabel;
@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ goNext;
@property (copy, nonatomic) id /* block */ close;
@property (copy, nonatomic) id /* block */ textViewDidApear;
@property (copy, nonatomic) id /* block */ onChangeColor;
@property (copy, nonatomic) id /* block */ onBeginEdit;
@property (copy, nonatomic) id /* block */ onEndEdit;
@property (copy, nonatomic) id /* block */ backToShootMode;
@property (retain, nonatomic) id<ACCStickerLogger> stickerLogger;
@property (retain, nonatomic) ACCRecordLayoutGuide *layoutGuide;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ textDidChangeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundManager;
- (void)refreshColor;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setClose:(id /* block */)arg0;
- (id /* block */)goNext;
- (void)setEnableBack:(BOOL)arg0;
- (BOOL)enableBack;
- (id)stickerContainerView;
- (void)setStickerContainerView:(id)arg0;
- (void)didClickCloseButton:(id)arg0;
- (void)stickerContainer:(id)arg0 gestureStarted:(id)arg1 onView:(id)arg2;
- (void)stickerContainer:(id)arg0 gestureEnded:(id)arg1 onView:(id)arg2;
- (BOOL)stickerContainerTapBlank:(id)arg0 gesture:(id)arg1;
- (id)backAlert;
- (void)setBackAlert:(id)arg0;
- (void)p_setupNotification;
- (void)editTextStickerView:(id)arg0;
- (BOOL)p_showBackAlertIfNeeded;
- (void)beginEditTextSticerIfNeeded;
- (id)initWithTextModel:(id)arg0 backgroundManager:(id)arg1;
- (id)colorManager;
- (id)initWithTextModel:(id)arg0 colorManager:(id)arg1;
- (void)setGoNext:(id /* block */)arg0;
- (void)setTextDidChangeCallback:(id /* block */)arg0;
- (void)setTextViewDidApear:(id /* block */)arg0;
- (void)setOnBeginEdit:(id /* block */)arg0;
- (void)setOnEndEdit:(id /* block */)arg0;
- (void)setOnChangeColor:(id /* block */)arg0;
- (void)setStickerLogger:(id)arg0;
- (void)setBackToShootMode:(id /* block */)arg0;
- (id)generateBackgroundImage;
- (void)setColorManager:(id)arg0;
- (void)setBackgroundManager:(id)arg0;
- (void)setupStickerContainer;
- (id)createListLabel;
- (id)switchColorButton;
- (void)setSwitchColorLabel:(id)arg0;
- (id)textFunctionHintLabel;
- (void)setupTextSticker;
- (void)didClickNextButton;
- (void)didClickBackButton:(id)arg0;
- (id)inputTextModel;
- (id)addTextWithTextInfo:(id)arg0 locationModel:(id)arg1;
- (id /* block */)textViewDidApear;
- (void)p_showSystemBackAlert;
- (void)p_exit:(BOOL)arg0;
- (id /* block */)backToShootMode;
- (id)newTextInfo;
- (id /* block */)onBeginEdit;
- (id)textStickerEditView;
- (id /* block */)textDidChangeCallback;
- (id)switchColorLabel;
- (id /* block */)onEndEdit;
- (id)stickerLogger;
- (id)configStickerView:(id)arg0 withConfig:(id)arg1 locationModel:(id)arg2;
- (id /* block */)onChangeColor;
- (id)switchColorGradientView;
- (void)p_handleKeyboardDidShow;
- (void)p_handleKeyboardWillHide;
- (void)p_retype;
- (void)setSwitchColorButton:(id)arg0;
- (void)setSwitchColorGradientView:(id)arg0;
- (void)setTextStickerEditView:(id)arg0;
- (void)setTextFunctionHintLabel:(id)arg0;
- (void)setInputTextModel:(id)arg0;
- (void)setLayoutGuide:(id)arg0;
- (id)layoutGuide;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id /* block */)close;
- (id)contentView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setBackgroundView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)stickerView;
- (void)setStickerView:(id)arg0;

@end