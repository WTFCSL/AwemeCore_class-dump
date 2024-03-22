//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, IESLiveCommentStructureContent, NSAttributedString, NSNumber;

@interface IESLiveCommentContext : NSObject {
    BOOL _disableTrackSendSuccess;
    BOOL _isQuickComment;
    int _screenChatStyle;
    long long _contextType;
    long long _commentType;
    long long _enterFrom;
    long long _draftSource;
    id _sendObject;
    NSString *_plainText;
    NSAttributedString *_displayedText;
    long long _currentState;
    NSMutableDictionary *_trackParams;
    NSString *_voiceToTextResult;
    IESLiveCommentStructureContent *_structureContent;
    long long _inputToSendDuration;
    NSString *_interactiveEmojiDisplayName;
    long long _emojiID;
    NSNumber *_price;
    NSNumber *_publicScreenID;
    unsigned long long _publicScreenType;
    NSString *_replyAndPinMessageId;
    id /* block */ _finishBlock;
    NSString *_originComment;
    id _unusedCommentIntentionsData;
    NSMutableDictionary *_extraDataDic;
    NSString *_contextId;
    double _contextStartTime;
    double _currentStateTime;
}

@property (copy, nonatomic) NSString *contextId;
@property (nonatomic) double contextStartTime;
@property (nonatomic) double currentStateTime;
@property (nonatomic) long long contextType;
@property (nonatomic) long long commentType;
@property (nonatomic) long long enterFrom;
@property (nonatomic) long long draftSource;
@property (retain, nonatomic) id sendObject;
@property (copy, nonatomic) NSString *plainText;
@property (retain, nonatomic) NSAttributedString *displayedText;
@property (nonatomic) BOOL disableTrackSendSuccess;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (copy, nonatomic) NSString *voiceToTextResult;
@property (retain, nonatomic) IESLiveCommentStructureContent *structureContent;
@property (nonatomic) long long inputToSendDuration;
@property (copy, nonatomic) NSString *interactiveEmojiDisplayName;
@property (nonatomic) long long emojiID;
@property (retain, nonatomic) NSNumber *price;
@property (nonatomic) int screenChatStyle;
@property (retain, nonatomic) NSNumber *publicScreenID;
@property (nonatomic) unsigned long long publicScreenType;
@property (nonatomic) BOOL isQuickComment;
@property (copy, nonatomic) NSString *replyAndPinMessageId;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSString *originComment;
@property (retain, nonatomic) id unusedCommentIntentionsData;
@property (retain, nonatomic) NSMutableDictionary *extraDataDic;

+ (id)enterFromStringWithEnum:(long long)arg0;
+ (long long)stateScoreWithEnum:(long long)arg0;
+ (id)commentTypeStringWithEnum:(long long)arg0;
+ (id)stateStringWithEnum:(long long)arg0;

- (void)setEnterFrom:(long long)arg0;
- (long long)enterFrom;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setCommentType:(long long)arg0;
- (long long)draftSource;
- (void)setSendObject:(id)arg0;
- (id)sendObject;
- (id)publicScreenID;
- (void)setPublicScreenID:(id)arg0;
- (id)structureContent;
- (long long)emojiID;
- (id)interactiveEmojiDisplayName;
- (id)initWithState:(long long)arg0 enterFrom:(long long)arg1 type:(long long)arg2;
- (id)extraDataDic;
- (void)setPublicScreenType:(unsigned long long)arg0;
- (void)setReplyAndPinMessageId:(id)arg0;
- (void)setOriginComment:(id)arg0;
- (void)setDraftSource:(long long)arg0;
- (void)setIsQuickComment:(BOOL)arg0;
- (void)setEmojiID:(long long)arg0;
- (void)setInteractiveEmojiDisplayName:(id)arg0;
- (unsigned long long)publicScreenType;
- (void)setUnusedCommentIntentionsData:(id)arg0;
- (void)setStructureContent:(id)arg0;
- (int)screenChatStyle;
- (id)unusedCommentIntentionsData;
- (id)voiceToTextResult;
- (id)originComment;
- (BOOL)disableTrackSendSuccess;
- (BOOL)isQuickComment;
- (long long)inputToSendDuration;
- (id)replyAndPinMessageId;
- (void)setCurrentStateTime:(double)arg0;
- (void)monitorCommentUserAction;
- (void)logStateChange;
- (double)currentStateTime;
- (double)contextStartTime;
- (void)setDisableTrackSendSuccess:(BOOL)arg0;
- (void)setVoiceToTextResult:(id)arg0;
- (void)setInputToSendDuration:(long long)arg0;
- (void)setScreenChatStyle:(int)arg0;
- (void)setExtraDataDic:(id)arg0;
- (void)setContextStartTime:(double)arg0;
- (id)price;
- (void)setContextType:(long long)arg0;
- (long long)contextType;
- (void)setCurrentState:(long long)arg0;
- (void)setContextId:(id)arg0;
- (id)displayedText;
- (void).cxx_destruct;
- (long long)currentState;
- (id)contextId;
- (void)dealloc;
- (void)setPrice:(id)arg0;
- (void)setDisplayedText:(id)arg0;
- (long long)commentType;
- (id)plainText;
- (void)setPlainText:(id)arg0;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;

@end