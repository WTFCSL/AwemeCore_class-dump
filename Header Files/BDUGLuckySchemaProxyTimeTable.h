//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGLuckySchemaProxyTimeTable : BDUGLuckyJSONModel {
    double _startTimeMs;
    double _endTimeMs;
    NSString *_targetSchema;
}

@property (nonatomic) double startTimeMs;
@property (nonatomic) double endTimeMs;
@property (copy, nonatomic) NSString *targetSchema;

+ (id)modelCustomPropertyMapper;

- (id)targetSchema;
- (void)setTargetSchema:(id)arg0;
- (double)endTimeMs;
- (void)setEndTimeMs:(double)arg0;
- (void).cxx_destruct;
- (double)startTimeMs;
- (void)setStartTimeMs:(double)arg0;

@end
