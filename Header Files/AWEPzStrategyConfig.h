//
//     Generated by private class-dump
//

@class NSString, AWEPzStrategyModel;
@protocol AWEPzStrategyAbility;

@interface AWEPzStrategyConfig : NSObject <AWEPzStrategyConfigProtocol> {
    AWEPzStrategyModel *_model;
    id<AWEPzStrategyAbility> _ability;
}

@property (retain, nonatomic) AWEPzStrategyModel *model;
@property (retain, nonatomic) id<AWEPzStrategyAbility> ability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAbility:(id)arg0;
- (id)ability;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)description;

@end
