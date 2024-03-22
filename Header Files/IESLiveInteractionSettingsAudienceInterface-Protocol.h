//
//     Generated by private class-dump
//

@protocol IESLiveInteractionAudienceSettings;

@protocol IESLiveInteractionSettingsAudienceInterface <NSObject>

@property (readonly, nonatomic) id<IESLiveInteractionAudienceSettings> audienceSettings;
@property (readonly, nonatomic) BOOL isAdminThatCanOperateGuest;

- (BOOL)isAdminThatCanOperateGuest;
- (void)updateAudienceInteractionDistributionScope:(long long)arg0 callback:(id /* block */)arg1;
- (id)audienceSettings;
- (void)fetchLatestAudienceSettings:(id)arg0 fromServerWithCallback:(id /* block */)arg1;
- (void)fetchAllLatestAudienceSettingsFromServerWithCallback:(id /* block */)arg0;
- (void)updateAudienceSettingWithKey:(long long)arg0 boolValue:(BOOL)arg1 callback:(id /* block */)arg2;

@end