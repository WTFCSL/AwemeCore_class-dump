//
//     Generated by private class-dump
//

@interface _YYImageDecoderFrame : YYImageFrame {
    BOOL _hasAlpha;
    BOOL _isFullSize;
    unsigned long long _blendFromIndex;
}

@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) BOOL isFullSize;
@property (nonatomic) unsigned long long blendFromIndex;

- (void)setBlendFromIndex:(unsigned long long)arg0;
- (unsigned long long)blendFromIndex;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setHasAlpha:(BOOL)arg0;
- (BOOL)hasAlpha;
- (BOOL)isFullSize;
- (void)setIsFullSize:(BOOL)arg0;

@end