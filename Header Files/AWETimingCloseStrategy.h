//
//     Generated by private class-dump
//

@class NSString;

@interface AWETimingCloseStrategy : NSObject <AWEAntiAddictStrategy>

@property (readonly, copy, nonatomic) NSString *strategyName;
@property (readonly, nonatomic) long long triggerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)satisfiedWithPreparedData:(id)arg0;
- (id)getActionWithPreparedData:(id)arg0;
- (long long)triggerType;
- (id)strategyName;

@end
