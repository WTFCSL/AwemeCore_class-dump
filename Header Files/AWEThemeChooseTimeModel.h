//
//     Generated by private class-dump
//

@class NSString;

@interface AWEThemeChooseTimeModel : NSObject <NSCoding, NSCopying> {
    NSString *_selectTime;
    NSString *_startTimeHour;
    NSString *_startTimeMin;
    NSString *_endTimeHour;
    NSString *_endTimeMin;
}

@property (retain, nonatomic) NSString *selectTime;
@property (retain, nonatomic) NSString *startTimeHour;
@property (retain, nonatomic) NSString *startTimeMin;
@property (retain, nonatomic) NSString *endTimeHour;
@property (retain, nonatomic) NSString *endTimeMin;

- (id)startTimeHour;
- (id)startTimeMin;
- (id)endTimeHour;
- (id)endTimeMin;
- (void)setStartTimeHour:(id)arg0;
- (void)setStartTimeMin:(id)arg0;
- (void)setEndTimeHour:(id)arg0;
- (void)setEndTimeMin:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)selectTime;
- (void)setSelectTime:(id)arg0;

@end
