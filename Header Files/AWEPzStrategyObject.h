//
//     Generated by private class-dump
//

@class NSString, AWEPzStrategyConfig;
@protocol AWEPzStrategyProtocol;

@interface AWEPzStrategyObject : NSObject {
    BOOL _needConsumePzDBRecord;
    BOOL _canSubThreadExecute;
    id<AWEPzStrategyProtocol> _strategy;
    AWEPzStrategyConfig *_strategyConfig;
}

@property (retain, nonatomic) id<AWEPzStrategyProtocol> strategy;
@property (readonly, copy, nonatomic) NSString *strategyID;
@property (readonly, copy, nonatomic) NSString *strategyType;
@property (readonly, nonatomic) long long index;
@property (retain, nonatomic) AWEPzStrategyConfig *strategyConfig;
@property (nonatomic) BOOL needConsumePzDBRecord;
@property (nonatomic) BOOL canSubThreadExecute;

- (id)strategyConfig;
- (void)setStrategyConfig:(id)arg0;
- (id)strategyType;
- (id)strategyID;
- (BOOL)needConsumePzDBRecord;
- (BOOL)canSubThreadExecute;
- (void)setNeedConsumePzDBRecord:(BOOL)arg0;
- (void)setCanSubThreadExecute:(BOOL)arg0;
- (id)strategy;
- (void).cxx_destruct;
- (long long)index;
- (id)description;
- (void)setStrategy:(id)arg0;

@end
