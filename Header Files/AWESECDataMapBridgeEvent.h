//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWESECDataMapBridgeEvent : SECHybridPiperEvent {
    NSDictionary *_rulerParamsDict;
}

@property (copy, nonatomic) NSDictionary *rulerParamsDict;

- (id)rulerParamsDict;
- (id)dictionaryWithRuleEngineParams:(id)arg0;
- (void)setRulerParamsDict:(id)arg0;
- (id)initWithPiperContext:(id)arg0;
- (id)dictRepresentation;
- (void).cxx_destruct;
- (id)eventType;

@end