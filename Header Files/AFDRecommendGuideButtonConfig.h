//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface AFDRecommendGuideButtonConfig : MTLModel <MTLJSONSerializing> {
    unsigned long long _style;
    double _delayShowTime;
    NSNumber *_quitDaysY;
    NSNumber *_quitTimesN;
    NSArray *_allowSceneList;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) double delayShowTime;
@property (retain, nonatomic) NSNumber *quitDaysY;
@property (retain, nonatomic) NSNumber *quitTimesN;
@property (retain, nonatomic) NSArray *allowSceneList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)delayShowTime;
- (void)setDelayShowTime:(double)arg0;
- (id)quitTimesN;
- (id)quitDaysY;
- (id)allowSceneList;
- (void)setQuitDaysY:(id)arg0;
- (void)setQuitTimesN:(id)arg0;
- (void)setAllowSceneList:(id)arg0;
- (unsigned long long)style;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setStyle:(unsigned long long)arg0;

@end
