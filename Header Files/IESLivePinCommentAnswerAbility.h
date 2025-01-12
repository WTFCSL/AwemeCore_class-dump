//
//     Generated by private class-dump
//

@class NSString, IESLiveEmojiTextParser, HTSLiveApi, IESLivePinCommentNode;
@protocol IESLiveRoomService, IESLiveDIContext, IESLivePinCommentAbilityDelegate;

@interface IESLivePinCommentAnswerAbility : NSObject <HTSLiveMessageSubscriber, IESLivePinCommentAbilityProtocol> {
    BOOL _replyAndPinAB;
    BOOL _isFromSpecialScreen;
    id<IESLivePinCommentAbilityDelegate> _delegate;
    id<IESLiveRoomService> _room;
    id<IESLiveDIContext> _context;
    HTSLiveApi *_api;
    IESLivePinCommentNode *_currentNodeToReply;
    unsigned long long _currentActionType;
    IESLiveEmojiTextParser *_emojiTextParser;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveDIContext> context;
@property (retain, nonatomic) HTSLiveApi *api;
@property (nonatomic) BOOL replyAndPinAB;
@property (retain, nonatomic) IESLivePinCommentNode *currentNodeToReply;
@property (nonatomic) unsigned long long currentActionType;
@property (nonatomic) BOOL isFromSpecialScreen;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiTextParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLivePinCommentAbilityDelegate> delegate;

- (void)setCurrentActionType:(unsigned long long)arg0;
- (unsigned long long)currentActionType;
- (id)initWithRoomModel:(id)arg0 diContext:(id)arg1;
- (id)emojiTextParser;
- (void)setEmojiTextParser:(id)arg0;
- (void)updateNode:(id)arg0 withHighlightItem:(id)arg1;
- (id)createNodeWithMsgListNode:(id)arg0;
- (BOOL)hasPinAuth;
- (void)pinCommentNode:(id)arg0;
- (void)handleHighlightItem:(id)arg0 withNode:(id)arg1;
- (id)pinCommonFromHighlightItem:(id)arg0;
- (void)unPinCommentNode:(id)arg0;
- (double)preferHeightWithNode:(id)arg0;
- (BOOL)isDuplicateNode:(id)arg0 withOtherNode:(id)arg1;
- (long long)itemId:(id)arg0;
- (void)injectTrackEventParams:(id)arg0 withNode:(id)arg1 forType:(long long)arg2;
- (id)duplicateToastText;
- (BOOL)isValidHighlightItem:(id)arg0;
- (void)didClickedActionSheetItemWithMsgListNode:(id)arg0;
- (void)didClickedOnPinWithNode:(id)arg0;
- (BOOL)replyAndPinAB;
- (id)fetchAnswerParamsWithNode:(id)arg0;
- (void)pinQACommentNode:(id)arg0 actionType:(unsigned long long)arg1 finish:(id /* block */)arg2;
- (id)currentNodeToReply;
- (void)setCurrentNodeToReply:(id)arg0;
- (void)setIsFromSpecialScreen:(BOOL)arg0;
- (void)editPinnedCommentNode:(id)arg0;
- (void)replyAndPinMessage:(id)arg0;
- (BOOL)isLastestItem:(id)arg0;
- (void)replyCommentAndPin:(id)arg0 fromPin:(BOOL)arg1;
- (void)setReplyAndPinAB:(BOOL)arg0;
- (BOOL)isFromSpecialScreen;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setup;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
