//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPOISearchLifeGovernNoticeModel : MTLModel <MTLJSONSerializing> {
    NSString *_violationTimeUtc;
    NSString *_violationReason;
    NSString *_punishStartTimeUtc;
    NSString *_punishEndTimeUtc;
    NSString *_punishmentId;
    long long _source;
    NSString *_violationDetailSchema;
}

@property (copy, nonatomic) NSString *violationTimeUtc;
@property (copy, nonatomic) NSString *violationReason;
@property (copy, nonatomic) NSString *punishStartTimeUtc;
@property (copy, nonatomic) NSString *punishEndTimeUtc;
@property (copy, nonatomic) NSString *punishmentId;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *violationDetailSchema;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)violationTimeUtc;
- (void)setViolationTimeUtc:(id)arg0;
- (id)violationReason;
- (void)setViolationReason:(id)arg0;
- (id)punishStartTimeUtc;
- (void)setPunishStartTimeUtc:(id)arg0;
- (id)punishEndTimeUtc;
- (void)setPunishEndTimeUtc:(id)arg0;
- (id)punishmentId;
- (void)setPunishmentId:(id)arg0;
- (id)violationDetailSchema;
- (void)setViolationDetailSchema:(id)arg0;
- (long long)source;
- (void).cxx_destruct;
- (void)setSource:(long long)arg0;

@end
