//
//     Generated by private class-dump
//

@interface LynxAnimaXMonitor : NSObject

+ (id)sharedInstance;

- (void)reportErrorWithCategory:(id)arg0 metric:(id)arg1;
- (void)reportErrorEvent:(int)arg0 params:(id)arg1;
- (void)reportErrorWithCategory:(id)arg0;
- (void)reportErrorWithMetric:(id)arg0;

@end