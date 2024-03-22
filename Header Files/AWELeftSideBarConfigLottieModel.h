//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWELeftSideBarConfigLottieModel : AWELeftSideBarConfigBaseModel <NSCopying> {
    BOOL _needLogin;
    BOOL _necessaryOpenSidebar;
    NSString *_lottieUrl;
    long long _lottieType;
    NSString *_schema;
    NSString *_businessId;
    NSString *_enterFrom;
    NSString *_imageUrl;
    NSString *_lightThemeImageUrl;
    double _lottieDuration;
    double _showDuration;
    NSDictionary *_businessExtraData;
}

@property (copy, nonatomic) NSString *lottieUrl;
@property (nonatomic) long long lottieType;
@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) BOOL necessaryOpenSidebar;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *lightThemeImageUrl;
@property (nonatomic) double lottieDuration;
@property (nonatomic) double showDuration;
@property (copy, nonatomic) NSDictionary *businessExtraData;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (double)showDuration;
- (void)setShowDuration:(double)arg0;
- (id)lottieUrl;
- (void)setLottieUrl:(id)arg0;
- (id)businessExtraData;
- (void)setBusinessExtraData:(id)arg0;
- (BOOL)needLogin;
- (void)setNeedLogin:(BOOL)arg0;
- (BOOL)isEqualConfigLottieModel:(id)arg0;
- (BOOL)necessaryOpenSidebar;
- (void)setNecessaryOpenSidebar:(BOOL)arg0;
- (long long)lottieType;
- (void)setLottieType:(long long)arg0;
- (id)lightThemeImageUrl;
- (void)setLightThemeImageUrl:(id)arg0;
- (double)lottieDuration;
- (void)setLottieDuration:(double)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)description;
- (id)businessId;
- (id)schema;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (void)setBusinessId:(id)arg0;

@end
