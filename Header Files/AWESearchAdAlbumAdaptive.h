//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchAdAlbumAdaptive : MTLModel <MTLJSONSerializing> {
    BOOL _enable;
    double _proportion;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) double proportion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)proportion;
- (void)setProportion:(double)arg0;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg0;

@end