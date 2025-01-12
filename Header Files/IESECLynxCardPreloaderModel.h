//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;
@protocol IESECListCardsContextDelegate;

@interface IESECLynxCardPreloaderModel : IESECListKitCardPreloaderModel {
    BOOL _useForest;
    NSDictionary *_globalProps;
    NSDictionary *_rootGlobalProps;
    long long _threadStrategy;
    NSArray *_bridgeInstances;
    NSArray *_xbridgeInstances;
    id<IESECListCardsContextDelegate> _listCardsContextDelegate;
}

@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *rootGlobalProps;
@property (nonatomic) BOOL useForest;
@property (nonatomic) long long threadStrategy;
@property (retain, nonatomic) NSArray *bridgeInstances;
@property (retain, nonatomic) NSArray *xbridgeInstances;
@property (weak, nonatomic) id<IESECListCardsContextDelegate> listCardsContextDelegate;

- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)setUseForest:(BOOL)arg0;
- (long long)threadStrategy;
- (void)setThreadStrategy:(long long)arg0;
- (BOOL)useForest;
- (void)setListCardsContextDelegate:(id)arg0;
- (void)setRootGlobalProps:(id)arg0;
- (id)rootGlobalProps;
- (id)xbridgeInstances;
- (void)setXbridgeInstances:(id)arg0;
- (id)bridgeInstances;
- (void)setBridgeInstances:(id)arg0;
- (id)listCardsContextDelegate;
- (void).cxx_destruct;

@end
