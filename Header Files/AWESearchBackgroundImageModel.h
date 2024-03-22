//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AWESearchBackgroundImageModel : AWEBaseApiModel {
    long long _lightTitleThemeStyle;
    AWEURLModel *_darkImage;
    AWEURLModel *_lightImage;
    double _offset;
    double _screenWidth;
}

@property (nonatomic) long long lightTitleThemeStyle;
@property (retain, nonatomic) AWEURLModel *darkImage;
@property (retain, nonatomic) AWEURLModel *lightImage;
@property (nonatomic) double offset;
@property (nonatomic) double screenWidth;

+ (id)darkImageJSONTransformer;
+ (id)lightImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lightImage;
- (void)setLightImage:(id)arg0;
- (long long)lightTitleThemeStyle;
- (void)setLightTitleThemeStyle:(long long)arg0;
- (void).cxx_destruct;
- (double)screenWidth;
- (void)setOffset:(double)arg0;
- (void)setScreenWidth:(double)arg0;
- (double)offset;
- (void)setDarkImage:(id)arg0;
- (id)darkImage;

@end