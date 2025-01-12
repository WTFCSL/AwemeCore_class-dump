//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWENearbySwitchButtonGuideRule, AWENearbyGuideModel, AWEGrouponTabInitInfo, AWEGrouponPageInitInfo;

@interface AWENearbyInitModel : AWEBaseApiModel {
    BOOL _enableSwitchFeedStyle;
    BOOL _skipQueryDiamond;
    long long _nearbyFeedDualMode;
    long long _nearbyPreMode;
    long long _guideTimeStamp;
    NSString *_guideDsl;
    NSDictionary *_dualAbParam;
    long long _dualModeBySetting;
    AWENearbySwitchButtonGuideRule *_dualButtonGuide;
    AWENearbySwitchButtonGuideRule *_fullButtonGuide;
    NSDictionary *_searchBarConfig;
    AWENearbyGuideModel *_firstGuideModel;
    AWENearbyGuideModel *_secondGuideModel;
    NSString *_transParam;
    AWEGrouponTabInitInfo *_grouponTabInitInfo;
    AWEGrouponPageInitInfo *_grouponPageInitInfo;
    NSString *_nearbyCapsuleText;
    NSString *_collectInitInfo;
}

@property (nonatomic) long long nearbyFeedDualMode;
@property (nonatomic) long long nearbyPreMode;
@property (nonatomic) long long guideTimeStamp;
@property (copy, nonatomic) NSString *guideDsl;
@property (copy, nonatomic) NSDictionary *dualAbParam;
@property (nonatomic) BOOL enableSwitchFeedStyle;
@property (nonatomic) long long dualModeBySetting;
@property (retain, nonatomic) AWENearbySwitchButtonGuideRule *dualButtonGuide;
@property (retain, nonatomic) AWENearbySwitchButtonGuideRule *fullButtonGuide;
@property (copy, nonatomic) NSDictionary *searchBarConfig;
@property (retain, nonatomic) AWENearbyGuideModel *firstGuideModel;
@property (retain, nonatomic) AWENearbyGuideModel *secondGuideModel;
@property (nonatomic) BOOL skipQueryDiamond;
@property (copy, nonatomic) NSString *transParam;
@property (copy, nonatomic) AWEGrouponTabInitInfo *grouponTabInitInfo;
@property (retain, nonatomic) AWEGrouponPageInitInfo *grouponPageInitInfo;
@property (copy, nonatomic) NSString *nearbyCapsuleText;
@property (copy, nonatomic) NSString *collectInitInfo;

+ (BOOL)automaticallyDefaultMapping;

- (id)transParam;
- (void)setTransParam:(id)arg0;
- (id)guideDsl;
- (void)setGuideDsl:(id)arg0;
- (id)searchBarConfig;
- (id)collectInitInfo;
- (id)nearbyCapsuleText;
- (long long)guideTimeStamp;
- (long long)nearbyPreMode;
- (long long)nearbyFeedDualMode;
- (BOOL)enableSwitchFeedStyle;
- (id)fullButtonGuide;
- (id)dualButtonGuide;
- (long long)dualModeBySetting;
- (BOOL)skipQueryDiamond;
- (id)dualAbParam;
- (id)firstGuideModel;
- (id)secondGuideModel;
- (id)grouponTabInitInfo;
- (id)grouponPageInitInfo;
- (void)setDualAbParam:(id)arg0;
- (void)setFirstGuideModel:(id)arg0;
- (void)setSecondGuideModel:(id)arg0;
- (void)setGuideTimeStamp:(long long)arg0;
- (void)setSearchBarConfig:(id)arg0;
- (void)setNearbyFeedDualMode:(long long)arg0;
- (void)setNearbyPreMode:(long long)arg0;
- (void)setEnableSwitchFeedStyle:(BOOL)arg0;
- (void)setDualModeBySetting:(long long)arg0;
- (void)setDualButtonGuide:(id)arg0;
- (void)setFullButtonGuide:(id)arg0;
- (void)setSkipQueryDiamond:(BOOL)arg0;
- (void)setGrouponTabInitInfo:(id)arg0;
- (void)setGrouponPageInitInfo:(id)arg0;
- (void)setNearbyCapsuleText:(id)arg0;
- (void)setCollectInitInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
