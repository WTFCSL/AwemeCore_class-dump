//
//     Generated by private class-dump
//

@class CAEmitterLayer, NSString, NSTimer, CAEmitterCell;

@interface AFDDiggParticleEffectsView : UIView {
    CAEmitterCell *_emitterCell;
    CAEmitterLayer *_emitterLayer;
    NSString *_currentAwemeID;
    NSTimer *_timer;
}

@property (retain, nonatomic) CAEmitterCell *emitterCell;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *currentAwemeID;

+ (Class)layerClass;

- (id)currentAwemeID;
- (void)setCurrentAwemeID:(id)arg0;
- (void)setEmitterLayer:(id)arg0;
- (void)setEmitterCell:(id)arg0;
- (void)increaseBirthRate;
- (void)setupEmitter;
- (id)timer;
- (void).cxx_destruct;
- (void)endAnimation;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)startAnimation;
- (id)emitterCell;
- (id)emitterLayer;

@end