//
//     Generated by private class-dump
//

@class NSString;

@interface SECRouteRulerPolicy : NSObject <SECRoutePolicyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryItemsWithDecoding:(id)arg0;
+ (void)initialize;

- (id)protect:(id)arg0;
- (id)riskLevelOf:(id)arg0;
- (id)executeRulerSource:(id)arg0 withTraffic:(id)arg1;
- (id)rulerParamsOfTrace:(id)arg0;

@end
