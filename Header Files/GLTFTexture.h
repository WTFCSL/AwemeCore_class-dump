//
//     Generated by private class-dump
//

@class GLTFTextureSampler, GLTFImage;

@interface GLTFTexture : NSObject {
    GLTFTextureSampler *_sampler;
    GLTFImage *_source;
}

@property (retain, nonatomic) GLTFTextureSampler *sampler;
@property (retain, nonatomic) GLTFImage *source;

- (id)init;
- (id)initWithSource:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setSampler:(id)arg0;
- (void)setSource:(id)arg0;
- (id)sampler;

@end