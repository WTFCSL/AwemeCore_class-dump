//
//     Generated by private class-dump
//

@class NSString, BDPRevisitConditionTriggerData;

@interface BDPRevisitGuideCondition : BDPBasePluginModel {
    unsigned long long _type;
    NSString *_name;
    long long _priority;
    long long _status;
    long long _data;
    BDPRevisitConditionTriggerData *_triggerData;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long priority;
@property (nonatomic) long long status;
@property (nonatomic) long long data;
@property (retain, nonatomic) BDPRevisitConditionTriggerData *triggerData;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (long long)data;
- (void).cxx_destruct;
- (long long)status;
- (void)setData:(long long)arg0;
- (unsigned long long)type;
- (void)setPriority:(long long)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setStatus:(long long)arg0;
- (void)setName:(id)arg0;
- (long long)priority;
- (id)name;
- (id)triggerData;
- (void)setTriggerData:(id)arg0;

@end