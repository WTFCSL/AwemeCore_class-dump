//
//     Generated by private class-dump
//

@class UINavigationController, NSArray;

@interface FlowKit.MessagingViewController : FlowCommon.FlowBaseViewController <TTAccountMulticastProtocol, UIViewControllerTransitioningDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWERouterViewControllerProtocol, AWEIMInAppPushProtocol> {
    void /* unknown type, empty encoding */ _loginProvider;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _messageAdapater;
    void /* unknown type, empty encoding */ _debugService;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _voiceCallProvider;
    void /* unknown type, empty encoding */ currentKeyboardDidHidden;
    void /* unknown type, empty encoding */ startMeasure;
    void /* unknown type, empty encoding */ AutoOpenKeyboardAndNotFullyShown;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ displayUnreadCount;
    void /* unknown type, empty encoding */ collectionViewLayout;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ backgroundImageView;
    void /* unknown type, empty encoding */ streamingMessageTimer;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ loadingViewHeight;
    void /* unknown type, empty encoding */ navigationBarHeight;
    void /* unknown type, empty encoding */ isViewFirstAppeared;
    void /* unknown type, empty encoding */ fastFinalMessages;
    void /* unknown type, empty encoding */ trackTimestampMap;
    void /* unknown type, empty encoding */ didAppear;
    void /* unknown type, empty encoding */ selectionFeedbackGenerator;
    void /* unknown type, empty encoding */ messageReader;
    void /* unknown type, empty encoding */ shouldOpenKeyboardWhenAppear;
    void /* unknown type, empty encoding */ contentSizeObservation;
    void /* unknown type, empty encoding */ lastHoveredMessageId;
    void /* unknown type, empty encoding */ hoveringMessageId;
    void /* unknown type, empty encoding */ lastShowActionMessageId;
    void /* unknown type, empty encoding */ createDate;
    void /* unknown type, empty encoding */ firstSendMessageText;
    void /* unknown type, empty encoding */ insertSuggestModeEnable;
    void /* unknown type, empty encoding */ insertSuggestPlaceholderEnable;
    void /* unknown type, empty encoding */ videoSuggestContent;
    void /* unknown type, empty encoding */ videoSuggestData;
    void /* unknown type, empty encoding */ boundsSubject;
    void /* unknown type, empty encoding */ ttsEnableSubject;
    void /* unknown type, empty encoding */ viewAppearedSubject;
    void /* unknown type, empty encoding */ inChatPage;
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ isFromUG;
    void /* unknown type, empty encoding */ botPosition;
    void /* unknown type, empty encoding */ leaveMethod;
    void /* unknown type, empty encoding */ storedBotRequestId;
    void /* unknown type, empty encoding */ storedBotRecommendFrom;
    void /* unknown type, empty encoding */ trends;
    void /* unknown type, empty encoding */ hasShowTrendInAlwaysTriggerTime;
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ inMessageClearing;
    void /* unknown type, empty encoding */ afterClearMessages;
    void /* unknown type, empty encoding */ question;
    void /* unknown type, empty encoding */ localQuestionMessage;
    void /* unknown type, empty encoding */ pagerContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imagePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ disclaimerButton;
    void /* unknown type, empty encoding */ scrollToBottomButton;
    void /* unknown type, empty encoding */ messageInputView;
    void /* unknown type, empty encoding */ maskView;
    void /* unknown type, empty encoding */ keyboardAccessoryView;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ cancelSelectedTap;
    void /* unknown type, empty encoding */ messageLimitedTap;
    void /* unknown type, empty encoding */ dataController;
    void /* unknown type, empty encoding */ _storedConverstaionId;
    void /* unknown type, empty encoding */ messageTextCellLayoutManager;
    void /* unknown type, empty encoding */ messageLabelCellLayoutManager;
    void /* unknown type, empty encoding */ messageWebViewCellLayoutManager;
    void /* unknown type, empty encoding */ messageLynxCardCellLayoutManager;
    void /* unknown type, empty encoding */ bigAvatarViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topInsetWhenShowBigAvatar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bigAvatarView;
    void /* unknown type, empty encoding */ isAfterClearHistoryMessages;
    void /* unknown type, empty encoding */ enterTime;
    void /* unknown type, empty encoding */ currentMessageReaderStatus;
    void /* unknown type, empty encoding */ selectedReeditMessage;
    void /* unknown type, empty encoding */ isFocusingOnReeditMessage;
    void /* unknown type, empty encoding */ imageUploadCancellable;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ keyboardFrame;
    void /* unknown type, empty encoding */ voiceInputViewModel;
    void /* unknown type, empty encoding */ _botAdapter;
    void /* unknown type, empty encoding */ hidesBottomBarWhenPushedValue;
    void /* unknown type, empty encoding */ hasHandledFastHistory;
    void /* unknown type, empty encoding */ timeline;
    void /* unknown type, empty encoding */ messageTextCellRegistration;
    void /* unknown type, empty encoding */ dataSource;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void)onAccountLogin;
- (void)onAccountLogout;
- (id)interactionControllerForDismissal:(id)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)arg2;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceivePress:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)removeAllMessage;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg0;
- (void)textViewDidEndEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)flow_trackParametersWith:(id)arg0;
- (void)handleApplicationNotification:(id)arg0;
- (void)handleAccountWillLogout;
- (void)countryRestricted;
- (void)messageStatusUpdateTimerFired;
- (void)handleKeyboardNotification:(id)arg0;
- (void)clickScrollToBottomBtn:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)canShowInnerPush;
- (void)disclaimerButtonAction:(id)arg0;
- (void)sendButtonAction:(id)arg0;
- (void)handleKeyboardHide:(id)arg0;
- (void)handleCancelSelectedText:(id)arg0;
- (void)messageLimitedTouch:(id)arg0;
- (void)keyCommandAction:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)navigationController;
- (id)initWithCoder:(id)arg0;
- (id)keyCommands;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)hidesBottomBarWhenPushed;
- (void)setHidesBottomBarWhenPushed:(BOOL)arg0;

@end