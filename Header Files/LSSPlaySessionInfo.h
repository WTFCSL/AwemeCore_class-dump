//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface LSSPlaySessionInfo : NSObject {
    BOOL _isValid;
    int _stallTotalCount;
    int _retryTotalCount;
    int _success;
    int _m302;
    int _connectCost;
    int _stallType;
    int _bitrate;
    int _gop;
    int _sampleRate;
    int _channel;
    int _height;
    int _width;
    NSString *_sessionId;
    long long _stopTimestamp;
    NSString *_TAG;
    NSString *_domain;
    long long _playTime;
    long long _downloadSpeed;
    NSString *_network;
    NSString *_update;
    NSString *_create;
    long long _firstFrameAudioBuffer;
    long long _firstFrameVideoBuffer;
    long long _firstFrameDownloadSpeed;
    long long _firstFrame;
    long long _stallTime;
    long long _startTs;
    long long _stallTotalTime;
    long long _endTs;
    long long _duration;
    NSString *_neptuneName;
    double _fps;
    NSString *_streamSuffix;
    NSString *_protocol;
    long long _videoBuffer;
    long long _audioBuffer;
    NSMutableArray *_stallSeries;
    NSMutableArray *_renderAudioSeries;
    NSMutableArray *_renderVideoSeries;
    NSMutableArray *_videoBufferList;
    NSMutableArray *_audioBufferList;
    NSMutableArray *_bitrateList;
    long long _DTS;
    long long _PTS;
}

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) int stallTotalCount;
@property (nonatomic) int retryTotalCount;
@property (nonatomic) long long stopTimestamp;
@property (retain, nonatomic) NSString *TAG;
@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long playTime;
@property (nonatomic) long long downloadSpeed;
@property (retain, nonatomic) NSString *network;
@property (retain, nonatomic) NSString *update;
@property (retain, nonatomic) NSString *create;
@property (nonatomic) long long firstFrameAudioBuffer;
@property (nonatomic) long long firstFrameVideoBuffer;
@property (nonatomic) long long firstFrameDownloadSpeed;
@property (nonatomic) long long firstFrame;
@property (nonatomic) int success;
@property (nonatomic) int m302;
@property (nonatomic) int connectCost;
@property (nonatomic) int stallType;
@property (nonatomic) long long stallTime;
@property (nonatomic) long long startTs;
@property (nonatomic) long long stallTotalTime;
@property (nonatomic) long long endTs;
@property (nonatomic) long long duration;
@property (nonatomic) int bitrate;
@property (retain, nonatomic) NSString *neptuneName;
@property (nonatomic) double fps;
@property (nonatomic) int gop;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channel;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (retain, nonatomic) NSString *streamSuffix;
@property (retain, nonatomic) NSString *protocol;
@property (nonatomic) long long videoBuffer;
@property (nonatomic) long long audioBuffer;
@property (copy, nonatomic) NSMutableArray *stallSeries;
@property (copy, nonatomic) NSMutableArray *renderAudioSeries;
@property (copy, nonatomic) NSMutableArray *renderVideoSeries;
@property (copy, nonatomic) NSMutableArray *videoBufferList;
@property (copy, nonatomic) NSMutableArray *audioBufferList;
@property (copy, nonatomic) NSMutableArray *bitrateList;
@property (nonatomic) long long DTS;
@property (nonatomic) long long PTS;

- (int)gop;
- (void)setGop:(int)arg0;
- (id)neptuneName;
- (void)setNeptuneName:(id)arg0;
- (long long)startTs;
- (void)setStartTs:(long long)arg0;
- (long long)endTs;
- (void)setEndTs:(long long)arg0;
- (void)setPlayTime:(long long)arg0;
- (void)setStallTotalCount:(int)arg0;
- (void)setRetryTotalCount:(int)arg0;
- (int)stallTotalCount;
- (int)retryTotalCount;
- (void)setAudioBufferList:(id)arg0;
- (void)setPTS:(long long)arg0;
- (id)bitrateList;
- (void)setBitrateList:(id)arg0;
- (long long)stallTime;
- (void)setStallTime:(long long)arg0;
- (void)setDTS:(long long)arg0;
- (long long)DTS;
- (long long)PTS;
- (long long)firstFrame;
- (void)setFirstFrame:(long long)arg0;
- (id)TAG;
- (long long)videoBuffer;
- (void)setVideoBuffer:(long long)arg0;
- (id)getValue:(id)arg0 defaultValue:(id)arg1;
- (int)m302;
- (void)setFirstFrameVideoBuffer:(long long)arg0;
- (void)setFirstFrameAudioBuffer:(long long)arg0;
- (void)setFirstFrameDownloadSpeed:(long long)arg0;
- (void)setM302:(int)arg0;
- (void)setConnectCost:(int)arg0;
- (long long)stallTotalTime;
- (void)setStallTotalTime:(long long)arg0;
- (id)stallSeries;
- (void)setStallType:(int)arg0;
- (id)renderVideoSeries;
- (id)renderAudioSeries;
- (long long)firstFrameDownloadSpeed;
- (id)videoBufferList;
- (void)setTAG:(id)arg0;
- (long long)firstFrameAudioBuffer;
- (long long)firstFrameVideoBuffer;
- (int)connectCost;
- (id)streamSuffix;
- (void)setStreamSuffix:(id)arg0;
- (void)setStallSeries:(id)arg0;
- (void)setRenderAudioSeries:(id)arg0;
- (void)setRenderVideoSeries:(id)arg0;
- (void)setVideoBufferList:(id)arg0;
- (id)protocol;
- (int)channel;
- (id)init;
- (void)setIsValid:(BOOL)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (int)sampleRate;
- (long long)audioBuffer;
- (void)setChannel:(int)arg0;
- (int)height;
- (void)setUpdate:(id)arg0;
- (void)setProtocol:(id)arg0;
- (id)create;
- (void)setAudioBuffer:(long long)arg0;
- (id)sessionId;
- (long long)playTime;
- (BOOL)isValid;
- (int)bitrate;
- (long long)duration;
- (int)success;
- (id)domain;
- (void)setWidth:(int)arg0;
- (void)setSuccess:(int)arg0;
- (id)update;
- (void)setHeight:(int)arg0;
- (double)fps;
- (int)width;
- (void)setNetwork:(id)arg0;
- (id)network;
- (void)setDomain:(id)arg0;
- (void)setDuration:(long long)arg0;
- (void)setSampleRate:(int)arg0;
- (void)setBitrate:(int)arg0;
- (void)setFps:(double)arg0;
- (id)audioBufferList;
- (long long)downloadSpeed;
- (void)setDownloadSpeed:(long long)arg0;
- (int)stallType;
- (void)setStopTimestamp:(long long)arg0;
- (long long)stopTimestamp;
- (void)setCreate:(id)arg0;

@end
