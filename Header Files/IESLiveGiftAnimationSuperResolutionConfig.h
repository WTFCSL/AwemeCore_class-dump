//
//     Generated by private class-dump
//

@protocol IESLiveRoomServiceAdapter;

@interface IESLiveGiftAnimationSuperResolutionConfig : NSObject {
    BOOL _enableBMF;
    BOOL _useBMF20;
    id<IESLiveRoomServiceAdapter> _room;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (readonly, nonatomic) BOOL enableBMF;
@property (readonly, nonatomic) BOOL useBMF20;

- (BOOL)enableBMF;
- (unsigned long long)superResolutionTriggerTypeWithEffectID:(id)arg0 triggerBySelf:(BOOL)arg1;
- (BOOL)useBMF20;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end