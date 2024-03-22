//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveMontageGiftScreenShot : NSObject {
    BOOL _shouldReleasePixelBuffer;
    struct __CVBuffer { } *_pixelBufferData;
    NSString *_filePath;
    struct CGSize { double width; double height; } _firstFrameSize;
}

@property (nonatomic) struct __CVBuffer { } *pixelBufferData;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) BOOL shouldReleasePixelBuffer;
@property (nonatomic) struct CGSize { double width; double height; } firstFrameSize;

- (BOOL)isValidScreenShot;
- (struct __CVBuffer { } *)pixelBufferData;
- (BOOL)shouldReleasePixelBuffer;
- (id)montageGiftScreenShotInfo;
- (void)setShouldReleasePixelBuffer:(BOOL)arg0;
- (void)setFirstFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })firstFrameSize;
- (void)setPixelBufferData:(struct __CVBuffer { } *)arg0;
- (id)init;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)clear;

@end
