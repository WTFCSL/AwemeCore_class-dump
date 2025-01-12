//
//     Generated by private class-dump
//

@class UIButton, NSString, IESLiveCommentWidgetReplyMessageView, UIView, IESLiveCommentWidgetQuickEmojiView, IESLiveCommentIntentionsView;
@protocol IESLivePrivilegeDanmakuSwitchProtocol, IESLiveCommentPanelDelegate;

@interface IESLiveCommentPanelNormalImp : IESLiveCommentPanelBaseImp <IESLiveCommentIntentionsViewDelegate, IESLiveCommentWidgetReplyViewOperationDelegate> {
    BOOL _topContainerIsFold;
    BOOL _didPaidDanmakuTabShow;
    BOOL _didIntentionsShow;
    id<IESLiveCommentPanelDelegate> _delegate;
    UIView *_foldableTopContainer;
    IESLiveCommentIntentionsView *_intentionsView;
    UIView<IESLivePrivilegeDanmakuSwitchProtocol> *_innerDanmakuSwitch;
    IESLiveCommentWidgetReplyMessageView *_replyMessageView;
    UIButton *_sendBtn;
    IESLiveCommentWidgetQuickEmojiView *_quickEmojiView;
    UIView *_paidDanmakuContainer;
}

@property (retain, nonatomic) UIView *foldableTopContainer;
@property (retain, nonatomic) IESLiveCommentIntentionsView *intentionsView;
@property (nonatomic) BOOL topContainerIsFold;
@property (retain, nonatomic) UIView<IESLivePrivilegeDanmakuSwitchProtocol> *innerDanmakuSwitch;
@property (retain, nonatomic) IESLiveCommentWidgetReplyMessageView *replyMessageView;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) IESLiveCommentWidgetQuickEmojiView *quickEmojiView;
@property (retain, nonatomic) UIView *paidDanmakuContainer;
@property (nonatomic) BOOL didPaidDanmakuTabShow;
@property (nonatomic) BOOL didIntentionsShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainers;
- (void)setupInputView;
- (void)inputView:(id)arg0 textDidChange:(id)arg1;
- (id)sendBtn;
- (void)setSendBtn:(id)arg0;
- (void)animateDismissPanelWithCompletion:(id /* block */)arg0;
- (void)showCommentPopupViewWithContent:(id)arg0 preferredHeight:(double)arg1;
- (void)intentionsDidDisplayWithCount:(long long)arg0;
- (void)didSelectFusionEmojiWithEmoticonModel:(id)arg0;
- (void)didSelectIntentionEntryWithModel:(id)arg0;
- (void)clickPaidDanmakuEntry;
- (void)setupPaidDanmakuView;
- (double)getInputViewExtraLeftSpace;
- (void)danmakuCancelAction;
- (void)paidDanmakuViewDidShow:(BOOL)arg0;
- (void)heightChangeWithOffset:(double)arg0;
- (void)detailAreaChange:(unsigned long long)arg0 withDetailView:(id)arg1;
- (void)inputView:(id)arg0 inputTextReachLimit:(long long)arg1;
- (void)inputView:(id)arg0 preInput:(id)arg1 currentText:(id)arg2;
- (void)expandEntryView:(id)arg0 foldStatusWillChangeTo:(BOOL)arg1;
- (void)setupQuickReplyContentView;
- (void)setupPaidDanmakuSwitch;
- (void)setupCommentExpandEntrysView;
- (double)getExpandDetailAreaContainerHeight;
- (void)setFoldableTopContainer:(id)arg0;
- (id)foldableTopContainer;
- (void)setTopContainerIsFold:(BOOL)arg0;
- (BOOL)canShowReplyMessageViewWithModel:(id)arg0;
- (void)setReplyMessageView:(id)arg0;
- (id)replyMessageView;
- (void)setupPopupView;
- (void)setupIntentionsView;
- (void)setupCommentWidgetQuickEmojiView;
- (void)setupSendBtn;
- (void)setupSeparator;
- (id)intentionsView;
- (BOOL)skipOnceIntentionsForCommentEnterFrom:(long long)arg0;
- (void)setIntentionsView:(id)arg0;
- (void)setQuickEmojiView:(id)arg0;
- (id)quickEmojiView;
- (void)setInnerDanmakuSwitch:(id)arg0;
- (void)barrageSwitchChanged:(BOOL)arg0;
- (void)setPaidDanmakuContainer:(id)arg0;
- (void)showSendBtn:(BOOL)arg0;
- (id)paidDanmakuContainer;
- (void)showPaidDanmakuContainer:(BOOL)arg0;
- (id)innerDanmakuSwitch;
- (BOOL)didPaidDanmakuTabShow;
- (void)cleanReplyMessageInfoAndView;
- (void)setDidIntentionsShow:(BOOL)arg0;
- (BOOL)topContainerIsFold;
- (BOOL)didIntentionsShow;
- (void)foldableTopContainerHeightChangeFromHeight:(double)arg0 toHeight:(double)arg1;
- (void)setDidPaidDanmakuTabShow:(BOOL)arg0;
- (void)replyViewDidClose:(id)arg0;
- (void)replyView:(id)arg0 heightChangeFrom:(double)arg1 To:(double)arg2;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)arg0;
- (void)sendAction:(id)arg0;
- (id)delegate;
- (void)setupWidgets;
- (void)setDelegate:(id)arg0;
- (void)setupConfig;

@end
