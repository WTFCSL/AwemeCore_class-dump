//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface AWEPOIRepeatEventRuleModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_timePeriod;
    NSArray *_blackList;
}

@property (retain, nonatomic) NSNumber *timePeriod;
@property (retain, nonatomic) NSArray *blackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)blackList;
- (void)setBlackList:(id)arg0;
- (void).cxx_destruct;
- (id)timePeriod;
- (void)setTimePeriod:(id)arg0;

@end