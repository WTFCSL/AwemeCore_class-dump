//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEPendantPopupTime : MTLModel <MTLJSONSerializing> {
    double _startTime;
    double _endTime;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStartTime:(double)arg0;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;

@end
