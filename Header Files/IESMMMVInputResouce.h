//
//     Generated by private class-dump
//

@interface IESMMMVInputResouce : NSObject {
    int _rid;
    unsigned int _textureID;
    unsigned int _width;
    unsigned int _height;
    void *_rlTexture;
}

@property (nonatomic) int rid;
@property (nonatomic) unsigned int textureID;
@property (nonatomic) void *rlTexture;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;

- (void *)rlTexture;
- (void)setTextureID:(unsigned int)arg0;
- (void)setRlTexture:(void *)arg0;
- (unsigned int)height;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (unsigned int)width;
- (int)rid;
- (void)setRid:(int)arg0;
- (unsigned int)textureID;

@end
