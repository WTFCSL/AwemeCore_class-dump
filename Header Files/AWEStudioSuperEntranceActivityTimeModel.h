//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioSuperEntranceActivityTimeModel : AWEBaseApiModel <NSCoding> {
    NSString *_startTimeString;
    NSString *_endTimeString;
}

@property (copy, nonatomic) NSString *startTimeString;
@property (copy, nonatomic) NSString *endTimeString;

+ (id)JSONKeyPathsByPropertyKey;

- (id)startTimeString;
- (void)setEndTimeString:(id)arg0;
- (id)endTimeString;
- (BOOL)isEqualToModel:(id)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setStartTimeString:(id)arg0;

@end
