//
//     Generated by private class-dump
//

@class NSDictionary, HTSLiveStrategyRule;
@protocol IESLivePEDecisionObserver;

@interface IESLivePEDecisionWorkflow : NSObject {
    id<IESLivePEDecisionObserver> _delegate;
    NSDictionary *_featureSet;
    HTSLiveStrategyRule *_strategy;
    NSDictionary *_trigger;
}

@property (weak, nonatomic) id<IESLivePEDecisionObserver> delegate;
@property (retain, nonatomic) NSDictionary *featureSet;
@property (retain, nonatomic) HTSLiveStrategyRule *strategy;
@property (retain, nonatomic) NSDictionary *trigger;

- (void)workflowCompleteWith:(id)arg0;
- (void)executeAstRules:(id)arg0 withFeatureSet:(id)arg1 completion:(id /* block */)arg2;
- (id)calculate:(id)arg0 withFeatureSet:(id)arg1;
- (void)calculator:(id /* block */)arg0 withUnaryNode:(id)arg1 nodeQueue:(id)arg2;
- (void)calculator:(id /* block */)arg0 withBinaryNode:(id)arg1 nodeQueue:(id)arg2;
- (void)calculator:(id /* block */)arg0 withConditionNode:(id)arg1 nodeQueue:(id)arg2;
- (void)calculator:(id /* block */)arg0 withCallNode:(id)arg1 nodeQueue:(id)arg2;
- (id)featureSet;
- (id)strategy;
- (void)execute;
- (void).cxx_destruct;
- (id)trigger;
- (void)setTrigger:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setStrategy:(id)arg0;
- (void)setFeatureSet:(id)arg0;

@end
