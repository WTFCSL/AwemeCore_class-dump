//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPGetXplayResolutionInfoMethodImpl : IESGCPGetXplayResolutionInfoMethod <IESGCPXPlayGameActions> {
    id /* block */ _completion;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)_resultModelFromResolutionList:(id)arg0 curResolution:(id)arg1;
- (void)onXPlayGameStatusUpdate:(long long)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;

@end
