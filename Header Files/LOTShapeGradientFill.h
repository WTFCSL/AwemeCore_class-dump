//
//     Generated by private class-dump
//

@class NSString, NSNumber, LOTKeyframeGroup;

@interface LOTShapeGradientFill : NSObject {
    BOOL _evenOddFillRule;
    NSString *_keyname;
    NSNumber *_numberOfColors;
    LOTKeyframeGroup *_startPoint;
    LOTKeyframeGroup *_endPoint;
    LOTKeyframeGroup *_gradient;
    LOTKeyframeGroup *_opacity;
    unsigned long long _type;
}

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) NSNumber *numberOfColors;
@property (readonly, nonatomic) LOTKeyframeGroup *startPoint;
@property (readonly, nonatomic) LOTKeyframeGroup *endPoint;
@property (readonly, nonatomic) LOTKeyframeGroup *gradient;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;
@property (readonly, nonatomic) BOOL evenOddFillRule;
@property (readonly, nonatomic) unsigned long long type;

- (id)keyname;
- (BOOL)evenOddFillRule;
- (void)_mapFromJSON:(id)arg0;
- (id)opacity;
- (id)initWithJSON:(id)arg0;
- (void).cxx_destruct;
- (id)endPoint;
- (unsigned long long)type;
- (id)startPoint;
- (id)gradient;
- (id)numberOfColors;

@end