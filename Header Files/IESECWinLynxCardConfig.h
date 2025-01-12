//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECWinLynxCardConfig : MTLModel <MTLJSONSerializing> {
    BOOL _formModifiable;
    BOOL _followLastCard;
    NSString *_lynxUrl;
    double _predictHeight;
    double _fixedHeight;
    NSString *_calHeightSingle;
    NSString *_calHeightDouble;
    double _spanRatio;
    NSDictionary *_edge;
    double _rootHeight;
}

@property (copy, nonatomic) NSString *lynxUrl;
@property (nonatomic) double predictHeight;
@property (nonatomic) double fixedHeight;
@property (copy, nonatomic) NSString *calHeightSingle;
@property (copy, nonatomic) NSString *calHeightDouble;
@property (nonatomic) double spanRatio;
@property (nonatomic) BOOL formModifiable;
@property (retain, nonatomic) NSDictionary *edge;
@property (nonatomic) BOOL followLastCard;
@property (nonatomic) double rootHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lynxUrl;
- (double)rootHeight;
- (void)setLynxUrl:(id)arg0;
- (double)predictHeight;
- (void)setPredictHeight:(double)arg0;
- (void)setRootHeight:(double)arg0;
- (BOOL)formModifiable;
- (void)setFormModifiable:(BOOL)arg0;
- (void)setSpanRatio:(double)arg0;
- (id)calHeightDouble;
- (id)calHeightSingle;
- (double)spanRatio;
- (BOOL)followLastCard;
- (void)setCalHeightSingle:(id)arg0;
- (void)setCalHeightDouble:(id)arg0;
- (void)setFollowLastCard:(BOOL)arg0;
- (id)edge;
- (void)setEdge:(id)arg0;
- (void).cxx_destruct;
- (void)setFixedHeight:(double)arg0;
- (double)fixedHeight;

@end
