//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol IESLiveSubscriber;

@interface IESLiveCombineTupleInnerSubscriber : NSObject <IESLiveSubscriber> {
    unsigned long long _type;
    IESLiveCombineTupleInnerSubscriber *_proxySubscriber;
    NSArray *_otherSubscribers;
    id<IESLiveSubscriber> _downtream;
    id _lastValue;
    unsigned long long _index;
    unsigned long long _triggerValue;
}

@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) IESLiveCombineTupleInnerSubscriber *proxySubscriber;
@property (retain, nonatomic) NSArray *otherSubscribers;
@property (retain, nonatomic) id<IESLiveSubscriber> downtream;
@property (retain, nonatomic) id lastValue;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long triggerValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveValue:(id)arg0;
- (void)receiveDisposal;
- (id)downtream;
- (id)otherSubscribers;
- (id)proxySubscriber;
- (void)setDowntream:(id)arg0;
- (void)setOtherSubscribers:(id)arg0;
- (void)setProxySubscriber:(id)arg0;
- (void)setIndex:(unsigned long long)arg0;
- (void)setTriggerValue:(unsigned long long)arg0;
- (id)initWithDownstream:(id)arg0;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)arg0;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (unsigned long long)index;
- (unsigned long long)triggerValue;
- (id)lastValue;
- (void)setLastValue:(id)arg0;

@end
