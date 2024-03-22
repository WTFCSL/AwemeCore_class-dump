//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface IESECCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    UIColor *_backgroundColor;
    NSString *_backgroundImage;
    NSString *_borderRadius;
    long long _contentMode;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *backgroundImage;
@property (copy, nonatomic) NSString *borderRadius;
@property (nonatomic) long long contentMode;

- (id)backgroundImage;
- (void)setContentMode:(long long)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)backgroundColor;
- (BOOL)isEqual:(id)arg0;
- (void)setBackgroundImage:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (long long)contentMode;
- (id)borderRadius;
- (BOOL)isEqualToAttributes:(id)arg0;
- (void)setBorderRadius:(id)arg0;

@end