//
//     Generated by private class-dump
//

@class AWEPineappleCampaignKPopupModel, NSArray, NSDictionary, NSString;

@interface AWECampaignKSetting : MTLModel <MTLJSONSerializing> {
    long long _randomTime;
    long long _roundRobinInterval;
    NSArray *_popups;
    NSArray *_redPacketResources;
    NSArray *_noticeInfo;
    NSArray *_noticeMultiInfo;
    NSArray *_activityButton;
    NSDictionary *_fcoinInfo;
    NSDictionary *_fcoinNotLoginConfig;
    NSDictionary *_feedPendantInfo;
    NSArray *_activityCardInfos;
    long long _version;
    long long _onlineVersion;
    AWEPineappleCampaignKPopupModel *_popupsConfig;
}

@property (nonatomic) long long randomTime;
@property (nonatomic) long long roundRobinInterval;
@property (copy, nonatomic) NSArray *popups;
@property (copy, nonatomic) NSArray *redPacketResources;
@property (copy, nonatomic) NSArray *noticeInfo;
@property (copy, nonatomic) NSArray *noticeMultiInfo;
@property (copy, nonatomic) NSArray *activityButton;
@property (retain, nonatomic) NSDictionary *fcoinInfo;
@property (copy, nonatomic) NSDictionary *fcoinNotLoginConfig;
@property (retain, nonatomic) NSDictionary *feedPendantInfo;
@property (retain, nonatomic) NSArray *activityCardInfos;
@property (nonatomic) long long version;
@property (nonatomic) long long onlineVersion;
@property (retain, nonatomic) AWEPineappleCampaignKPopupModel *popupsConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupsJSONTransformer;
+ (id)popupsConfigJSONTransformer;
+ (id)redPacketResourcesJSONTransformer;
+ (id)noticeInfoJSONTransformer;
+ (id)noticeMultiInfoJSONTransformer;
+ (id)activityButtonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)randomTime;
- (void)setRandomTime:(long long)arg0;
- (id)feedPendantInfo;
- (void)setFeedPendantInfo:(id)arg0;
- (id)fcoinInfo;
- (id)fcoinNotLoginConfig;
- (id)redPacketResources;
- (id)noticeInfo;
- (id)noticeMultiInfo;
- (id)popups;
- (id)popupsConfig;
- (long long)onlineVersion;
- (long long)feedOnlineVersion;
- (long long)roundRobinInterval;
- (id)activityCardInfos;
- (void)setActivityCardInfos:(id)arg0;
- (void)setOnlineVersion:(long long)arg0;
- (void)setRoundRobinInterval:(long long)arg0;
- (void)setPopups:(id)arg0;
- (void)setRedPacketResources:(id)arg0;
- (void)setNoticeInfo:(id)arg0;
- (void)setNoticeMultiInfo:(id)arg0;
- (void)setFcoinInfo:(id)arg0;
- (void)setFcoinNotLoginConfig:(id)arg0;
- (void)setPopupsConfig:(id)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (long long)version;
- (id)activityButton;
- (void)setActivityButton:(id)arg0;

@end
