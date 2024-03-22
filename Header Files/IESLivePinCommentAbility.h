//
//     Generated by private class-dump
//

@class HTSLiveApi, IESLiveEmojiTextParser, NSString;
@protocol IESLiveRoomService, IESLiveDIContext, IESLivePinCommentAbilityDelegate;

@interface IESLivePinCommentAbility : NSObject <IESLivePinCommentAbilityProtocol> {
    id<IESLivePinCommentAbilityDelegate> _delegate;
    id<IESLiveRoomService> _room;
    id<IESLiveDIContext> _context;
    HTSLiveApi *_api;
    IESLiveEmojiTextParser *_emojiTextParser;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveDIContext> context;
@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiTextParser;
@property (weak, nonatomic) id<IESLivePinCommentAbilityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomModel:(id)arg0 diContext:(id)arg1;
- (id)emojiTextParser;
- (void)setEmojiTextParser:(id)arg0;
- (void)updateNode:(id)arg0 withHighlightItem:(id)arg1;
- (id)fetchParamsWithNode:(id)arg0;
- (void)pinChatCommentNode:(id)arg0 actionType:(unsigned long long)arg1 finish:(id /* block */)arg2;
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
- (void)didClickedActionSheetItemWithMsgListNode:(id)arg0;
- (long long)duplicateId:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end