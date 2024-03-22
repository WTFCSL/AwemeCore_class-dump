//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, AWEIronManLandingPageDataController, NSString, NSDictionary;

@interface AWEIronManLandingPageDiscoveryBannerViewModel : MTLModel <MTLJSONSerializing, AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol> {
    unsigned long long _enterFrom;
    unsigned long long _section;
    NSDictionary *_bdpExtra;
    NSDictionary *_commonRequestParamDict;
    NSDictionary *_commonTrackDict;
    unsigned long long _uiVersion;
    NSArray *_modelList;
    NSMutableDictionary *_trackStatus;
    AWEIronManLandingPageDataController *_dataVc;
}

@property (retain, nonatomic) NSMutableDictionary *trackStatus;
@property (retain, nonatomic) AWEIronManLandingPageDataController *dataVc;
@property (retain, nonatomic) NSArray *modelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long uiVersion;
@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSDictionary *bdpExtra;
@property (copy, nonatomic) NSDictionary *commonRequestParamDict;
@property (nonatomic) unsigned long long section;
@property (copy, nonatomic) NSDictionary *commonTrackDict;

+ (id)modelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (void)setTrackStatus:(id)arg0;
- (id)trackStatus;
- (id)modelList;
- (void)setModelList:(id)arg0;
- (id)commonTrackDict;
- (void)setCommonTrackDict:(id)arg0;
- (id)bdpExtra;
- (void)trackEvent:(id)arg0 atIndex:(unsigned long long)arg1 params:(id)arg2;
- (void)setDataVc:(id)arg0;
- (void)setUiVersion:(unsigned long long)arg0;
- (unsigned long long)uiVersion;
- (id)dataVc;
- (void)refreshDataWithCount:(unsigned long long)arg0;
- (id)eventStatusKeyAtIndex:(unsigned long long)arg0 event:(id)arg1;
- (void)setBdpExtra:(id)arg0;
- (id)commonRequestParamDict;
- (void)setCommonRequestParamDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSection:(unsigned long long)arg0;
- (unsigned long long)section;

@end