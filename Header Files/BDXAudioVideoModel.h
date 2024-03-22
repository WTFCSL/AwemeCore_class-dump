//
//     Generated by private class-dump
//

@class TTVideoEngineModel;

@interface BDXAudioVideoModel : NSObject {
    unsigned long long _encryptType;
    unsigned long long _quality;
    TTVideoEngineModel *_videoEngineModel;
}

@property (nonatomic) unsigned long long encryptType;
@property (nonatomic) unsigned long long quality;
@property (retain, nonatomic) TTVideoEngineModel *videoEngineModel;

- (id)videoEngineModel;
- (void)setVideoEngineModel:(id)arg0;
- (unsigned long long)encryptType;
- (unsigned long long)_encryptType:(id)arg0;
- (void)setEncryptType:(unsigned long long)arg0;
- (unsigned long long)_quality:(id)arg0;
- (void)setQuality:(unsigned long long)arg0;
- (unsigned long long)quality;
- (void).cxx_destruct;
- (id)initWithJSONDict:(id)arg0;

@end
