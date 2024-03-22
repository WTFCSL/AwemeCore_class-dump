//
//     Generated by private class-dump
//

@class NSString;

@interface CSJImage : NSObject <NSCoding> {
    BOOL _imagePreview;
    float _width;
    float _height;
    float _duration;
    NSString *_imageURL;
    NSString *_image_key;
}

@property (nonatomic) BOOL imagePreview;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *image_key;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float duration;

- (void)setImagePreview:(BOOL)arg0;
- (void)setImage_key:(id)arg0;
- (void)setupDataWithDictionary:(id)arg0;
- (id)image_key;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (float)height;
- (id)initWithDictionary:(id)arg0;
- (void)setImageURL:(id)arg0;
- (BOOL)isValid;
- (id)imageURL;
- (float)duration;
- (id)initWithCoder:(id)arg0;
- (id)dictionaryValue;
- (void)setWidth:(float)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setHeight:(float)arg0;
- (float)width;
- (void)setDuration:(float)arg0;
- (BOOL)imagePreview;

@end