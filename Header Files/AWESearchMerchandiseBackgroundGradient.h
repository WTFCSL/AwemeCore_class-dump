//
//     Generated by private class-dump
//

@class AWESearchMerchandiseGradient;

@interface AWESearchMerchandiseBackgroundGradient : AWEBaseApiModel {
    AWESearchMerchandiseGradient *_dark;
    AWESearchMerchandiseGradient *_light;
}

@property (retain, nonatomic) AWESearchMerchandiseGradient *dark;
@property (retain, nonatomic) AWESearchMerchandiseGradient *light;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)light;
- (id)dark;
- (void)setDark:(id)arg0;
- (void)setLight:(id)arg0;

@end
