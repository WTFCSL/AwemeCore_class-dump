//
//     Generated by private class-dump
//

@protocol IESGCPDIContext;

@interface IESGCPOpenEvaluationPublishViewMethodImpl : IESGCPOpenEvaluationPublishViewMethod {
    id<IESGCPDIContext> _currentDIContext;
}

@property (retain, nonatomic) id<IESGCPDIContext> currentDIContext;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)reportParams;
- (id)currentDIContext;
- (void)checkShowEvaluateDetailWithSuccessCompletion:(id /* block */)arg0 firstMakeCommentGuideModel:(id)arg1;
- (void)setCurrentDIContext:(id)arg0;
- (void).cxx_destruct;

@end
