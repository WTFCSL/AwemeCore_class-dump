//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECGoodsDetailPendantTiming : MTLModel <MTLJSONSerializing> {
    BOOL _onlyShowOnce;
    NSNumber *_moveDistance;
}

@property (retain, nonatomic) NSNumber *moveDistance;
@property (nonatomic) BOOL onlyShowOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)onlyShowOnce;
- (id)moveDistance;
- (void)setMoveDistance:(id)arg0;
- (void)setOnlyShowOnce:(BOOL)arg0;
- (void).cxx_destruct;

@end