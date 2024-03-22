//
//     Generated by private class-dump
//

@class NSNumber;

@interface __RTVXREngineRTCVideoParams : JSONModel {
    NSNumber *_videoParamMode;
    NSNumber *_bitrate;
    NSNumber *_fps;
    NSNumber *_width;
    NSNumber *_height;
}

@property (retain, nonatomic) NSNumber *videoParamMode;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *fps;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;

+ (id)keyMapper;

- (void)__setupDefaultValue:(id)arg0;
- (void)setVideoParamMode:(id)arg0;
- (id)videoParamMode;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)height;
- (id)bitrate;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)fps;
- (id)width;
- (void)setBitrate:(id)arg0;
- (void)setFps:(id)arg0;

@end