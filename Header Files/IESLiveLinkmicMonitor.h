//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSString, IESLiveLinkmicLinkerModel, NSNumber;
@protocol IESLiveFullLinkMonitor, IESLiveRoomServiceAdapter, IESLiveLinkmicMonitorDataSource;

@interface IESLiveLinkmicMonitor : NSObject <IESLiveLinkmicMonitor> {
    id<IESLiveLinkmicMonitorDataSource> _dataSource;
    IESLiveLinkmicLinkerModel *_linkerModel;
    unsigned long long _linkSource;
    NSDictionary *_useRtcExtInfo;
    NSDictionary *_useLiveCoreExtInfo;
    NSMutableDictionary *_uidAnchorInviteTimestamps;
    NSNumber *_audienceReplyTimestamp;
    NSNumber *_audiencePermitTimestamp;
    NSNumber *_rtcStartJoinChannelTimestamp;
    NSMutableDictionary *_rtcFirstVideoFrameTimestamps;
    NSNumber *_rtcFowardRoomTimestamp;
    NSNumber *_linkmicCreateTimestamp;
    NSNumber *_linkmicReplyTimestamp;
    NSNumber *_linkmicPermitTimestamp;
    NSNumber *_linkmicLinkStartTimestamp;
    NSNumber *_linkmicFristZeroLinkStartTimestamp;
    NSNumber *_linkmicZeroLinkStartTimestamp;
    double _linkmicZeroLinkDuration;
    long long _linkmicZeroLinkCount;
    unsigned long long _eventModule;
    id<IESLiveFullLinkMonitor> _monitor;
    NSDictionary *_baseDictionary;
    id<IESLiveRoomServiceAdapter> _roomModel;
}

@property (nonatomic) unsigned long long eventModule;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> monitor;
@property (retain, nonatomic) NSDictionary *baseDictionary;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (weak, nonatomic) id<IESLiveLinkmicMonitorDataSource> dataSource;
@property (retain, nonatomic) IESLiveLinkmicLinkerModel *linkerModel;
@property (nonatomic) unsigned long long linkSource;
@property (copy, nonatomic) NSDictionary *useRtcExtInfo;
@property (copy, nonatomic) NSDictionary *useLiveCoreExtInfo;
@property (retain, nonatomic) NSMutableDictionary *uidAnchorInviteTimestamps;
@property (copy, nonatomic) NSNumber *audienceReplyTimestamp;
@property (copy, nonatomic) NSNumber *audiencePermitTimestamp;
@property (copy, nonatomic) NSNumber *rtcStartJoinChannelTimestamp;
@property (retain, nonatomic) NSMutableDictionary *rtcFirstVideoFrameTimestamps;
@property (copy, nonatomic) NSNumber *rtcFowardRoomTimestamp;
@property (copy, nonatomic) NSNumber *linkmicCreateTimestamp;
@property (copy, nonatomic) NSNumber *linkmicReplyTimestamp;
@property (copy, nonatomic) NSNumber *linkmicPermitTimestamp;
@property (copy, nonatomic) NSNumber *linkmicLinkStartTimestamp;
@property (copy, nonatomic) NSNumber *linkmicFristZeroLinkStartTimestamp;
@property (copy, nonatomic) NSNumber *linkmicZeroLinkStartTimestamp;
@property (nonatomic) double linkmicZeroLinkDuration;
@property (nonatomic) long long linkmicZeroLinkCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (unsigned long long)eventModule;
- (void)setRoomModel:(id)arg0;
- (void)updateBaseParams:(id)arg0;
- (void)setEventModule:(unsigned long long)arg0;
- (void)monitorWithServiceName:(id)arg0 eventType:(unsigned long long)arg1 eventModule:(unsigned long long)arg2 extra:(id)arg3;
- (id)linkerModel;
- (void)setLinkerModel:(id)arg0;
- (id)baseDictionary;
- (void)monitorBusinessLogicWithName:(id)arg0 description:(id)arg1 extra:(id)arg2;
- (void)setRtcStartJoinChannelTimestamp:(id)arg0;
- (void)monitorAndTraceSDKAPICallWithAPIName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 extra:(id)arg3;
- (void)endLink;
- (void)traceSDKAPICallWithAPIStep:(id)arg0 traceEventType:(unsigned long long)arg1 index:(id)arg2;
- (void)setUseRtcExtInfo:(id)arg0;
- (void)monitorSDKAPICallWithAPIName:(id)arg0 extra:(id)arg1;
- (void)setRtcFowardRoomTimestamp:(id)arg0;
- (void)monitorSDKCallbackWithCallbackName:(id)arg0 extra:(id)arg1;
- (void)monitorServerAPICallWithAPIPath:(id)arg0 requestTimestamp:(double)arg1 error:(id)arg2 response:(id)arg3 extra:(id)arg4;
- (void)startLink;
- (id)rtcStartJoinChannelTimestamp;
- (void)monitorAndTraceSDKCallbackWithCallbackName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 extra:(id)arg3;
- (void)endZeroLink;
- (void)startZeroLink;
- (id)rtcFirstVideoFrameTimestamps;
- (id)rtcFowardRoomTimestamp;
- (void)setUseLiveCoreExtInfo:(id)arg0;
- (void)setBaseDictionary:(id)arg0;
- (id)initWithEventModule:(unsigned long long)arg0;
- (void)setLinkmicCreateTimestamp:(id)arg0;
- (void)setLinkSource:(unsigned long long)arg0;
- (void)setLinkmicReplyTimestamp:(id)arg0;
- (void)monitorAndTraceBusinessLogicWithName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 description:(id)arg3 extra:(id)arg4;
- (void)monitorIMMessageReceiveWithMessageName:(id)arg0 message:(id)arg1 extra:(id)arg2;
- (void)setLinkmicPermitTimestamp:(id)arg0;
- (id)linkmicPermitTimestamp;
- (id)linkmicReplyTimestamp;
- (id)linkmicCreateTimestamp;
- (void)monitorAndTraceServerAPICallWithAPIPath:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 requestTimestamp:(double)arg3 error:(id)arg4 response:(id)arg5 extra:(id)arg6;
- (void)monitorAndTraceIMMessageReceiveWithMessageName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 message:(id)arg3 extra:(id)arg4;
- (void)traceWithTraceEventType:(unsigned long long)arg0 step:(id)arg1 index:(id)arg2;
- (void)traceWithTraceEventType:(unsigned long long)arg0 step:(id)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 index:(id)arg4 extra:(id)arg5;
- (void)traceServerAPICallWithAPIStep:(id)arg0 traceEventType:(unsigned long long)arg1 requestTimestamp:(double)arg2 error:(id)arg3 response:(id)arg4 index:(id)arg5;
- (void)traceIMMessageReceiveWithMessageStep:(id)arg0 traceEventType:(unsigned long long)arg1 message:(id)arg2 index:(id)arg3;
- (void)traceSDKCallbackWithCallbackStep:(id)arg0 traceEventType:(unsigned long long)arg1 index:(id)arg2;
- (void)traceBusinessLogicWithStep:(id)arg0 traceEventType:(unsigned long long)arg1 description:(id)arg2 index:(id)arg3;
- (unsigned long long)linkSource;
- (id)buildExtraParams:(id)arg0;
- (id)traceEventNameWithEventType:(unsigned long long)arg0;
- (unsigned long long)traceEventTypeForLink;
- (void)reportServerAPICallWithAPIPath:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 requestTimestamp:(double)arg3 error:(id)arg4 response:(id)arg5 extra:(id)arg6 reportType:(unsigned long long)arg7;
- (void)reportIMMessageReceiveWithMessageName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 message:(id)arg3 extra:(id)arg4 reportType:(unsigned long long)arg5;
- (void)reportSDKAPICallWithAPIName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 extra:(id)arg3 reportType:(unsigned long long)arg4;
- (void)reportSDKCallbackWithCallbackName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 extra:(id)arg3 reportType:(unsigned long long)arg4;
- (void)reportBusinessLogicWithName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 description:(id)arg3 extra:(id)arg4 reportType:(unsigned long long)arg5;
- (id)useRtcExtInfo;
- (id)createInnerBaseDictionary;
- (id)linkSourceStr:(unsigned long long)arg0;
- (void)setLinkmicLinkStartTimestamp:(id)arg0;
- (id)linkmicLinkStartTimestamp;
- (void)setLinkmicFristZeroLinkStartTimestamp:(id)arg0;
- (void)reportZeroLink;
- (id)linkmicFristZeroLinkStartTimestamp;
- (void)setLinkmicZeroLinkStartTimestamp:(id)arg0;
- (void)reportFirstZeroLink;
- (id)linkmicZeroLinkStartTimestamp;
- (double)linkmicZeroLinkDuration;
- (void)setLinkmicZeroLinkDuration:(double)arg0;
- (long long)linkmicZeroLinkCount;
- (void)setLinkmicZeroLinkCount:(long long)arg0;
- (id)uidAnchorInviteTimestamps;
- (id)useLiveCoreExtInfo;
- (void)setUidAnchorInviteTimestamps:(id)arg0;
- (id)audienceReplyTimestamp;
- (void)setAudienceReplyTimestamp:(id)arg0;
- (id)audiencePermitTimestamp;
- (void)setAudiencePermitTimestamp:(id)arg0;
- (void)setRtcFirstVideoFrameTimestamps:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
