//
//     Generated by private class-dump
//

@class AWEXTabChannelCombinedBubbleModel;
@protocol AWEXTabBaseChannelControllerProtocol;

@interface AWEXTabChannelCachedBubbleModel : NSObject {
    BOOL _isShown;
    AWEXTabChannelCombinedBubbleModel *_cachedModel;
    id /* block */ _completion;
    id<AWEXTabBaseChannelControllerProtocol> _channel;
}

@property (nonatomic) BOOL isShown;
@property (retain, nonatomic) AWEXTabChannelCombinedBubbleModel *cachedModel;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id<AWEXTabBaseChannelControllerProtocol> channel;

- (id)channel;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (int)sessionID;
- (BOOL)isShown;
- (id)cachedModel;
- (void)setCachedModel:(id)arg0;
- (void)setIsShown:(BOOL)arg0;

@end
