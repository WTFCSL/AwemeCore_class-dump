//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHangoutDotModel : NSObject {
    long long _startTime;
    long long _endTime;
    unsigned long long _dotType;
    NSString *_dotText;
}

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) unsigned long long dotType;
@property (copy, nonatomic) NSString *dotText;

- (id)dotText;
- (void)setDotText:(id)arg0;
- (unsigned long long)dotType;
- (void)setDotType:(unsigned long long)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)endTime;
- (long long)startTime;
- (void)setEndTime:(long long)arg0;

@end
