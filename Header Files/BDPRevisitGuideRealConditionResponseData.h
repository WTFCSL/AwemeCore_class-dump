//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDPRevisitGuideRealConditionResponseData : BDPBasePluginModel {
    long long _next_request_interval;
    NSDictionary *_condition;
}

@property (nonatomic) long long next_request_interval;
@property (copy, nonatomic) NSDictionary *condition;

- (long long)next_request_interval;
- (void)setNext_request_interval:(long long)arg0;
- (id)condition;
- (void).cxx_destruct;
- (void)setCondition:(id)arg0;

@end
