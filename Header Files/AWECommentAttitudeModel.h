//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWECommentAttitudeModel : AWEBaseApiModel {
    BOOL _hasAttitude;
    NSString *_attitudeType;
    NSDictionary *_attitudeAuditMap;
    NSDictionary *_attitudeCountMap;
}

@property (nonatomic) BOOL hasAttitude;
@property (copy, nonatomic) NSString *attitudeType;
@property (copy, nonatomic) NSDictionary *attitudeAuditMap;
@property (copy, nonatomic) NSDictionary *attitudeCountMap;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAttitudeType:(id)arg0;
- (void)setAttitudeCountMap:(id)arg0;
- (void)setAttitudeAuditMap:(id)arg0;
- (id)attitudeAuditMap;
- (id)attitudeType;
- (id)attitudeCountMap;
- (void).cxx_destruct;
- (BOOL)hasAttitude;
- (void)setHasAttitude:(BOOL)arg0;

@end