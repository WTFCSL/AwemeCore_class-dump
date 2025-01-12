//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSArray, AWEGeneralFilmTelevisionBannerModel, AWEGeneralFilmTVInfoTextModuleModel, AWEGeneralFilmTelevisionInfoModel, AWEGeneralFilmTVLeadingCreatorModel, NSNumber;

@interface AWEGeneralFilmTelevisionCardModel : AWEBaseApiModel {
    BOOL _showDivideLine;
    AWEGeneralFilmTelevisionInfoModel *_filmTVInfoModel;
    NSArray *_sourceModelList;
    AWEGeneralFilmTVInfoTextModuleModel *_textModule;
    AWEGeneralFilmTelevisionBannerModel *_bannerModel;
    AWEGeneralFilmTVLeadingCreatorModel *_actorInfoModel;
    AWEAwemeModel *_coverVideo;
    NSString *_bgColorString;
    NSString *_centerColorString;
    NSString *_name;
    NSString *_cID;
    NSNumber *_type;
}

@property (retain, nonatomic) AWEGeneralFilmTelevisionInfoModel *filmTVInfoModel;
@property (retain, nonatomic) NSArray *sourceModelList;
@property (retain, nonatomic) AWEGeneralFilmTVInfoTextModuleModel *textModule;
@property (retain, nonatomic) AWEGeneralFilmTelevisionBannerModel *bannerModel;
@property (retain, nonatomic) AWEGeneralFilmTVLeadingCreatorModel *actorInfoModel;
@property (retain, nonatomic) AWEAwemeModel *coverVideo;
@property (copy, nonatomic) NSString *bgColorString;
@property (copy, nonatomic) NSString *centerColorString;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *cID;
@property (copy, nonatomic) NSNumber *type;
@property (nonatomic) BOOL showDivideLine;

+ (id)textModuleJSONTransformer;
+ (id)actorInfoModelJSONTransformer;
+ (id)filmTVInfoModelJSONTransformer;
+ (id)sourceModelListJSONTransformer;
+ (id)bannerModelJSONTransformer;
+ (id)coverVideoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)centerColor;
- (id)bgColor;
- (id)bgColorString;
- (id)cID;
- (void)setCID:(id)arg0;
- (id)textModule;
- (void)setTextModule:(id)arg0;
- (id)filmTVInfoModel;
- (void)setFilmTVInfoModel:(id)arg0;
- (id)sourceModelList;
- (void)setSourceModelList:(id)arg0;
- (id)bannerModel;
- (void)setBannerModel:(id)arg0;
- (id)actorInfoModel;
- (void)setActorInfoModel:(id)arg0;
- (id)coverVideo;
- (void)setCoverVideo:(id)arg0;
- (void)setBgColorString:(id)arg0;
- (id)centerColorString;
- (void)setCenterColorString:(id)arg0;
- (BOOL)showDivideLine;
- (void)setShowDivideLine:(BOOL)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;
- (void)setName:(id)arg0;
- (id)name;

@end
