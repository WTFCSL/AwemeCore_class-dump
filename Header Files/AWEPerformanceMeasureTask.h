//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEPerformanceMeasureTask : NSObject {
    BOOL _invalid;
    NSString *_event;
    NSString *_eventType;
    NSString *_enterFrom;
    NSNumber *_startTime;
    NSNumber *_loadingViewAppearedTime;
    NSNumber *_responseReceivedTime;
    NSNumber *_viewDisplayedTime;
}

@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *loadingViewAppearedTime;
@property (retain, nonatomic) NSNumber *responseReceivedTime;
@property (retain, nonatomic) NSNumber *viewDisplayedTime;
@property (nonatomic) BOOL invalid;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *enterFrom;

+ (void)trackEnterPage:(id)arg0;
+ (id)networkType;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)initWithEvent:(id)arg0 eventType:(id)arg1 enterFrom:(id)arg2;
- (void)firstShowInterrupted:(id)arg0;
- (void)viewDisplayed;
- (void)loadingViewAppeared;
- (id)loadingViewAppearedTime;
- (void)setLoadingViewAppearedTime:(id)arg0;
- (id)responseReceivedTime;
- (void)setResponseReceivedTime:(id)arg0;
- (void)setViewDisplayedTime:(id)arg0;
- (id)viewDisplayedTime;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)init;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (id)eventType;
- (void)setInvalid:(BOOL)arg0;
- (void)invalidate;
- (id)startTime;
- (void)reset;
- (void)setEventType:(id)arg0;
- (BOOL)invalid;
- (void)responseReceived;

@end
