//
//     Generated by private class-dump
//

@interface GLTFTextureTransform : NSObject {
    BOOL _hasTexCoord;
    float _rotation;
    int _texCoord;
    void /* unknown type, empty encoding */ _offset;
    void /* unknown type, empty encoding */ _scale;
}

@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic) float rotation;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) BOOL hasTexCoord;
@property (nonatomic) int texCoord;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } matrix;

- (int)texCoord;
- (void)setTexCoord:(int)arg0;
- (BOOL)hasTexCoord;
- (void)setHasTexCoord:(BOOL)arg0;
- (id)init;
- (void)setRotation:(float)arg0;
- (void)setOffset:(SEL)arg0;
- (void /* unknown type, empty encoding */)scale;
- (void /* unknown type, empty encoding */)offset;
- (float)rotation;
- (void)setScale:(SEL)arg0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })matrix;

@end
