//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface ACCEffectTrackParams : MTLModel <MTLJSONSerializing> {
    BOOL _needTrackInEdit;
    BOOL _needTrackInPublish;
    NSDictionary *_params;
}

@property (nonatomic) BOOL needTrackInEdit;
@property (nonatomic) BOOL needTrackInPublish;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)needTrackInPublish;
- (void)setNeedTrackInEdit:(BOOL)arg0;
- (void)setNeedTrackInPublish:(BOOL)arg0;
- (BOOL)needTrackInEdit;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:(id)arg0;

@end
