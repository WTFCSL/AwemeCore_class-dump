//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLivePerformanceLevelConfig : NSObject {
    BOOL _andor;
    NSArray *_conditions;
}

@property (nonatomic) BOOL andor;
@property (retain, nonatomic) NSArray *conditions;

+ (id)transformFromDictionary:(id)arg0;

- (void)setAndor:(BOOL)arg0;
- (BOOL)andor;
- (void).cxx_destruct;
- (id)conditions;
- (void)setConditions:(id)arg0;

@end
