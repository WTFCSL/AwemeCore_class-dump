//
//     Generated by private class-dump
//

@interface IESGLBaseTextureInfo : NSObject {
    unsigned int _texId;
    const float *_texCoords;
    void *_rlInfo;
    struct CGSize { double width; double height; } _texSize;
}

@property (nonatomic) unsigned int texId;
@property (nonatomic) const float *texCoords;
@property (nonatomic) struct CGSize { double width; double height; } texSize;
@property (nonatomic) void *rlInfo;

+ (id)infoWithTexId:(unsigned int)arg0 texCoords:(const float *)arg1 texSize:(struct CGSize { double x0; double x1; })arg2;
+ (id)infoWithTexId:(unsigned int)arg0 texCoords:(const float *)arg1 texSize:(struct CGSize { double x0; double x1; })arg2 rlInfo:(void *)arg3;

- (void)setRlInfo:(void *)arg0;
- (void *)rlInfo;
- (struct CGSize { double x0; double x1; })texSize;
- (const float *)texCoords;
- (void)setTexId:(unsigned int)arg0;
- (void)setTexCoords:(const float *)arg0;
- (void)setTexSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned int)texId;

@end
