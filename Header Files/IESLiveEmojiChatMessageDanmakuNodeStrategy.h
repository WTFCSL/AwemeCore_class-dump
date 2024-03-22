//
//     Generated by private class-dump
//

@class NSString, HTSLiveEmojiChatMessage;

@interface IESLiveEmojiChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy {
    HTSLiveEmojiChatMessage *_emojiChatMessage;
    NSString *_emojiImageURL;
}

@property (retain, nonatomic) HTSLiveEmojiChatMessage *emojiChatMessage;
@property (copy, nonatomic) NSString *emojiImageURL;

- (long long)buildingMode;
- (id)buildNodeBasePart;
- (void)AsyncBuildNode:(id /* block */)arg0;
- (id)emojiChatMessage;
- (id)emojiImageURL;
- (void)setEmojiImageURL:(id)arg0;
- (void)setEmojiChatMessage:(id)arg0;
- (BOOL)filter;
- (void).cxx_destruct;
- (id)buildNode;

@end
