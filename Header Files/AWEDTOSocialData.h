//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOSocialData : MTLModel <MTLJSONSerializing> {
    BOOL _fakeDistributeCircle;
    long long _extraSocialExpressType;
    NSString *_deliveredMusicId;
    NSString *_groupType;
    NSString *_schoolId;
    long long _distributeCircle;
}

@property (nonatomic) long long extraSocialExpressType;
@property (copy, nonatomic) NSString *deliveredMusicId;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *schoolId;
@property (nonatomic) long long distributeCircle;
@property (nonatomic) BOOL fakeDistributeCircle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)extraSocialExpressType;
- (void)setExtraSocialExpressType:(long long)arg0;
- (id)deliveredMusicId;
- (void)setDeliveredMusicId:(id)arg0;
- (id)schoolId;
- (void)setSchoolId:(id)arg0;
- (long long)distributeCircle;
- (void)setDistributeCircle:(long long)arg0;
- (BOOL)fakeDistributeCircle;
- (void)setFakeDistributeCircle:(BOOL)arg0;
- (void).cxx_destruct;
- (id)groupType;
- (void)setGroupType:(id)arg0;

@end