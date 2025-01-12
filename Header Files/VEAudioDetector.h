//
//     Generated by private class-dump
//

@class VEAudioConfig, NSString, VEAudioFilter, HTSVideoData, NSDictionary, VEAudioReader, VEAudioReaderUnit, AVAsset;

@interface VEAudioDetector : IESMMObject {
    BOOL _isProcessing;
    BOOL _breakFlag;
    BOOL _useReaderUnit;
    BOOL _algoFailed;
    id /* block */ _progressCallback;
    unsigned long long _type;
    id _params;
    NSDictionary *_metadataDict;
    VEAudioReader *_audioReader;
    VEAudioReaderUnit *_audioReaderUnit;
    VEAudioConfig *_audioConfig;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_audioBufferCache;
    VEAudioFilter *_detector;
    NSString *_audioPath;
    AVAsset *_audioAsset;
    HTSVideoData *_videoData;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id params;
@property (retain, nonatomic) NSDictionary *metadataDict;
@property (retain, nonatomic) VEAudioReader *audioReader;
@property (retain, nonatomic) VEAudioReaderUnit *audioReaderUnit;
@property (retain, nonatomic) VEAudioConfig *audioConfig;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *audioBufferCache;
@property (retain, nonatomic) VEAudioFilter *detector;
@property (copy, nonatomic) NSString *audioPath;
@property (retain, nonatomic) AVAsset *audioAsset;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL breakFlag;
@property (nonatomic) BOOL useReaderUnit;
@property (nonatomic) BOOL algoFailed;
@property (copy, nonatomic) id /* block */ progressCallback;

- (id)audioConfig;
- (void)setAudioConfig:(id)arg0;
- (id)videoData;
- (void)setVideoData:(id)arg0;
- (void)setProgressCallback:(id /* block */)arg0;
- (id /* block */)progressCallback;
- (id)jsonStringWithDictionary:(id)arg0;
- (id)dictionaryWithJsonString:(id)arg0;
- (id)initWithVideoData:(id)arg0;
- (id)audioReaderUnit;
- (void)setAudioReaderUnit:(id)arg0;
- (void)setAudioPath:(id)arg0;
- (id)audioPath;
- (id)audioReader;
- (void)setAudioReader:(id)arg0;
- (BOOL)initAudioConfig;
- (void)setUseReaderUnit:(BOOL)arg0;
- (BOOL)useReaderUnit;
- (void)setAudioBufferCache:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (void)setBreakFlag:(BOOL)arg0;
- (void)readAudioDataAndProcess;
- (void)startDetect;
- (void)cancelDetect;
- (BOOL)algoFailed;
- (void)setAlgoFailed:(BOOL)arg0;
- (BOOL)breakFlag;
- (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)audioBufferCache;
- (id)initWithPath:(id)arg0 withType:(unsigned long long)arg1 params:(id)arg2;
- (id)initWithVideoData:(id)arg0 withType:(unsigned long long)arg1 params:(id)arg2;
- (void)startDetect_Async;
- (void)cancelDetect_Async;
- (unsigned int)filterProcess:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (void)setIsProcessing:(BOOL)arg0;
- (id)fetchResult;
- (id)initWithPath:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (id)params;
- (void)dealloc;
- (BOOL)isProcessing;
- (void)setAudioAsset:(id)arg0;
- (id)audioAsset;
- (void)setParams:(id)arg0;
- (id)metadataDict;
- (void)setMetadataDict:(id)arg0;
- (id)detector;
- (void)setDetector:(id)arg0;

@end
