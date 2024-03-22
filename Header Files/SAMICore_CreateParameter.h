//
//     Generated by private class-dump
//

@interface SAMICore_CreateParameter : NSObject {
    int _sampleRate;
    int _maxBlockSize;
    int _modelLen;
    int _numChannel;
    int _numAudioBuffer;
    char *_modelBuffer;
    char *_jsonConfig;
    const char *_bussinessInfo;
    const char *_configInfo;
}

@property (nonatomic) int sampleRate;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) char *modelBuffer;
@property (nonatomic) int modelLen;
@property (nonatomic) int numChannel;
@property (nonatomic) int numAudioBuffer;
@property (nonatomic) char *jsonConfig;
@property (nonatomic) const char *bussinessInfo;
@property (nonatomic) const char *configInfo;

- (void)setMaxBlockSize:(int)arg0;
- (int)maxBlockSize;
- (char *)modelBuffer;
- (void)setModelBuffer:(char *)arg0;
- (int)modelLen;
- (void)setModelLen:(int)arg0;
- (int)numChannel;
- (void)setNumChannel:(int)arg0;
- (int)numAudioBuffer;
- (void)setNumAudioBuffer:(int)arg0;
- (char *)jsonConfig;
- (void)setJsonConfig:(char *)arg0;
- (const char *)bussinessInfo;
- (void)setBussinessInfo:(const char *)arg0;
- (int)sampleRate;
- (void)setSampleRate:(int)arg0;
- (const char *)configInfo;
- (void)setConfigInfo:(const char *)arg0;

@end