//
//     Generated by private class-dump
//

@protocol BDThumbImageDecoder <NSObject>

+ (id)heicRepackData:(id)arg0;
+ (long long)parseThumbLocationForHeicData:(id)arg0 minDataSize:(long long *)arg1;
+ (BOOL)isStaticHeicImage:(id)arg0;
+ (BOOL)supportDecodeThumbFromHeicData;

- (struct CGImage { } *)decodeThumbImage;

@end
