//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECOMIMTimeMsgModel : AWEECOMIMBaseMsgModel {
    double _updateTimeStamp;
    NSString *_timeString;
}

@property (nonatomic) double updateTimeStamp;
@property (copy, nonatomic) NSString *timeString;

+ (Class)cellClass;

- (void)trackMsgDisplay;
- (double)updateTimeStamp;
- (void)setUpdateTimeStamp:(double)arg0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)timeString;
- (void)setTimeString:(id)arg0;

@end
