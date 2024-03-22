//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoIntelligentChapterLogParam : MTLModel <MTLJSONSerializing> {
    double _totalCost;
    double _clientCost;
    double _getTokenCost;
    double _extractAudioCost;
    double _extractFrameCost;
    double _uploadAudioTosCost;
    double _uploadFrameTosCost;
    double _uploadAudioTosUriCost;
    double _uploadFrameTosUriCost;
    double _pullingCost;
    long long _retryType;
    long long _resultType;
}

@property (nonatomic) double totalCost;
@property (nonatomic) double clientCost;
@property (nonatomic) double getTokenCost;
@property (nonatomic) double extractAudioCost;
@property (nonatomic) double extractFrameCost;
@property (nonatomic) double uploadAudioTosCost;
@property (nonatomic) double uploadFrameTosCost;
@property (nonatomic) double uploadAudioTosUriCost;
@property (nonatomic) double uploadFrameTosUriCost;
@property (nonatomic) double pullingCost;
@property (nonatomic) long long retryType;
@property (nonatomic) long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setRetryType:(long long)arg0;
- (void)setExtractFrameCost:(double)arg0;
- (void)setExtractAudioCost:(double)arg0;
- (void)setUploadFrameTosCost:(double)arg0;
- (void)setUploadAudioTosCost:(double)arg0;
- (void)setPullingCost:(double)arg0;
- (void)setGetTokenCost:(double)arg0;
- (void)setUploadFrameTosUriCost:(double)arg0;
- (void)setUploadAudioTosUriCost:(double)arg0;
- (void)setClientCost:(double)arg0;
- (double)clientCost;
- (double)getTokenCost;
- (double)extractAudioCost;
- (double)extractFrameCost;
- (double)uploadAudioTosCost;
- (double)uploadFrameTosCost;
- (double)uploadAudioTosUriCost;
- (double)uploadFrameTosUriCost;
- (double)pullingCost;
- (long long)retryType;
- (void)setResultType:(long long)arg0;
- (long long)resultType;
- (double)totalCost;
- (void)setTotalCost:(double)arg0;

@end
