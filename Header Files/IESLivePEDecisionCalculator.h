//
//     Generated by private class-dump
//

@class IESLiveThreadSafeDictionary;

@interface IESLivePEDecisionCalculator : NSObject {
    IESLiveThreadSafeDictionary *_functionDic;
}

@property (retain, nonatomic) IESLiveThreadSafeDictionary *functionDic;

+ (id)sharedInstance;

- (void)addOperator:(id)arg0 forNodeType:(long long)arg1 function:(id /* block */)arg2;
- (id)functionDic;
- (void)setupFunctionMap;
- (id /* block */)functionWithNodeType:(long long)arg0 andOperator:(id)arg1;
- (void)setFunctionDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
