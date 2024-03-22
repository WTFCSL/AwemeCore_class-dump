//
//     Generated by private class-dump
//

@interface BDHMXPerformanceAggregationUtility : NSObject

+ (id)extractDataTypeFromURLString:(id)arg0;
+ (BOOL)isRequestJSB:(id)arg0;
+ (id)simplifyResourceDic:(id)arg0 mainRes:(BOOL)arg1 isLynx:(BOOL)arg2;
+ (BOOL)isSubResource:(id)arg0 isLynx:(BOOL)arg1;
+ (void)assemblePerformanceInfo:(id)arg0 perfAggregation:(id)arg1 navigationId:(id)arg2 isLynx:(BOOL)arg3;
+ (void)collectRequestInfoIfNeeded:(id)arg0 perfAggregation:(id)arg1 navigationId:(id)arg2 event:(id)arg3;
+ (void)collectResourceInfoIfNeeded:(id)arg0 perfAggregation:(id)arg1 navigationId:(id)arg2 event:(id)arg3 isLynx:(BOOL)arg4;
+ (void)collectWebPerformanceInfoIfNeeded:(id)arg0 perfAggregation:(id)arg1 navigationId:(id)arg2;
+ (void)collectLynxPerformanceInfoIfNeeded:(id)arg0 perfAggregation:(id)arg1 navigationId:(id)arg2;

@end