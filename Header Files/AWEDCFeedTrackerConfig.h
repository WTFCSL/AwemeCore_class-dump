//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDCFeedTrackerConfig : AWEDCFeedBaseConfig {
    BOOL _enableDefaultTracker;
    NSString *_enterFrom;
    id /* block */ _commonExtraParamsBlock;
    id /* block */ _hookEventParamsBlock;
    id /* block */ _enterInnerFlowExtraParamsBlock;
    id /* block */ _innerFlowExtraParamsBlock;
}

@property (nonatomic) BOOL enableDefaultTracker;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ commonExtraParamsBlock;
@property (copy, nonatomic) id /* block */ hookEventParamsBlock;
@property (copy, nonatomic) id /* block */ enterInnerFlowExtraParamsBlock;
@property (copy, nonatomic) id /* block */ innerFlowExtraParamsBlock;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setEnableDefaultTracker:(BOOL)arg0;
- (void)setHookEventParamsBlock:(id /* block */)arg0;
- (void)setEnterInnerFlowExtraParamsBlock:(id /* block */)arg0;
- (void)setupDefaultConfig;
- (BOOL)enableDefaultTracker;
- (id /* block */)commonExtraParamsBlock;
- (void)setCommonExtraParamsBlock:(id /* block */)arg0;
- (id /* block */)hookEventParamsBlock;
- (id /* block */)enterInnerFlowExtraParamsBlock;
- (id /* block */)innerFlowExtraParamsBlock;
- (void)setInnerFlowExtraParamsBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end
