//
//     Generated by private class-dump
//

@class AWESearchMerchandiseTextConfig, AWESearchMerchandiseBackgroundColor, AWESearchMerchandisePicConfig;

@interface AWESearchMerchandiseBiddingInformation : AWEBaseApiModel {
    AWESearchMerchandisePicConfig *_iconUrl;
    AWESearchMerchandisePicConfig *_bgImage;
    AWESearchMerchandiseTextConfig *_text;
    AWESearchMerchandiseBackgroundColor *_bgColor;
    long long _radius;
}

@property (retain, nonatomic) AWESearchMerchandisePicConfig *iconUrl;
@property (retain, nonatomic) AWESearchMerchandisePicConfig *bgImage;
@property (retain, nonatomic) AWESearchMerchandiseTextConfig *text;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundColor *bgColor;
@property (nonatomic) long long radius;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (long long)radius;
- (id)text;
- (void)setRadius:(long long)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;
- (void)setBgImage:(id)arg0;
- (id)bgImage;

@end
