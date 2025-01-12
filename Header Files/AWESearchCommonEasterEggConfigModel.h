//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchCommonEasterEggConfigModel : AWEBaseApiModel {
    unsigned long long _type;
    long long _loopTimes;
    double _autoplayTime;
    double _containerWidth;
    double _containerHeight;
    NSString *_eggID;
    NSString *_token;
    double _containerMargin;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long loopTimes;
@property (nonatomic) double autoplayTime;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (copy, nonatomic) NSString *eggID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double containerMargin;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)loopTimes;
- (void)setLoopTimes:(long long)arg0;
- (id)eggID;
- (void)setEggID:(id)arg0;
- (double)containerMargin;
- (void)setContainerMargin:(double)arg0;
- (double)autoplayTime;
- (void)setAutoplayTime:(double)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setToken:(id)arg0;
- (id)token;
- (void)setType:(unsigned long long)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end
