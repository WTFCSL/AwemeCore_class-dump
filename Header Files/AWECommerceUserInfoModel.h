//
//     Generated by private class-dump
//

@class AWECommerceLinkUserInfoModel, NSArray, NSString;

@interface AWECommerceUserInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _showStarAtlasGuide;
    BOOL _hasAdsEntry;
    BOOL _canAuthAuctionAdVideo;
    BOOL _isAdPartner;
    BOOL _adAuthorizationEnabled;
    BOOL _adRevenueSharing;
    long long _starAtlasType;
    AWECommerceLinkUserInfoModel *_linkUserInfo;
    long long _authVideoSettingType;
    NSArray *_adRevenueRits;
}

@property (nonatomic) long long starAtlasType;
@property (nonatomic) BOOL showStarAtlasGuide;
@property (retain, nonatomic) AWECommerceLinkUserInfoModel *linkUserInfo;
@property (nonatomic) BOOL hasAdsEntry;
@property (nonatomic) long long authVideoSettingType;
@property (nonatomic) BOOL canAuthAuctionAdVideo;
@property (nonatomic) BOOL isAdPartner;
@property (nonatomic, getter=isAdAuthorizationEnabled) BOOL adAuthorizationEnabled;
@property (nonatomic) BOOL adRevenueSharing;
@property (copy, nonatomic) NSArray *adRevenueRits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)starAtlasTypeJSONTransformer;
+ (id)linkUserInfoJSONTransformer;
+ (id)authVideoSettingTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)starAtlasType;
- (void)setStarAtlasType:(long long)arg0;
- (BOOL)hasAdsEntry;
- (id)adRevenueRits;
- (BOOL)shouldRequestAdsInProfile;
- (BOOL)showStarAtlasGuide;
- (void)setShowStarAtlasGuide:(BOOL)arg0;
- (id)linkUserInfo;
- (void)setLinkUserInfo:(id)arg0;
- (void)setHasAdsEntry:(BOOL)arg0;
- (long long)authVideoSettingType;
- (void)setAuthVideoSettingType:(long long)arg0;
- (BOOL)canAuthAuctionAdVideo;
- (void)setCanAuthAuctionAdVideo:(BOOL)arg0;
- (BOOL)isAdPartner;
- (void)setIsAdPartner:(BOOL)arg0;
- (BOOL)isAdAuthorizationEnabled;
- (void)setAdAuthorizationEnabled:(BOOL)arg0;
- (BOOL)adRevenueSharing;
- (void)setAdRevenueSharing:(BOOL)arg0;
- (void)setAdRevenueRits:(id)arg0;
- (void).cxx_destruct;

@end