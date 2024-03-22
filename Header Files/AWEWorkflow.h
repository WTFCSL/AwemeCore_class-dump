//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEWorkflowStep, NSMutableArray, AWEDLMSession;

@interface AWEWorkflow : AWEWorkflowStep {
    BOOL _isFlowStarted;
    id /* block */ _completion;
    id /* block */ _preStepBlock;
    NSMutableArray *_pushSteps;
    NSMutableDictionary *_flowStore;
    AWEDLMSession *_linkSession;
}

@property (retain, nonatomic) NSMutableArray *pushSteps;
@property (readonly, nonatomic) AWEWorkflowStep *currentStep;
@property (nonatomic) BOOL isFlowStarted;
@property (retain, nonatomic) NSMutableDictionary *flowStore;
@property (retain, nonatomic) AWEDLMSession *linkSession;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ preStepBlock;

+ (id)workflowFromStep:(id)arg0;

- (void)onStep:(id)arg0 linkSession:(id)arg1;
- (void)setPreStepBlock:(id /* block */)arg0;
- (id)initWithStoreValue:(id)arg0 linkSession:(id)arg1;
- (id)pushSteps;
- (BOOL)isFlowStarted;
- (void)setIsFlowStarted:(BOOL)arg0;
- (id /* block */)preStepBlock;
- (id)flowStore;
- (id)linkSession;
- (void)setupObservation;
- (void)completeCurrentStep;
- (void)waitStep:(id)arg0;
- (void)setPushSteps:(id)arg0;
- (void)setFlowStore:(id)arg0;
- (void)setLinkSession:(id)arg0;
- (void)next;
- (id)currentStep;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)stopAll;
- (void)addStep:(id)arg0;
- (void)addSteps:(id)arg0;

@end
