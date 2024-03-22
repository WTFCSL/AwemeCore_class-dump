//
//     Generated by private class-dump
//

@class NSString, AWEPzBlackListStrategyDataModel;

@interface AWEPzBlackListStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol> {
    AWEPzBlackListStrategyDataModel *_dataModel;
}

@property (retain, nonatomic) AWEPzBlackListStrategyDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithModel:(id)arg0;
- (BOOL)verify:(id)arg0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (id)dataModel;
- (void)setDataModel:(id)arg0;

@end
