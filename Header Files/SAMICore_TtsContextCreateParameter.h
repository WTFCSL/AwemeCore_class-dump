//
//     Generated by private class-dump
//

@protocol SAMICoreCallbackListener;

@interface SAMICore_TtsContextCreateParameter : NSObject {
    BOOL _enableConcurrency;
    BOOL _enableSentenceSeg;
    BOOL _enableTimestamp;
    BOOL _enableNetTransportCompress;
    BOOL _enableSaveAudioToFile;
    BOOL _enable_split;
    BOOL _enableAudio2Bs;
    BOOL _enableTextSeg;
    int _connectTimeout;
    int _sampleRate;
    int _speechRate;
    int _pitchRate;
    int _silenceDuration;
    int _bitRate;
    const char *_url;
    const char *_appKey;
    const char *_header;
    const char *_taskId;
    long long _tokenType;
    const char *_token;
    const char *_speaker;
    const char *_format;
    const char *_textType;
    const char *_text;
    long long _timestamp;
    const char *_saveFileDir;
    const char *_extra;
    const char *_internal;
    id<SAMICoreCallbackListener> _listener;
}

@property (nonatomic) const char *url;
@property (nonatomic) const char *appKey;
@property (nonatomic) const char *header;
@property (nonatomic) const char *taskId;
@property (nonatomic) int connectTimeout;
@property (nonatomic) long long tokenType;
@property (nonatomic) const char *token;
@property (nonatomic) const char *speaker;
@property (nonatomic) const char *format;
@property (nonatomic) const char *textType;
@property (nonatomic) const char *text;
@property (nonatomic) BOOL enableConcurrency;
@property (nonatomic) BOOL enableSentenceSeg;
@property (nonatomic) long long timestamp;
@property (nonatomic) int sampleRate;
@property (nonatomic) int speechRate;
@property (nonatomic) int pitchRate;
@property (nonatomic) BOOL enableTimestamp;
@property (nonatomic) int silenceDuration;
@property (nonatomic) BOOL enableNetTransportCompress;
@property (nonatomic) int bitRate;
@property (nonatomic) BOOL enableSaveAudioToFile;
@property (nonatomic) const char *saveFileDir;
@property (nonatomic) BOOL enable_split;
@property (nonatomic) const char *extra;
@property (nonatomic) BOOL enableAudio2Bs;
@property (nonatomic) const char *internal;
@property (nonatomic) BOOL enableTextSeg;
@property (retain, nonatomic) id<SAMICoreCallbackListener> listener;

- (void)setExtra:(const char *)arg0;
- (void)setAppKey:(const char *)arg0;
- (void)setEnableNetTransportCompress:(BOOL)arg0;
- (const char *)appKey;
- (BOOL)enableSentenceSeg;
- (void)setEnableSentenceSeg:(BOOL)arg0;
- (int)pitchRate;
- (void)setPitchRate:(int)arg0;
- (BOOL)enableTimestamp;
- (void)setEnableTimestamp:(BOOL)arg0;
- (int)silenceDuration;
- (void)setSilenceDuration:(int)arg0;
- (BOOL)enableNetTransportCompress;
- (BOOL)enableSaveAudioToFile;
- (void)setEnableSaveAudioToFile:(BOOL)arg0;
- (const char *)saveFileDir;
- (void)setSaveFileDir:(const char *)arg0;
- (BOOL)enable_split;
- (void)setEnable_split:(BOOL)arg0;
- (BOOL)enableAudio2Bs;
- (void)setEnableAudio2Bs:(BOOL)arg0;
- (BOOL)enableTextSeg;
- (void)setEnableTextSeg:(BOOL)arg0;
- (void)setSpeaker:(const char *)arg0;
- (void)setInternal:(const char *)arg0;
- (int)bitRate;
- (long long)timestamp;
- (int)sampleRate;
- (id)listener;
- (void)setText:(const char *)arg0;
- (void)setTokenType:(long long)arg0;
- (void)setUrl:(const char *)arg0;
- (void)setToken:(const char *)arg0;
- (const char *)header;
- (void)setListener:(id)arg0;
- (const char *)extra;
- (void)setFormat:(const char *)arg0;
- (const char *)token;
- (const char *)internal;
- (void)setTimestamp:(long long)arg0;
- (void)setHeader:(const char *)arg0;
- (const char *)text;
- (void)dealloc;
- (const char *)url;
- (const char *)taskId;
- (const char *)format;
- (void)setSampleRate:(int)arg0;
- (int)speechRate;
- (void)setSpeechRate:(int)arg0;
- (void)setTaskId:(const char *)arg0;
- (long long)tokenType;
- (const char *)speaker;
- (void)setBitRate:(int)arg0;
- (void)setEnableConcurrency:(BOOL)arg0;
- (BOOL)enableConcurrency;
- (int)connectTimeout;
- (void)setConnectTimeout:(int)arg0;
- (void)setTextType:(const char *)arg0;
- (const char *)textType;

@end
