//
//     Generated by private class-dump
//

@class NSString;

@interface IESSCMetalTextureCreator : NSObject <IESSCMetalTextureCreator> {
    struct __CVMetalTextureCache { } *_textureCacheRef;
}

@property (nonatomic) struct __CVMetalTextureCache { } *textureCacheRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeTextureWithPixelBuffer:(struct __CVBuffer { } *)arg0 planeIndex:(int)arg1 pixelFormat:(unsigned long long)arg2;
- (struct __CVMetalTextureCache { } *)textureCacheRef;
- (void)setTextureCacheRef:(struct __CVMetalTextureCache { } *)arg0;
- (id)init;
- (id)initWithDevice:(id)arg0;
- (void)cleanCache;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg0;

@end