//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchBackgroundBGImageModel : AWEBaseApiModel {
    NSString *_imageURL;
    unsigned long long _imageLayoutType;
}

@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) unsigned long long imageLayoutType;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)imageLayoutType;
- (void)setImageLayoutType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (id)imageURL;

@end