//
//     Generated by private class-dump
//

@class NSDecimalNumber;

@interface ACCStickerTimeRangeModel : NSObject <NSCopying> {
    NSDecimalNumber *_pts;
    NSDecimalNumber *_startTime;
    NSDecimalNumber *_endTime;
}

@property (retain, nonatomic) NSDecimalNumber *pts;
@property (retain, nonatomic) NSDecimalNumber *startTime;
@property (retain, nonatomic) NSDecimalNumber *endTime;

- (id)pts;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)endTime;
- (id)startTime;
- (id)description;
- (void)setEndTime:(id)arg0;
- (void)reset;
- (void)setPts:(id)arg0;

@end
