//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareReflowStrategyIncentiveChat : NSObject <AWEShareReflowStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAvoidSamePageWithModel:(id)arg0;
- (BOOL)enableTransferDirectly;
- (BOOL)shouldDelayTokenFind;
- (void)transferWithModel:(id)arg0 params:(id)arg1 longURL:(id)arg2 tokenFromType:(long long)arg3;
- (void)configReflowCardWithModel:(id)arg0 tokenFromType:(long long)arg1 trackParams:(id)arg2 reportParams:(id)arg3 turnToShareBlock:(id /* block */)arg4 reshowCardViewBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)initWithModel:(id)arg0 longURL:(id)arg1;
- (id)configPrivateChatReflowViewWithModel:(id)arg0 inviterDevicePlatform:(id)arg1 secActivityInfo:(id)arg2;
- (id)configGroupChatReflowViewWithModel:(id)arg0 convShortID:(id)arg1;
- (id)currentPageReferString;
- (id)descriptionText;
- (id)tokenType;

@end
