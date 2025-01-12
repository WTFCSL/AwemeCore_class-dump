//
//     Generated by private class-dump
//

@class NSString, AWEShareTokenHandlerResponseModel;

@interface AWEShareReflowStrategyFeedShare : NSObject <AWEShareReflowStrategy> {
    AWEShareTokenHandlerResponseModel *_model;
    NSString *_longURLString;
}

@property (readonly, nonatomic) AWEShareTokenHandlerResponseModel *model;
@property (readonly, copy, nonatomic) NSString *longURLString;
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
- (BOOL)__supportReflow;
- (id)longURLString;
- (void).cxx_destruct;
- (id)model;
- (id)descriptionText;
- (id)tokenType;

@end
