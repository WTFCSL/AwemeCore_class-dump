//
//     Generated by private class-dump
//

@class NSString, LOTKeyframeGroup;

@interface LOTShapeTransform : NSObject {
    NSString *_keyname;
    LOTKeyframeGroup *_position;
    LOTKeyframeGroup *_anchor;
    LOTKeyframeGroup *_scale;
    LOTKeyframeGroup *_rotation;
    LOTKeyframeGroup *_opacity;
}

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) LOTKeyframeGroup *position;
@property (readonly, nonatomic) LOTKeyframeGroup *anchor;
@property (readonly, nonatomic) LOTKeyframeGroup *scale;
@property (readonly, nonatomic) LOTKeyframeGroup *rotation;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;

- (id)keyname;
- (void)_mapFromJSON:(id)arg0;
- (id)anchor;
- (id)opacity;
- (id)initWithJSON:(id)arg0;
- (void).cxx_destruct;
- (id)position;
- (id)scale;
- (id)rotation;
- (id)description;

@end