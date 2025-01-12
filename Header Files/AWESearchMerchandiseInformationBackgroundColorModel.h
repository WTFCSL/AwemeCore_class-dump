//
//     Generated by private class-dump
//

@class NSString, AWESearchMerchandiseInformationBackgroundGradientColorModel;

@interface AWESearchMerchandiseInformationBackgroundColorModel : AWEBaseApiModel {
    NSString *_bgType;
    AWESearchMerchandiseInformationBackgroundGradientColorModel *_gradientColorModel;
}

@property (copy, nonatomic) NSString *bgType;
@property (retain, nonatomic) AWESearchMerchandiseInformationBackgroundGradientColorModel *gradientColorModel;

+ (id)gradientColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bgType;
- (void)setBgType:(id)arg0;
- (id)gradientColorModel;
- (void)setGradientColorModel:(id)arg0;
- (void).cxx_destruct;

@end
