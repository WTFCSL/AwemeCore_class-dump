//
//     Generated by private class-dump
//

@class NSNumber, UIColor, NSString;

@interface IESECListKitStyleModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_marginLeft;
    NSNumber *_marginRight;
    NSNumber *_marginTop;
    NSNumber *_marginBottom;
    NSNumber *_lineSpacing;
    NSNumber *_interitemSpacing;
    UIColor *_backgroundColor;
    UIColor *_backgroundColorDarkMode;
    NSString *_backgroundImageURL;
    NSString *_backgroundImageURLDarkMode;
}

@property (retain, nonatomic) NSNumber *marginLeft;
@property (retain, nonatomic) NSNumber *marginRight;
@property (retain, nonatomic) NSNumber *marginTop;
@property (retain, nonatomic) NSNumber *marginBottom;
@property (retain, nonatomic) NSNumber *lineSpacing;
@property (retain, nonatomic) NSNumber *interitemSpacing;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *backgroundColorDarkMode;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (copy, nonatomic) NSString *backgroundImageURLDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColorJSONTransformer;
+ (id)backgroundColorDarkModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)backgroundColorDarkMode;
- (void)setBackgroundColorDarkMode:(id)arg0;
- (id)backgroundImageURLDarkMode;
- (void)setBackgroundImageURLDarkMode:(id)arg0;
- (void)setInteritemSpacing:(id)arg0;
- (id)interitemSpacing;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (id)lineSpacing;
- (void)setLineSpacing:(id)arg0;
- (id)marginTop;
- (void)setMarginTop:(id)arg0;
- (id)backgroundImageURL;
- (void)setBackgroundImageURL:(id)arg0;
- (id)marginRight;
- (void)setMarginRight:(id)arg0;
- (id)marginBottom;
- (void)setMarginBottom:(id)arg0;
- (id)marginLeft;
- (void)setMarginLeft:(id)arg0;

@end
