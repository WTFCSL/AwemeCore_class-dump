//
//     Generated by private class-dump
//

@class VEAudioResampler, NSString, ACCAudioExport, AWEVideoPublishViewModel, NSArray, NSError, NSDictionary, AWEResourceUploadParametersResponseModel, NSMutableArray, NSObject, VEEditorSession;
@protocol ACCEditVideoDataProtocol;

@interface AWEAudioExport : NSObject <ACCAudioFrameExportProtocol> {
    BOOL _success;
    BOOL _isOriSound;
    BOOL _executing;
    double _export;
    double _createTime;
    VEAudioResampler *_audioResampler;
    ACCAudioExport *_audioExport;
    AWEResourceUploadParametersResponseModel *_uploadParameters;
    NSString *_awemeId;
    NSString *_materialId;
    NSMutableArray *_urls;
    NSObject<ACCEditVideoDataProtocol> *_videoData;
    AWEVideoPublishViewModel *_publishModel;
    long long _currentIndex;
    NSArray *_videoDatas;
    NSArray *_publishModels;
    NSArray *_vids;
    NSError *_error;
    NSDictionary *_response;
    id /* block */ _completion;
    NSArray *_handles;
    VEEditorSession *_session;
}

@property (nonatomic) double export;
@property (nonatomic) double createTime;
@property (retain, nonatomic) VEAudioResampler *audioResampler;
@property (retain, nonatomic) ACCAudioExport *audioExport;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSString *materialId;
@property (retain, nonatomic) NSMutableArray *urls;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSArray *videoDatas;
@property (retain, nonatomic) NSArray *publishModels;
@property (retain, nonatomic) NSArray *vids;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *response;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isOriSound;
@property (copy, nonatomic) NSArray *handles;
@property (retain, nonatomic) VEEditorSession *session;
@property (nonatomic) BOOL executing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needUploadOriginAudio:(id)arg0;
+ (void)extractAudioAndUploadFromPublishModels:(id)arg0 vids:(id)arg1 awemeItemId:(id)arg2 uploadParameters:(id)arg3 completion:(id /* block */)arg4;
+ (void)extractAudioAndUploadFromVideoData:(id)arg0 publishModel:(id)arg1 isOriSound:(BOOL)arg2 awemeItemId:(id)arg3 uploadParameters:(id)arg4 completion:(id /* block */)arg5;
+ (BOOL)checkResources:(id)arg0;
+ (id)generateHandlers:(id)arg0;
+ (void)startIfNeeded;

- (id)videoData;
- (void)setAwemeId:(id)arg0;
- (void)setVideoData:(id)arg0;
- (id)awemeId;
- (id)vids;
- (void)setVids:(id)arg0;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setPublishModels:(id)arg0;
- (void)setUploadParameters:(id)arg0;
- (id)commontParams;
- (void)startWithIndex:(long long)arg0;
- (id)publishModels;
- (id)uploadParameters;
- (void)setVideoDatas:(id)arg0;
- (id)videoDatas;
- (id)audioExport;
- (void)trackErrorEvent:(id)arg0;
- (void)p_hasExportAudioWithURLs:(id)arg0 vids:(id)arg1;
- (double)exportCost;
- (void)setExport:(double)arg0;
- (id)audioResampler;
- (void)setAudioResampler:(id)arg0;
- (void)setAudioExport:(id)arg0;
- (BOOL)isOriSound;
- (void)setIsOriSound:(BOOL)arg0;
- (id)urls;
- (BOOL)executing;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setSession:(id)arg0;
- (void)setResponse:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (id)session;
- (void)setCreateTime:(double)arg0;
- (id)response;
- (void)setCurrentIndex:(long long)arg0;
- (BOOL)success;
- (void)setHandles:(id)arg0;
- (void)setUrls:(id)arg0;
- (double)createTime;
- (void)setSuccess:(BOOL)arg0;
- (void)setError:(id)arg0;
- (void)start;
- (id)handles;
- (void)setExecuting:(BOOL)arg0;
- (id)error;
- (void)didFinish;
- (id)materialId;
- (void)setMaterialId:(id)arg0;
- (double)export;

@end