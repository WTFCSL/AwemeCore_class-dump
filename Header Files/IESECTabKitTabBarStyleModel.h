//
//     Generated by private class-dump
//

@class NSString;

@interface IESECTabKitTabBarStyleModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _fontSize;
    unsigned long long _fontWeight;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
    NSString *_titleColor;
}

@property (nonatomic) unsigned long long fontSize;
@property (nonatomic) unsigned long long fontWeight;
@property (nonatomic) unsigned long long imageWidth;
@property (nonatomic) unsigned long long imageHeight;
@property (copy, nonatomic) NSString *titleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;
- (void).cxx_destruct;
- (void)setFontSize:(unsigned long long)arg0;
- (unsigned long long)fontWeight;
- (unsigned long long)fontSize;
- (id)titleColor;
- (void)setFontWeight:(unsigned long long)arg0;
- (void)setTitleColor:(id)arg0;
- (unsigned long long)imageWidth;
- (unsigned long long)imageHeight;
- (void)setImageHeight:(unsigned long long)arg0;
- (void)setImageWidth:(unsigned long long)arg0;

@end
