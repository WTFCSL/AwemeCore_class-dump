//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface TIMXProcessDuratiorMonitorModel : NSObject <IESIMProcessDurationMonitorModelProtocol> {
    double _startTime;
    double _endTime;
    NSString *_event;
    NSDictionary *_userInfo;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)recordStart;
- (void)recordEnd;
- (double)calculateElaspedTime;
- (void)setEvent:(id)arg0;
- (id)event;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg0;
- (void)setUserInfo:(id)arg0;
- (double)endTime;
- (double)startTime;
- (id)userInfo;
- (void)setEndTime:(double)arg0;

@end
