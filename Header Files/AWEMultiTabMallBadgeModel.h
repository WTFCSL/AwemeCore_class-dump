//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEMultiTabMallBadgeModel : MTLModel <MTLJSONSerializing, AWEMallTimerTaskModelProtocol> {
    NSString *_text;
    double _startTime;
    double _endTime;
    double _stayDuration;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double stayDuration;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)stayDuration;
- (void)setStayDuration:(double)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (double)endTime;
- (double)startTime;
- (id)text;
- (void)setEndTime:(double)arg0;

@end
