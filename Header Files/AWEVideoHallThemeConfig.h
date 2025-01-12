//
//     Generated by private class-dump
//

@class AWEVideoHallThemeMod, NSString;

@interface AWEVideoHallThemeConfig : MTLModel <MTLJSONSerializing> {
    AWEVideoHallThemeMod *_darkModeImage;
    AWEVideoHallThemeMod *_lightModeImage;
}

@property (retain, nonatomic) AWEVideoHallThemeMod *darkModeImage;
@property (retain, nonatomic) AWEVideoHallThemeMod *lightModeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)darkModeImageJSONTransformer;
+ (id)lightModeImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setDarkModeImage:(id)arg0;
- (void)setLightModeImage:(id)arg0;
- (id)lightModeImage;
- (id)darkModeImage;
- (void).cxx_destruct;

@end
