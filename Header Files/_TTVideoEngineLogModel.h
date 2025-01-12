//
//     Generated by private class-dump
//

@class NSString;

@interface _TTVideoEngineLogModel : NSObject {
    long long _logType;
    double _viewWidth;
    NSString *_dateString;
    NSString *_logInfo;
    double _leftHeight;
    double _rightHeight;
    double _lastViewWidth;
}

@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *logInfo;
@property (nonatomic) double leftHeight;
@property (nonatomic) double rightHeight;
@property (nonatomic) double lastViewWidth;
@property (nonatomic) long long logType;
@property (nonatomic) double viewWidth;

+ (id)_dateString;
+ (id)item:(id)arg0;

- (id)logInfo;
- (void)setLogInfo:(id)arg0;
- (void)setViewWidth:(double)arg0;
- (void)setLeftHeight:(double)arg0;
- (void)setRightHeight:(double)arg0;
- (double)leftHeight;
- (double)rightHeight;
- (long long)logType;
- (void).cxx_destruct;
- (void)setLogType:(long long)arg0;
- (id)dateString;
- (double)lastViewWidth;
- (void)setLastViewWidth:(double)arg0;
- (double)cellHeight;
- (void)setDateString:(id)arg0;
- (double)viewWidth;

@end
