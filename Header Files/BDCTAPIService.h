//
//     Generated by private class-dump
//

@class NSString, BDCTFlowContext, BDCTEventTracker;

@interface BDCTAPIService : NSObject {
    BDCTFlowContext *_context;
    BDCTEventTracker *_eventTracker;
    NSString *_supportLivenessTypesString;
}

@property (retain, nonatomic) BDCTFlowContext *context;
@property (retain, nonatomic) BDCTEventTracker *eventTracker;
@property (readonly, nonatomic) BOOL useSystemV2;
@property (copy, nonatomic) NSString *supportLivenessTypesString;

+ (void)metaSecReportForSDKInit;
+ (void)getGrayscaleStrategyWithEnterFrom:(id)arg0 completion:(id /* block */)arg1;
+ (void)getAuthDecisionWithParams:(id)arg0 completion:(id /* block */)arg1;

- (void)bytedSaveCertVideo:(id)arg0 videoFilePath:(id)arg1 completion:(id /* block */)arg2;
- (void)authQueryWithParams:(id)arg0 frontImageData:(id)arg1 backImageData:(id)arg2 completion:(id /* block */)arg3;
- (void)bytedInitWithCallback:(id /* block */)arg0;
- (void)bytedFetch:(id)arg0 url:(id)arg1 params:(id)arg2 callback:(id /* block */)arg3;
- (void)bytedCommonOCR:(id)arg0 type:(id)arg1 callback:(id /* block */)arg2;
- (void)bytedOCRWithFrontImageData:(id)arg0 backImageData:(id)arg1 callback:(id /* block */)arg2;
- (void)bytedManualCheck:(id)arg0 frontImageData:(id)arg1 holdImageData:(id)arg2 callback:(id /* block */)arg3;
- (void)preManualCheckWithParams:(id)arg0 frontIDCardImageData:(id)arg1 backIDCardImageData:(id)arg2 callback:(id /* block */)arg3;
- (BOOL)useSystemV2;
- (void)requestForResponseWithUrl:(id)arg0 method:(id)arg1 params:(id)arg2 binaryNames:(id)arg3 binaryDatas:(id)arg4 completion:(id /* block */)arg5;
- (void)postForResponseWithUrl:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)supportLivenessTypesString;
- (void)postWithUrl:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)getWithUrl:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)addPostSensitiveParams:(id)arg0 toUrl:(id)arg1;
- (void)postWithUrl:(id)arg0 params:(id)arg1 binaryNames:(id)arg2 binaryDatas:(id)arg3 completion:(id /* block */)arg4;
- (void)bytedOCRWithImageDataArray:(id)arg0 imageNameArray:(id)arg1 callback:(id /* block */)arg2;
- (void)postWithUrl:(id)arg0 params:(id)arg1 binaryNames:(id)arg2 binaryDatas:(id)arg3 headerField:(id)arg4 completion:(id /* block */)arg5;
- (void)requestWithUrl:(id)arg0 method:(id)arg1 params:(id)arg2 binaryNames:(id)arg3 binaryDatas:(id)arg4 completion:(id /* block */)arg5;
- (void)authSubmitWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)bytedLiveDetectWithParams:(id)arg0 callback:(id /* block */)arg1;
- (void)bytedfaceCompare:(id)arg0 progressType:(unsigned long long)arg1 sdkData:(id)arg2 callback:(id /* block */)arg3;
- (void)bytedUploadVideo:(id)arg0 videoData:(id)arg1 callback:(id /* block */)arg2;
- (void)bytedfaceHashUpload:(id)arg0 faceImageHashes:(id)arg1 hashDuration:(long long)arg2 hashSign:(id)arg3 completion:(id /* block */)arg4;
- (void)bytedfaceFailUpload:(id)arg0 sdkData:(id)arg1 completion:(id /* block */)arg2;
- (void)setSupportLivenessTypesString:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)eventTracker;
- (id)context;
- (void)setEventTracker:(id)arg0;

@end
