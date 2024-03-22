//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPublishVideoSyncParametersResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasClaimOriginPermission;
    BOOL _isVideoExclusive;
    BOOL _hasRewardProjectAuthorBenefit;
}

@property (nonatomic) BOOL hasClaimOriginPermission;
@property (nonatomic) BOOL isVideoExclusive;
@property (nonatomic) BOOL hasRewardProjectAuthorBenefit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasClaimOriginPermission;
- (void)setHasClaimOriginPermission:(BOOL)arg0;
- (BOOL)isVideoExclusive;
- (void)setIsVideoExclusive:(BOOL)arg0;
- (BOOL)hasRewardProjectAuthorBenefit;
- (void)setHasRewardProjectAuthorBenefit:(BOOL)arg0;

@end
