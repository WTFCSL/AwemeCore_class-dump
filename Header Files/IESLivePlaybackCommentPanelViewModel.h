//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, NSArray, IESLivePlaybackCommentInputViewModel, UIView, UITextRange, IESLivePlaybackComponentContext, UIColor;
@protocol IESLivePlaybackAdapter;

@interface IESLivePlaybackCommentPanelViewModel : NSObject {
    BOOL _shouldSend;
    BOOL _shouldDelete;
    BOOL _shouldDismiss;
    BOOL _willShowEmoticonOrColor;
    IESLivePlaybackComponentContext *_componentContext;
    HTSEventContext *_trackContext;
    NSString *_placeHolderLabelText;
    UIColor *_placeHolderLabelColor;
    IESLivePlaybackCommentInputViewModel *_inputViewModel;
    NSArray *_emoticonModelPages;
    unsigned long long _currentEmojiType;
    NSString *_storedComment;
    NSString *_insertEmoticon;
    long long _orientation;
    long long _configSelectedIndex;
    unsigned long long _panelSourceType;
    UITextRange *_selectedTextRange;
    id<IESLivePlaybackAdapter> _emoticonResource;
    UIView *_tipView;
    struct CGSize { double width; double height; } _inputAreaSize;
}

@property (retain, nonatomic) IESLivePlaybackCommentInputViewModel *inputViewModel;
@property (retain, nonatomic) UITextRange *selectedTextRange;
@property (retain, nonatomic) NSArray *emoticonModelPages;
@property (retain, nonatomic) id<IESLivePlaybackAdapter> emoticonResource;
@property (weak, nonatomic) UIView *tipView;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, copy, nonatomic) NSString *placeHolderLabelText;
@property (readonly, copy, nonatomic) UIColor *placeHolderLabelColor;
@property (nonatomic) unsigned long long currentEmojiType;
@property (copy, nonatomic) NSString *storedComment;
@property (copy, nonatomic) NSString *insertEmoticon;
@property (nonatomic) BOOL shouldSend;
@property (nonatomic) BOOL shouldDelete;
@property (nonatomic) BOOL shouldDismiss;
@property (nonatomic) BOOL willShowEmoticonOrColor;
@property (nonatomic) long long orientation;
@property (nonatomic) long long configSelectedIndex;
@property (nonatomic) struct CGSize { double width; double height; } inputAreaSize;
@property (copy, nonatomic) NSString *commentDraft;
@property (nonatomic) unsigned long long panelSourceType;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)extraTrackParams;
- (id)commentDraft;
- (void)setCommentDraft:(id)arg0;
- (id)emoticonResource;
- (void)setEmoticonResource:(id)arg0;
- (void)trackEmojiDidSelected:(id)arg0 idx:(long long)arg1 tab:(id)arg2;
- (id)placeHolderLabelText;
- (id)placeHolderLabelColor;
- (id)inputViewModel;
- (id)emoticonModelPages;
- (void)emoticonView:(id)arg0 shouldSendEmoticon:(id)arg1;
- (void)emoticonView:(id)arg0 didDeleteEmoticon:(id)arg1;
- (void)setEmoticonModelPages:(id)arg0;
- (void)emoticonView:(id)arg0 didSelectEmoticon:(id)arg1;
- (void)clearStoredComment;
- (void)systemKeyBoardShow;
- (void)setInputAreaSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)willShowEmoticonOrColor;
- (id)storedComment;
- (id)initWithCommentConf:(id)arg0;
- (void)setPanelSourceType:(unsigned long long)arg0;
- (void)forbiddenUserComment:(BOOL)arg0;
- (BOOL)isEmoticonEnabled;
- (void)setInputViewModel:(id)arg0;
- (unsigned long long)panelSourceType;
- (void)setStoredComment:(id)arg0;
- (void)setWillShowEmoticonOrColor:(BOOL)arg0;
- (void)commentTrackerSubpanelShowWithType:(unsigned long long)arg0;
- (void)setShouldDelete:(BOOL)arg0;
- (void)setInsertEmoticon:(id)arg0;
- (void)setShouldSend:(BOOL)arg0;
- (void)updateTextViewSelectRange:(id)arg0;
- (void)emocticonKeyBoardShow;
- (id)colorsFromString:(id)arg0;
- (struct CGSize { double x0; double x1; })caculateCellSizeWithIsLandscape:(BOOL)arg0 isPad:(BOOL)arg1;
- (unsigned long long)currentEmojiType;
- (void)setCurrentEmojiType:(unsigned long long)arg0;
- (id)insertEmoticon;
- (BOOL)shouldDelete;
- (long long)configSelectedIndex;
- (void)setConfigSelectedIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })inputAreaSize;
- (id)selectedTextRange;
- (void).cxx_destruct;
- (long long)orientation;
- (BOOL)shouldDismiss;
- (void)setShouldDismiss:(BOOL)arg0;
- (void)setOrientation:(long long)arg0;
- (void)setSelectedTextRange:(id)arg0;
- (void)dealloc;
- (BOOL)shouldSend;
- (id)tipView;
- (void)setTipView:(id)arg0;

@end