//
//     Generated by private class-dump
//

@class HTSGLContext;

@interface HTSGLFramebufferConfig : NSObject <NSCopying> {
    BOOL _onlyTexture;
    BOOL _disableCache;
    BOOL _useRectangle;
    HTSGLContext *_context;
    unsigned long long _color;
    struct CGSize { double width; double height; } _framebufferSize;
}

@property (nonatomic) struct CGSize { double width; double height; } framebufferSize;
@property (nonatomic) BOOL onlyTexture;
@property (nonatomic) BOOL disableCache;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) unsigned long long color;
@property (nonatomic) BOOL useRectangle;

- (void)setFramebufferSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setOnlyTexture:(BOOL)arg0;
- (void)setUseRectangle:(BOOL)arg0;
- (BOOL)useRectangle;
- (BOOL)onlyTexture;
- (struct CGSize { double x0; double x1; })framebufferSize;
- (unsigned long long)color;
- (id)init;
- (void).cxx_destruct;
- (id)copy;
- (void)setContext:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setDisableCache:(BOOL)arg0;
- (id)context;
- (BOOL)disableCache;
- (void)setColor:(unsigned long long)arg0;

@end
