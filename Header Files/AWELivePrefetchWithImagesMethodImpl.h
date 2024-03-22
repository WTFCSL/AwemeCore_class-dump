//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface AWELivePrefetchWithImagesMethodImpl : AWELivePrefetchWithImagesMethod <IESLivePiperProtocol> {
    NSDictionary *_result;
    id /* block */ _completion;
}

@property (copy, nonatomic) NSDictionary *result;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hybridContainer;
- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)registerHandlerBlock:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)registerNewHandlerBlock:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)invokeEvent:(id)arg0 params:(id)arg1;
- (id)modeToDict:(id)arg0;
- (void)setResult:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)result;
- (unsigned long long)type;

@end
