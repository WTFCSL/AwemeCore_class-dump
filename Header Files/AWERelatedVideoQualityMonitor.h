//
//     Generated by private class-dump
//

@class AWERelatedVideoContentQualityModel, NSString, AWERelatedVideoTraceQualityModel, AWERelatedVideoTagModel, AWEAwemeModel, AWERVDetailPageContext, NSMutableArray;

@interface AWERelatedVideoQualityMonitor : NSObject {
    BOOL _hasMore;
    BOOL _isTagValid;
    AWERVDetailPageContext *_pageContext;
    NSString *_ancestorEnterMethod;
    NSString *_requestId;
    AWEAwemeModel *_entranceAwemeModel;
    NSString *_videoInfos;
    double _startTime;
    AWERelatedVideoContentQualityModel *_content;
    AWERelatedVideoTraceQualityModel *_trace;
    NSMutableArray *_videos;
    NSMutableArray *_filterVideos;
    AWERelatedVideoTagModel *_entranceTag;
}

@property (retain, nonatomic) NSMutableArray *videos;
@property (retain, nonatomic) NSMutableArray *filterVideos;
@property (retain, nonatomic) AWERelatedVideoTagModel *entranceTag;
@property (nonatomic) BOOL isTagValid;
@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (copy, nonatomic) NSString *ancestorEnterMethod;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) AWEAwemeModel *entranceAwemeModel;
@property (copy, nonatomic) NSString *videoInfos;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) double startTime;
@property (retain, nonatomic) AWERelatedVideoContentQualityModel *content;
@property (retain, nonatomic) AWERelatedVideoTraceQualityModel *trace;

- (void)setTrace:(id)arg0;
- (id)videoInfos;
- (void)setVideoInfos:(id)arg0;
- (void)setEntranceTag:(id)arg0;
- (id)entranceTag;
- (id)ancestorEnterMethod;
- (void)setAncestorEnterMethod:(id)arg0;
- (void)setEntranceAwemeModel:(id)arg0;
- (id)entranceAwemeModel;
- (void)appendResponseModel:(id)arg0;
- (void)monitorTraceQuality:(id)arg0;
- (BOOL)canReported:(id)arg0;
- (void)handleUnCorrelated;
- (BOOL)isTagValid;
- (id)filterVideos;
- (BOOL)enableQualityMonitor;
- (BOOL)videoIsViewedWithVideoInfo:(id)arg0;
- (void)setFilterVideos:(id)arg0;
- (void)handleVideoInfos;
- (void)handleCorrelated:(id)arg0;
- (void)setIsTagValid:(BOOL)arg0;
- (void)monitorContentQuality:(id)arg0;
- (void)setStartTime:(double)arg0;
- (id)trace;
- (void).cxx_destruct;
- (id)content;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (double)startTime;
- (void)setContent:(id)arg0;
- (id)requestId;
- (id)videos;
- (void)setRequestId:(id)arg0;
- (void)setVideos:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
