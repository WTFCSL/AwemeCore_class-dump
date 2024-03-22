//
//     Generated by private class-dump
//

@class YYImageDecoder, NSString, NSArray, NSData, NSObject;
@protocol OS_dispatch_semaphore;

@interface YYImage : UIImage <YYAnimatedImage> {
    YYImageDecoder *_decoder;
    NSArray *_preloadedFrames;
    NSObject<OS_dispatch_semaphore> *_preloadedLock;
    unsigned long long _bytesPerFrame;
    BOOL _preloadAllAnimatedImageFrames;
    unsigned long long _animatedImageType;
    unsigned long long _animatedImageMemorySize;
}

@property (readonly, nonatomic) unsigned long long animatedImageType;
@property (readonly, nonatomic) NSData *animatedImageData;
@property (readonly, nonatomic) unsigned long long animatedImageMemorySize;
@property (nonatomic) BOOL preloadAllAnimatedImageFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageWithContentsOfFile:(id)arg0;
+ (id)imageNamed:(id)arg0;
+ (BOOL)supportsSecureCoding;
+ (id)imageWithData:(id)arg0;
+ (id)imageWithData:(id)arg0 scale:(double)arg1;

- (id)animatedImageData;
- (void)setPreloadAllAnimatedImageFrames:(BOOL)arg0;
- (unsigned long long)animatedImageType;
- (unsigned long long)animatedImageFrameCount;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg0;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg0;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageBytesPerFrame;
- (unsigned long long)animatedImageMemorySize;
- (BOOL)preloadAllAnimatedImageFrames;
- (id)initWithContentsOfFile:(id)arg0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (id)initWithData:(id)arg0 scale:(double)arg1;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithData:(id)arg0;

@end