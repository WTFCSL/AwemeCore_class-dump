//
//     Generated by private class-dump
//

@class NSString, AWELongVideoFeedPaymentInfoBody;

@interface AWELVideoStateInFeed : MTLModel <MTLJSONSerializing> {
    BOOL _showPreviewEndView;
    BOOL _beReplaced;
    BOOL _transferToDetailBySchema;
    BOOL _didFetchPaymentInfo;
    AWELongVideoFeedPaymentInfoBody *_previewEndInfo;
    double _likeFeedWatchHistory;
}

@property (nonatomic, getter=isShowingPreviewEnd) BOOL showPreviewEndView;
@property (nonatomic) BOOL beReplaced;
@property (retain, nonatomic) AWELongVideoFeedPaymentInfoBody *previewEndInfo;
@property (nonatomic) BOOL transferToDetailBySchema;
@property (nonatomic) BOOL didFetchPaymentInfo;
@property (nonatomic) double likeFeedWatchHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShowingPreviewEnd;
- (void)setShowPreviewEndView:(BOOL)arg0;
- (BOOL)beReplaced;
- (void)setBeReplaced:(BOOL)arg0;
- (id)previewEndInfo;
- (void)setPreviewEndInfo:(id)arg0;
- (BOOL)transferToDetailBySchema;
- (void)setTransferToDetailBySchema:(BOOL)arg0;
- (BOOL)didFetchPaymentInfo;
- (void)setDidFetchPaymentInfo:(BOOL)arg0;
- (double)likeFeedWatchHistory;
- (void)setLikeFeedWatchHistory:(double)arg0;
- (void).cxx_destruct;

@end
