//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveInteractionModuleEmojiInterfaceAdapterImpl : IESLiveBaseAdapter <IESLiveInteractionModuleEmojiInterfaceAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)targetInstance;
- (BOOL)enableInteractGiftEmoji:(id)arg0;
- (void)sendInteractEmojiGift:(id)arg0 baseDir:(id)arg1 receivers:(id)arg2 effect:(id)arg3 from:(struct CGPoint { double x0; double x1; })arg4 startMP4Block:(id /* block */)arg5;
- (id)emojiContainerForUserID:(id)arg0;
- (void)handleInteractGiftPlayerHierarchy:(id)arg0;
- (void)multiVideo3DGiftdidFinish;
- (void)muteSound:(BOOL)arg0;
- (void)sendEmojiWithID:(id)arg0 type:(int)arg1 toUserID:(id)arg2 requestPage:(id)arg3 completion:(id /* block */)arg4;
- (void)sendInteractEmojiGift:(id)arg0 baseDir:(id)arg1 receivers:(id)arg2 effect:(id)arg3 from:(struct CGPoint { double x0; double x1; })arg4;

@end
