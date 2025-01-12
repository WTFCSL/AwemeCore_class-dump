//
//     Generated by private class-dump
//

@class NSError;

@interface BDPScreenSnapShotInfo : NSObject {
    id retainObj_;
    unsigned int _width;
    unsigned int _height;
    char *_pixels;
    NSError *_error;
}

@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) char *pixels;
@property (copy, nonatomic) NSError *error;

- (id)initWithObject:(id)arg0 pixels:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (id)initWithError:(id)arg0;
- (void).cxx_destruct;
- (unsigned int)height;
- (void)setWidth:(unsigned int)arg0;
- (void)setError:(id)arg0;
- (void)setHeight:(unsigned int)arg0;
- (unsigned int)width;
- (id)error;
- (char *)pixels;
- (void)setPixels:(char *)arg0;

@end
