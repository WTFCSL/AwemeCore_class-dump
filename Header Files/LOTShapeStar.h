//
//     Generated by private class-dump
//

@class NSString, LOTKeyframeGroup;

@interface LOTShapeStar : NSObject {
    NSString *_keyname;
    LOTKeyframeGroup *_outerRadius;
    LOTKeyframeGroup *_outerRoundness;
    LOTKeyframeGroup *_innerRadius;
    LOTKeyframeGroup *_innerRoundness;
    LOTKeyframeGroup *_position;
    LOTKeyframeGroup *_numberOfPoints;
    LOTKeyframeGroup *_rotation;
    unsigned long long _type;
}

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) LOTKeyframeGroup *outerRadius;
@property (readonly, nonatomic) LOTKeyframeGroup *outerRoundness;
@property (readonly, nonatomic) LOTKeyframeGroup *innerRadius;
@property (readonly, nonatomic) LOTKeyframeGroup *innerRoundness;
@property (readonly, nonatomic) LOTKeyframeGroup *position;
@property (readonly, nonatomic) LOTKeyframeGroup *numberOfPoints;
@property (readonly, nonatomic) LOTKeyframeGroup *rotation;
@property (readonly, nonatomic) unsigned long long type;

- (id)keyname;
- (void)_mapFromJSON:(id)arg0;
- (id)outerRoundness;
- (id)innerRoundness;
- (id)numberOfPoints;
- (id)initWithJSON:(id)arg0;
- (void).cxx_destruct;
- (id)position;
- (unsigned long long)type;
- (id)rotation;
- (id)outerRadius;
- (id)innerRadius;

@end
