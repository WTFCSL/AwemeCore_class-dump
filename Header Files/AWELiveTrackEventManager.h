//
//     Generated by private class-dump
//

@class NSString, IESLiveRoomMQEventReportApi;

@interface AWELiveTrackEventManager : NSObject <AWELiveTrackEventProtocol> {
    IESLiveRoomMQEventReportApi *_reportApi;
}

@property (retain, nonatomic) IESLiveRoomMQEventReportApi *reportApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLiveTracker;

- (void)trackLiveShowWithEnterFromMerge:(id)arg0 enterMethod:(id)arg1 extraParams:(id)arg2;
- (void)trackLiveShowWithRoomModel:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 extraParams:(id)arg4;
- (void)trackLiveShowWithRoomDict:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 extraParams:(id)arg4;
- (void)trackLiveShowWithRoomData:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 extraParams:(id)arg4;
- (void)trackLiveDuration:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 duration:(id)arg4 extraParams:(id)arg5;
- (void)trackLiveDurationWithRoomData:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 duration:(id)arg4 extraParams:(id)arg5;
- (id)reportApi;
- (void)setReportApi:(id)arg0;
- (void)_trackLiveShowWithRoomDict:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 extraParams:(id)arg4;
- (void)_async:(id /* block */)arg0;
- (id)_parmasWithAdSkyLightLive:(id)arg0;
- (void)_trackLiveDurationWithRoomDict:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 duration:(id)arg4 extraParams:(id)arg5;
- (void)trackLiveDurationWithRoomDict:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 duration:(id)arg4 extraParams:(id)arg5;
- (void)trackLiveDurationWithEnterFromMerge:(id)arg0 enterMethod:(id)arg1 duration:(id)arg2 extraParams:(id)arg3;
- (void)trackLiveShow:(id)arg0 enterFrom:(id)arg1 videoId:(id)arg2;
- (void).cxx_destruct;

@end