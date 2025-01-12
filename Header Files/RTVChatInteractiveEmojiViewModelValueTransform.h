//
//     Generated by private class-dump
//

@protocol RTVInteractionConfigureManagerInterface, RxInjector, RTVEmoticonDataManagerInterface;

@interface RTVChatInteractiveEmojiViewModelValueTransform : NSValueTransformer {
    id<RxInjector> _injector;
    id<RTVEmoticonDataManagerInterface> _emoticonDataManager;
    id<RTVInteractionConfigureManagerInterface> _configManager;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configManager;

- (void)rxAwakeFromPropertyInjection;
- (id)emoticonDataManager;
- (void).cxx_destruct;
- (id)injector;
- (id)transformedValue:(id)arg0;
- (id)configManager;

@end
