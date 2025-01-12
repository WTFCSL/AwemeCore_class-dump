//
//     Generated by private class-dump
//

@class UIColor, NSString, HTSEventContext, IESLivePlaybackComponentContext, IESLivePlaybackCommentPanelViewModel, IESLivePlaybackCommentConf, NSObject;
@protocol IESLiveEmojiTextParserAdapter;

@interface IESLivePlaybackCommentInputViewModel : NSObject {
    BOOL _canSend;
    BOOL _isCommentForbidden;
    IESLivePlaybackCommentConf *_conf;
    IESLivePlaybackComponentContext *_componentContext;
    HTSEventContext *_trackContext;
    IESLivePlaybackCommentPanelViewModel *_viewModel;
    unsigned long long _keyboard;
    NSString *_placeHolderLabelText;
    NSString *_plainText;
    NSString *_changeText;
    UIColor *_placeHolderLabelColor;
    NSObject<IESLiveEmojiTextParserAdapter> *_textParser;
}

@property (retain, nonatomic) IESLivePlaybackCommentConf *conf;
@property (nonatomic) BOOL isCommentForbidden;
@property (retain, nonatomic) NSObject<IESLiveEmojiTextParserAdapter> *textParser;
@property (nonatomic) BOOL canSend;
@property (copy, nonatomic) NSString *plainText;
@property (copy, nonatomic) NSString *placeHolderLabelText;
@property (copy, nonatomic) UIColor *placeHolderLabelColor;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLivePlaybackCommentPanelViewModel *viewModel;
@property (nonatomic) unsigned long long keyboard;
@property (copy, nonatomic) NSString *changeText;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)setConf:(id)arg0;
- (void)setTextParser:(id)arg0;
- (id)textParser;
- (id)extraTrackParams;
- (void)setupTextParser;
- (void)setPlaceHolderLabelText:(id)arg0;
- (void)setPlaceHolderLabelColor:(id)arg0;
- (id)initWithCommentConfig:(id)arg0;
- (void)forbiddenUser:(BOOL)arg0;
- (void)syncPlainText:(id)arg0;
- (id)plainTextFromEmoticonAttributedText:(id)arg0;
- (id)emoticonAttributedTextFromPlainText:(id)arg0;
- (void)trackerKeyboardButtonClicked;
- (id)placeHolderLabelText;
- (id)placeHolderLabelColor;
- (BOOL)isCommentForbidden;
- (void)setIsCommentForbidden:(BOOL)arg0;
- (void)trackerAtButtonClicked;
- (id)currentCommentTextColor;
- (unsigned long long)keyboard;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (BOOL)canSend;
- (id)viewModel;
- (void)dealloc;
- (void)setKeyboard:(unsigned long long)arg0;
- (id)plainText;
- (void)setPlainText:(id)arg0;
- (id)changeText;
- (void)setChangeText:(id)arg0;
- (id)conf;
- (void)setCanSend:(BOOL)arg0;

@end
