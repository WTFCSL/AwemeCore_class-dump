//
//     Generated by private class-dump
//

@class NSString;

@interface AFDCampaignScanFollowSettingsModel : MTLModel <MTLJSONSerializing> {
    NSString *_landingGuideToast;
    NSString *_cameraScanInToast;
    NSString *_followNewFriendToast;
}

@property (copy, nonatomic) NSString *landingGuideToast;
@property (copy, nonatomic) NSString *cameraScanInToast;
@property (copy, nonatomic) NSString *followNewFriendToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)followNewFriendToast;
- (id)landingGuideToast;
- (id)cameraScanInToast;
- (void)setLandingGuideToast:(id)arg0;
- (void)setCameraScanInToast:(id)arg0;
- (void)setFollowNewFriendToast:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
