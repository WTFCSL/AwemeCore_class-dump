//
//     Generated by private class-dump
//

@class IESLiveLinkRTCLogReportInfo;
@protocol IESLiveLinkRTCLogReportDelegate;

@interface IESLiveLinkRTCInteractLogReporter : NSObject {
    unsigned long long _rtcReportId;
    IESLiveLinkRTCLogReportInfo *_info;
    id<IESLiveLinkRTCLogReportDelegate> _delegate;
}

@property unsigned long long rtcReportId;
@property (retain, nonatomic) IESLiveLinkRTCLogReportInfo *info;
@property (weak, nonatomic) id<IESLiveLinkRTCLogReportDelegate> delegate;

- (void)reportInteractStatusLog:(id)arg0 params:(id)arg1;
- (void)setupWithReportInfo:(id)arg0;
- (unsigned long long)rtcReportId;
- (void)setRtcReportId:(unsigned long long)arg0;
- (id)info;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (void)setInfo:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (id)commonLog;

@end
