//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEMultiTabMallThemeModel : MTLModel <MTLJSONSerializing, AWEMallTimerTaskModelProtocol> {
    NSString *_theme;
    double _startTime;
    double _endTime;
}

@property (copy, nonatomic) NSString *theme;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStartTime:(double)arg0;
- (void)setTheme:(id)arg0;
- (void).cxx_destruct;
- (id)theme;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;

@end
