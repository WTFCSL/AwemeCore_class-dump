//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLiveCombineTuplePublisher : IESLivePublisher {
    unsigned long long _type;
    NSArray *_upstreamList;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *upstreamList;

- (void)subscribe:(id)arg0 bindingToSubscription:(id)arg1;
- (id)upstreamList;
- (id)initWithUpstreamList:(id)arg0 type:(unsigned long long)arg1;
- (void)setUpstreamList:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end
