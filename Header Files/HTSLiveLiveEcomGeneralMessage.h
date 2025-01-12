//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, NSData, HTSLiveTraceTimeMetricV2;

@interface HTSLiveLiveEcomGeneralMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *contentFormat;
@property (nonatomic) long long logicClock;
@property (retain, nonatomic) HTSLiveTraceTimeMetricV2 *traceTimeMetric;
@property (nonatomic) BOOL hasTraceTimeMetric;
@property (copy, nonatomic) NSData *data_p;
@property (nonatomic) long long targetRoomId;

+ (id)descriptor;

@end
