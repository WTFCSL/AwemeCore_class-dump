//
//     Generated by private class-dump
//

@class UIView, NSString, IESLivePlaybackCommentInputViewModel, IESLivePlaybackCommentConf, UIButton, IESLivePlaybackInputTextView, IESLivePlaybackCommentPanelViewModel, UILabel;
@protocol IESLiveLanguageService, NSObject;

@interface IESLivePlaybackCommentInputView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate, IESLivePlaybackCommentInputProtocol> {
    BOOL showBarrageComment;
    BOOL _cancelUndoManagerFix;
    id /* block */ didClickCommentSend;
    id /* block */ onDismiss;
    UILabel *placeHolderLabel;
    UIView *_commentTextBgView;
    IESLivePlaybackInputTextView *_commentTextView;
    IESLivePlaybackCommentInputViewModel *_inputViewModel;
    IESLivePlaybackCommentPanelViewModel *_panelViewModel;
    IESLivePlaybackCommentConf *_conf;
    id<IESLiveLanguageService> _languageService;
    long long _maxChatInputCount;
    UIButton *_sendBtn;
    UIButton *_emoticonBtn;
    id<NSObject> _textObserver;
    double _minCommentTextHeight;
    double _maxCommentTextHeight;
    UIView *_commentTextLeftSideView;
    struct _NSRange { unsigned long long location; unsigned long long length; } _insertRange;
}

@property (retain, nonatomic) UIView *commentTextBgView;
@property (retain, nonatomic) IESLivePlaybackInputTextView *commentTextView;
@property (retain, nonatomic) IESLivePlaybackCommentInputViewModel *inputViewModel;
@property (retain, nonatomic) IESLivePlaybackCommentPanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLivePlaybackCommentConf *conf;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (nonatomic) long long maxChatInputCount;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) UIButton *emoticonBtn;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } insertRange;
@property (retain, nonatomic) id<NSObject> textObserver;
@property (nonatomic) BOOL cancelUndoManagerFix;
@property (nonatomic) double minCommentTextHeight;
@property (nonatomic) double maxCommentTextHeight;
@property (retain, nonatomic) UIView *commentTextLeftSideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showBarrageComment;
@property (copy, nonatomic) id /* block */ didClickCommentSend;
@property (copy, nonatomic) id /* block */ onDismiss;
@property (retain, nonatomic) UILabel *placeHolderLabel;

- (void)setConf:(id)arg0;
- (void)bindViewModel;
- (void)disableLocalizations;
- (BOOL)textViewIsFirstResponder;
- (id)panelViewModel;
- (id)placeHolderLabel;
- (void)setPlaceHolderLabel:(id)arg0;
- (id)emoticonBtn;
- (id)sendBtn;
- (void)setEmoticonBtn:(id)arg0;
- (void)setSendBtn:(id)arg0;
- (void)refreshLayout:(long long)arg0;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (void)setPanelViewModel:(id)arg0;
- (id)commentTextView;
- (void)setCommentTextView:(id)arg0;
- (void)updateTextField:(id)arg0;
- (void)addTextViewObserver;
- (BOOL)checkTextViewIfReachMaxLengthWithInsertText:(id)arg0 replaceLength:(long long)arg1;
- (long long)lengthOfString:(id)arg0;
- (void)didClickKeyboardReturnKey;
- (id)inputViewModel;
- (void)resignKeyboardResponder;
- (void)clearCommentInput;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realInputArea;
- (id)textObserver;
- (void)setShowBarrageComment:(BOOL)arg0;
- (void)emoticonBtnUpdateForPortrait;
- (void)setupCommentTextView;
- (void)setupSubViewsForNew;
- (void)setupSubViewsConstranitForNew;
- (id)commentTextBgView;
- (double)minCommentTextHeight;
- (void)setCommentTextBgView:(id)arg0;
- (id)commentTextLeftSideView;
- (void)textViewTextDidChange:(id)arg0;
- (void)setTextObserver:(id)arg0;
- (BOOL)checkAnimatedEmojiOverMaxCount:(id)arg0;
- (void)textViewSizeNeedUpdate;
- (void)emoticonBtnUpdateForLandscape;
- (void)setMinCommentTextHeight:(double)arg0;
- (void)setMaxCommentTextHeight:(double)arg0;
- (id /* block */)didClickCommentSend;
- (long long)maxChatInputCount;
- (id)hudMessageWithMaxInputCount:(long long)arg0;
- (BOOL)cancelUndoManagerFix;
- (double)maxCommentTextHeight;
- (void)setCommentTextLeftSideView:(id)arg0;
- (void)disableUseEmotion;
- (BOOL)showBarrageComment;
- (void)setDidClickCommentSend:(id /* block */)arg0;
- (void)refreshLayoutForLandscape;
- (void)refreshLayoutForPortrait;
- (void)setInputViewModel:(id)arg0;
- (void)setMaxChatInputCount:(long long)arg0;
- (void)setCancelUndoManagerFix:(BOOL)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)showKeyboard;
- (id)initWithViewModel:(id)arg0;
- (void)dealloc;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })insertRange;
- (void)setInsertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)buildView;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg0;
- (id)conf;

@end
