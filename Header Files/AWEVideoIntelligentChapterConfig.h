//
//     Generated by private class-dump
//

@interface AWEVideoIntelligentChapterConfig : NSObject {
    long long _sectionSize;
    double _sectionSleepTime;
    double _pollingAfterTime;
    double _pollingResultTime;
    double _timeOut;
    id /* block */ _chapterResultBlock;
    id /* block */ _progressBlock;
    id /* block */ _chapterResultFailedBlock;
    long long _uploadMaxThreadCount;
    double _exportFrameScale;
    double _exportAudioScale;
    double _uploadFrameScale;
    double _uploadAudioScale;
    double _uploadUriScale;
    double _getResultScale;
    double _planTime;
    double _minVideoTime;
    double _maxVideoTime;
}

@property (nonatomic) long long uploadMaxThreadCount;
@property (nonatomic) double exportFrameScale;
@property (nonatomic) double exportAudioScale;
@property (nonatomic) double uploadFrameScale;
@property (nonatomic) double uploadAudioScale;
@property (nonatomic) double uploadUriScale;
@property (nonatomic) double getResultScale;
@property (nonatomic) double planTime;
@property (nonatomic) double minVideoTime;
@property (nonatomic) double maxVideoTime;
@property (nonatomic) long long sectionSize;
@property (nonatomic) double sectionSleepTime;
@property (nonatomic) double pollingAfterTime;
@property (nonatomic) double pollingResultTime;
@property (nonatomic) double timeOut;
@property (copy, nonatomic) id /* block */ chapterResultBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ chapterResultFailedBlock;

+ (id)onlineConfig;
+ (id)defaultConfig;

- (double)sectionSleepTime;
- (void)setSectionSleepTime:(double)arg0;
- (void)setChapterResultBlock:(id /* block */)arg0;
- (void)setChapterResultFailedBlock:(id /* block */)arg0;
- (long long)uploadMaxThreadCount;
- (double)minVideoTime;
- (double)maxVideoTime;
- (double)uploadAudioScale;
- (double)exportAudioScale;
- (double)uploadFrameScale;
- (double)exportFrameScale;
- (double)uploadUriScale;
- (id /* block */)chapterResultBlock;
- (id /* block */)chapterResultFailedBlock;
- (double)pollingAfterTime;
- (void)setPollingAfterTime:(double)arg0;
- (double)pollingResultTime;
- (double)planTime;
- (void)setPollingResultTime:(double)arg0;
- (void)setUploadMaxThreadCount:(long long)arg0;
- (void)setExportFrameScale:(double)arg0;
- (void)setExportAudioScale:(double)arg0;
- (void)setUploadFrameScale:(double)arg0;
- (void)setUploadAudioScale:(double)arg0;
- (void)setUploadUriScale:(double)arg0;
- (void)setGetResultScale:(double)arg0;
- (void)setPlanTime:(double)arg0;
- (void)setMinVideoTime:(double)arg0;
- (void)setMaxVideoTime:(double)arg0;
- (double)getResultScale;
- (void).cxx_destruct;
- (void)setProgressBlock:(id /* block */)arg0;
- (id /* block */)progressBlock;
- (long long)sectionSize;
- (void)setSectionSize:(long long)arg0;
- (void)setTimeOut:(double)arg0;
- (double)timeOut;

@end
