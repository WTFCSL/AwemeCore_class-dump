//
//     Generated by private class-dump
//

@class IESLiveInteractViewTable, NSString, IESLiveInteractionEmojiStore;

@interface IESLiveInteractEmojiToCommand : IESLiveInteractEmojiBaseCommand {
    BOOL _flyMicRandomProbabilityDeliveryEnable;
    NSString *_emojiID;
    IESLiveInteractionEmojiStore *_emojiStore;
}

@property (class, readonly, nonatomic) IESLiveInteractViewTable *micSeatTable;
@property (class, readonly, nonatomic) IESLiveInteractViewTable *reshapeSeats;

@property (nonatomic) BOOL flyMicRandomProbabilityDeliveryEnable;
@property (copy, nonatomic) NSString *emojiID;
@property (weak, nonatomic) IESLiveInteractionEmojiStore *emojiStore;

+ (id)micSeatTable;
+ (id)reshapeSeats;

- (void)didSetAttachingDIContext;
- (id)emojiID;
- (void)setEmojiID:(id)arg0;
- (void)dispatch:(id)arg0 effect:(id)arg1 to:(id)arg2;
- (void)setFlyMicRandomProbabilityDeliveryEnable:(BOOL)arg0;
- (void)micSeatAnimation:(id)arg0 effect:(id)arg1 user:(id)arg2 completed:(id /* block */)arg3;
- (id)emojiStore;
- (BOOL)isMicSeatReshapeEnabled:(id)arg0;
- (void)micSeatReshapeAnimation:(id)arg0;
- (BOOL)flyMicRandomProbabilityDeliveryEnable;
- (void)setEmojiStore:(id)arg0;
- (void).cxx_destruct;
- (void)removeAnimation:(id)arg0;

@end
