//
//     Generated by private class-dump
//

@class AWESignatureEditCollectionViewController, AWEUILoadingView, UILabel, NSDictionary, AWESignatureEditSpecialPersonViewController, AWEProtectNickNameEntranceView, AWEProfileEditItemModel, UIButton, UIView, AWERecommendAliasView, NSString, AWESignatureEditManager, AWEProfileFrequencyInfoModel, AWEUserModel, AWEProfileEditChoiceView, UIImage;

@interface AWEProfileEditTextViewController : AWETextEditViewController <UITextFieldDelegate, UITextViewDelegate, NSLayoutManagerDelegate, AWESignatureEditCollectionDelegate, AWEProfileEditTextViewControllerProtocol> {
    BOOL _enableSignatureOptimization;
    BOOL _confirmed;
    BOOL _fromEditor;
    BOOL _hasChangedChoice;
    BOOL _isCreatingACCRichTextEditor;
    id /* block */ completionBlock;
    NSDictionary *_logExtraDict;
    NSDictionary *_pageFromDict;
    AWEUserModel *_user;
    AWEProfileEditItemModel *_itemModel;
    AWERecommendAliasView *_aliasView;
    AWEUILoadingView *_loadingView;
    UIButton *_checkBoxButton;
    UIImage *_avatarImage;
    UIButton *_rightButton;
    AWEProfileFrequencyInfoModel *_frequencyInfo;
    AWESignatureEditCollectionViewController *_signatureCollectionVC;
    AWESignatureEditManager *_signatureEditManager;
    UIView *_topAlertView;
    AWEProfileEditChoiceView *_choiceView;
    NSString *_selectedText;
    AWESignatureEditSpecialPersonViewController *_signatureEditSpecialPersonViewController;
    UILabel *_numberTextLabel;
    AWEProtectNickNameEntranceView *_protectNickNameView;
}

@property (retain, nonatomic) UIButton *checkBoxButton;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) UIButton *rightButton;
@property (nonatomic) BOOL enableSignatureOptimization;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) BOOL fromEditor;
@property (retain, nonatomic) AWEProfileFrequencyInfoModel *frequencyInfo;
@property (retain, nonatomic) AWESignatureEditCollectionViewController *signatureCollectionVC;
@property (retain, nonatomic) AWESignatureEditManager *signatureEditManager;
@property (retain, nonatomic) UIView *topAlertView;
@property (retain, nonatomic) AWEProfileEditChoiceView *choiceView;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) BOOL hasChangedChoice;
@property (retain, nonatomic) AWESignatureEditSpecialPersonViewController *signatureEditSpecialPersonViewController;
@property (retain, nonatomic) UILabel *numberTextLabel;
@property (nonatomic) BOOL isCreatingACCRichTextEditor;
@property (retain, nonatomic) AWEProtectNickNameEntranceView *protectNickNameView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *pageFromDict;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEProfileEditItemModel *itemModel;
@property (retain, nonatomic) AWERecommendAliasView *aliasView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly, nonatomic) BOOL initiallySelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)setTipLabelForContentTextView;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (void)deleteButtonClicked;
- (void)editTextFieldDidChange:(id)arg0;
- (void)editTextViewDidChange:(id)arg0;
- (void)idCopyButtonClicked;
- (BOOL)enableSignatureOptimization;
- (id)frequencyInfo;
- (void)setFrequencyInfo:(id)arg0;
- (long long)maxTextLength;
- (id)initWithEditType:(long long)arg0 user:(id)arg1;
- (unsigned long long)textEditStyle;
- (id)preTitleWithType;
- (id)numberWithTypeAndLength:(long long)arg0;
- (id)navStringWithType;
- (void)submitChanges:(id)arg0;
- (id)pageFromDict;
- (void)setTipLabelForContentTextViewWithMaxLength:(long long)arg0;
- (unsigned long long)nicknameTextEditStyle;
- (void)setPageFromDict:(id)arg0;
- (id)checkBoxButton;
- (void)setCheckBoxButton:(id)arg0;
- (id)topAlertView;
- (void)setTopAlertView:(id)arg0;
- (unsigned long long)initializeTextEditStyle;
- (void)updateCompanyNickNameTipsIfNeeded;
- (BOOL)initiallySelected;
- (BOOL)p_isOptimizingSignature;
- (void)setEnableSignatureOptimization:(BOOL)arg0;
- (id)tipWithType;
- (BOOL)enableSignatureRichText;
- (void)p_showStoryPubishView;
- (void)showAliasBubble;
- (id)signatureCollectionVC;
- (void)updateUIWithChildViewHeight:(double)arg0;
- (id)signatureEditManager;
- (void)switchToChoiceView;
- (void)handleCertificationStatusDidChangedNotification:(id)arg0;
- (void)addRightNavBarButton;
- (void)p_requestProfileFrequencyInfo;
- (BOOL)enableShowSpecialPerson;
- (id)signatureEditSpecialPersonViewController;
- (id)numberTextLabel;
- (void)p_configSignatureEditSpecialPersonViewController;
- (BOOL)enableCompanySignatureDaily;
- (void)onRightTapped;
- (void)p_finishChoosing;
- (void)setHasChangedChoice:(BOOL)arg0;
- (void)setChoiceView:(id)arg0;
- (id)choiceView;
- (void)p_refreshUIForChoiceMode;
- (void)saveButtonClickedWithCompletion:(id /* block */)arg0;
- (void)saveSignatureChange;
- (BOOL)isCreatingACCRichTextEditor;
- (void)setIsCreatingACCRichTextEditor:(BOOL)arg0;
- (void)jumpToACCRichTextEditorWithPublishButtonTitle:(id)arg0 shouldSaveSignature:(BOOL)arg1;
- (void)saveAliasWithContent:(id)arg0;
- (void)submitChanges:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)eventTrack4SignatureRiskInfoWithEnterMethod:(id)arg0 text:(id)arg1 isSave:(BOOL)arg2;
- (BOOL)fromEditor;
- (id)copyToastText;
- (void)p_updateStoryView:(BOOL)arg0;
- (BOOL)p_shouldEnableSaveChangeButtonWithNewSignature:(id)arg0 oldSignature:(id)arg1;
- (id)aliasView;
- (void)p_showNoticeBar;
- (void)p_constraintChoiceSubviews;
- (BOOL)hasChangedChoice;
- (void)p_updateFrequencyInfo:(id)arg0 error:(id)arg1;
- (id)tipWithTypeFromSetting;
- (id)p_getCurrentProfilePromptModelWithType;
- (BOOL)shouldShowProtectNickNameEntrance;
- (void)showProtectNickNameEntrance;
- (void)updateEditViewWithString:(id)arg0 style:(unsigned long long)arg1 model:(id)arg2 completion:(id /* block */)arg3;
- (void)setTipLabelForRichTextContentTextViewWithMaxLength:(long long)arg0;
- (void)presentSpecialPersonNumberTextLabelWithString:(id)arg0 textColor:(id)arg1;
- (id)configNormalHTMLStringToWebViewWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (id)configMentionHTMLStringToWebViewWithExtra:(id)arg0;
- (id)configHTMLStringToWebView;
- (id)protectNickNameView;
- (void)assignTextViewFirstResponder;
- (void)resignTextViewFirstResponder;
- (void)showACCRichTextEditorWithPublishButtonTitle:(id)arg0 shouldSaveSignature:(BOOL)arg1;
- (id)p_filterBlankLines:(id)arg0;
- (void)setAliasView:(id)arg0;
- (void)setFromEditor:(BOOL)arg0;
- (void)setSignatureCollectionVC:(id)arg0;
- (void)setSignatureEditManager:(id)arg0;
- (void)setSignatureEditSpecialPersonViewController:(id)arg0;
- (void)setNumberTextLabel:(id)arg0;
- (void)setProtectNickNameView:(id)arg0;
- (void)setUser:(id)arg0;
- (void)setConfirmed:(BOOL)arg0;
- (id)rightButton;
- (id)user;
- (id)selectedText;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setRightButton:(id)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (BOOL)confirmed;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)hasContent;
- (void)setSelectedText:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end