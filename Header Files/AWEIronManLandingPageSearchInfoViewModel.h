//
//     Generated by private class-dump
//

@class NSString, AWEIronManLandingPageDataController, NSDictionary;

@interface AWEIronManLandingPageSearchInfoViewModel : MTLModel <MTLJSONSerializing, AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol> {
    unsigned long long _enterFrom;
    unsigned long long _section;
    unsigned long long _uiVersion;
    NSDictionary *_bdpExtra;
    NSDictionary *_commonRequestParamDict;
    NSDictionary *_commonTrackDict;
    NSString *_hint;
    AWEIronManLandingPageDataController *_dataVc;
}

@property (retain, nonatomic) AWEIronManLandingPageDataController *dataVc;
@property (copy, nonatomic) NSString *hint;
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

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (id)commonTrackDict;
- (void)setCommonTrackDict:(id)arg0;
- (id)bdpExtra;
- (void)trackEvent:(id)arg0 atIndex:(unsigned long long)arg1 params:(id)arg2;
- (void)setDataVc:(id)arg0;
- (void)setUiVersion:(unsigned long long)arg0;
- (unsigned long long)uiVersion;
- (id)dataVc;
- (void)refreshDataWithCount:(unsigned long long)arg0;
- (void)setBdpExtra:(id)arg0;
- (id)commonRequestParamDict;
- (void)setCommonRequestParamDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSection:(unsigned long long)arg0;
- (unsigned long long)section;
- (void)setHint:(id)arg0;
- (id)hint;

@end
