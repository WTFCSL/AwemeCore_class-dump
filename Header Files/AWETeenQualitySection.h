//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenQualitySection : NSObject {
    BOOL _isStartSection;
    NSString *_sectionName;
    double _startTime;
    double _duration;
}

@property (copy, nonatomic) NSString *sectionName;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isStartSection;
@property (nonatomic) double duration;

- (BOOL)isStartSection;
- (void)setIsStartSection:(BOOL)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)duration;
- (double)startTime;
- (void)setDuration:(double)arg0;
- (id)sectionName;
- (void)setSectionName:(id)arg0;

@end