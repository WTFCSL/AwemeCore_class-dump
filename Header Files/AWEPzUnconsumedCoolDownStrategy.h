//
//     Generated by private class-dump
//

@class NSString, AWEPzUnconsumedCoolDownStrategyDataModel;
@protocol AWEPzStrategyModelProtocol;

@interface AWEPzUnconsumedCoolDownStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol> {
    id<AWEPzStrategyModelProtocol> _configModel;
    AWEPzUnconsumedCoolDownStrategyDataModel *_dataModel;
}

@property (retain, nonatomic) id<AWEPzStrategyModelProtocol> configModel;
@property (retain, nonatomic) AWEPzUnconsumedCoolDownStrategyDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)setupWithModel:(id)arg0;
- (BOOL)verify:(id)arg0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (id)dataModel;
- (void)setDataModel:(id)arg0;

@end
