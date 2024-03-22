//
//     Generated by private class-dump
//

@interface SrtColor : NSObject <NSCopying> {
    double _alpha;
    double _red;
    double _green;
    double _blue;
}

@property (nonatomic) double alpha;
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;

+ (id)stickerSrtColorWithUint32:(unsigned int)arg0;
+ (id)stickerSrtColorWithDic:(id)arg0;

- (id)toDicSrtColor;
- (unsigned int)toUint32;
- (void)setGreen:(double)arg0;
- (id)init;
- (void)setAlpha:(double)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setRed:(double)arg0;
- (double)green;
- (void)setBlue:(double)arg0;
- (double)alpha;
- (double)red;
- (double)blue;

@end
