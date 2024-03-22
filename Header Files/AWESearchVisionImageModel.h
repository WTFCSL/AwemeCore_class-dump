//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWESearchVisionImageModel : AWEBaseApiModel {
    NSString *_imageId;
    NSString *_imageUrl;
    NSString *_thumbUrl;
    NSString *_title;
    long long _width;
    long long _height;
    NSString *_source;
    NSString *_sourceUrl;
    NSString *_sourceSchema;
    NSDictionary *_extroInfo;
    NSDictionary *_imageDetailParams;
}

@property (copy, nonatomic) NSString *imageId;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSDictionary *extroInfo;
@property (copy, nonatomic) NSDictionary *imageDetailParams;

+ (id)JSONKeyPathsByPropertyKey;

- (id)thumbUrl;
- (void)setThumbUrl:(id)arg0;
- (id)sourceSchema;
- (void)setSourceSchema:(id)arg0;
- (id)extroInfo;
- (void)setExtroInfo:(id)arg0;
- (id)imageDetailParams;
- (void)setImageDetailParams:(id)arg0;
- (void)setImageId:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)imageId;
- (long long)height;
- (id)title;
- (void)setWidth:(long long)arg0;
- (void)setSource:(id)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (void)setTitle:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg0;

@end
