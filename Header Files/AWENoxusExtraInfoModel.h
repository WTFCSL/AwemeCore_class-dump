//
//     Generated by private class-dump
//

@class NSString;

@interface AWENoxusExtraInfoModel : AWEBaseApiModel {
    BOOL _popUp;
    BOOL _isCollected;
    BOOL _skipAd;
    NSString *_titleBefore;
    NSString *_titleAfter;
    NSString *_watermarkUrl;
}

@property (nonatomic) BOOL popUp;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *titleBefore;
@property (copy, nonatomic) NSString *titleAfter;
@property (copy, nonatomic) NSString *watermarkUrl;
@property (nonatomic) BOOL skipAd;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (id)titleBefore;
- (id)titleAfter;
- (BOOL)popUp;
- (id)watermarkUrl;
- (void)setPopUp:(BOOL)arg0;
- (void)setTitleBefore:(id)arg0;
- (void)setTitleAfter:(id)arg0;
- (void)setWatermarkUrl:(id)arg0;
- (BOOL)skipAd;
- (void)setSkipAd:(BOOL)arg0;
- (void).cxx_destruct;

@end
