//
//     Generated by private class-dump
//

@class NSString, NSData;

@interface BDByteLinkSinkVideoData : NSObject {
    BOOL _firstFrame;
    int _rotation;
    NSString *_ip;
    NSData *_data;
    unsigned long long _pts;
    unsigned long long _videoFormat;
    struct __CVBuffer { } *_outputPixelBuffer;
}

@property (retain, nonatomic) NSString *ip;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) int rotation;
@property (nonatomic) unsigned long long pts;
@property (nonatomic) BOOL firstFrame;
@property (nonatomic) unsigned long long videoFormat;
@property (nonatomic) struct __CVBuffer { } *outputPixelBuffer;

- (BOOL)firstFrame;
- (void)setFirstFrame:(BOOL)arg0;
- (unsigned long long)videoFormat;
- (unsigned long long)pts;
- (id)init;
- (id)data;
- (void)setRotation:(int)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setOutputPixelBuffer:(struct __CVBuffer { } *)arg0;
- (int)rotation;
- (struct __CVBuffer { } *)outputPixelBuffer;
- (void)setVideoFormat:(unsigned long long)arg0;
- (void)setIp:(id)arg0;
- (id)ip;
- (void)setPts:(unsigned long long)arg0;

@end
