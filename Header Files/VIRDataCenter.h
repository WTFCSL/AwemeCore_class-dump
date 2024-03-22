//
//     Generated by private class-dump
//

@protocol AWELiveStrategyServiceAdapter;

@interface VIRDataCenter : NSObject {
    id<AWELiveStrategyServiceAdapter> _strategyService;
}

@property (retain, nonatomic) id<AWELiveStrategyServiceAdapter> strategyService;

+ (id)shareInstance;

- (void)batchCollectInformation:(id)arg0;
- (id)characterValueForKey:(id)arg0;
- (id)strategyService;
- (void)setStrategyService:(id)arg0;
- (void).cxx_destruct;

@end
