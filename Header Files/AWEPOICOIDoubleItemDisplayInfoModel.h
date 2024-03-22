//
//     Generated by private class-dump
//

@class NSArray, AWEPOICOIDoubleItemDisplayMobInfoModel, NSString;

@interface AWEPOICOIDoubleItemDisplayInfoModel : MTLModel <MTLJSONSerializing> {
    NSArray *_locationTexts;
    NSArray *_singleLocationTexts;
    NSArray *_titleGroup;
    NSArray *_rateGroup;
    NSArray *_subtitleGroup;
    NSArray *_infoGroup;
    NSArray *_thirdGroup;
    AWEPOICOIDoubleItemDisplayMobInfoModel *_mobInfo;
}

@property (copy, nonatomic) NSArray *locationTexts;
@property (copy, nonatomic) NSArray *singleLocationTexts;
@property (copy, nonatomic) NSArray *titleGroup;
@property (copy, nonatomic) NSArray *rateGroup;
@property (copy, nonatomic) NSArray *subtitleGroup;
@property (copy, nonatomic) NSArray *infoGroup;
@property (copy, nonatomic) NSArray *thirdGroup;
@property (retain, nonatomic) AWEPOICOIDoubleItemDisplayMobInfoModel *mobInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thirdGroupJSONTransformer;
+ (id)titleGroupJSONTransformer;
+ (id)rateGroupJSONTransformer;
+ (id)subtitleGroupJSONTransformer;
+ (id)infoGroupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)locationTexts;
- (void)setLocationTexts:(id)arg0;
- (id)singleLocationTexts;
- (void)setSingleLocationTexts:(id)arg0;
- (id)titleGroup;
- (void)setTitleGroup:(id)arg0;
- (id)rateGroup;
- (void)setRateGroup:(id)arg0;
- (id)subtitleGroup;
- (void)setSubtitleGroup:(id)arg0;
- (id)infoGroup;
- (void)setInfoGroup:(id)arg0;
- (id)thirdGroup;
- (void)setThirdGroup:(id)arg0;
- (id)mobInfo;
- (void)setMobInfo:(id)arg0;
- (void).cxx_destruct;

@end
