//
//     Generated by private class-dump
//

@class CAEmitterLayer, NSString, UIImageView, CAEmitterCell, UIImage, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveKTVScoreQuartzView : UIView <IESLiveKTVDecorateMidiProtocol> {
    BOOL _enableDecorate;
    BOOL _currentFlag;
    BOOL _isCPUOptimize;
    UIImageView *_levelImageView;
    CAEmitterLayer *_emitterLayer;
    CAEmitterLayer *_emitterLayer2;
    CAEmitterLayer *_emitterLayer3;
    CAEmitterLayer *_emitterLayer4;
    CAEmitterCell *_emitterCellNote;
    CAEmitterCell *_emitterCellWhiteStar;
    CAEmitterCell *_emitterCellGoldenStar;
    CAEmitterCell *_emitterCellWhiteBall;
    CAEmitterLayer *_emitterLayerNoteV2;
    CAEmitterLayer *_emitterLayerWhiteStarV2;
    CAEmitterLayer *_emitterLayerGoldenStarV2;
    CAEmitterLayer *_emitterLayerWhiteBallV2;
    UIImage *_uniformA;
    UIImage *_uniformB;
    UIImage *_uniformC;
    UIImage *_advanceA;
    UIImage *_advanceB;
    long long _currentLevel;
    NSObject<OS_dispatch_queue> *_setUrlQueue;
    struct CGPoint { double x; double y; } _currentPosition;
}

@property (nonatomic) BOOL enableDecorate;
@property (retain, nonatomic) UIImageView *levelImageView;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer3;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer4;
@property (retain, nonatomic) CAEmitterCell *emitterCellNote;
@property (retain, nonatomic) CAEmitterCell *emitterCellWhiteStar;
@property (retain, nonatomic) CAEmitterCell *emitterCellGoldenStar;
@property (retain, nonatomic) CAEmitterCell *emitterCellWhiteBall;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerNoteV2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerWhiteStarV2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerGoldenStarV2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerWhiteBallV2;
@property (retain, nonatomic) UIImage *uniformA;
@property (retain, nonatomic) UIImage *uniformB;
@property (retain, nonatomic) UIImage *uniformC;
@property (retain, nonatomic) UIImage *advanceA;
@property (retain, nonatomic) UIImage *advanceB;
@property (nonatomic) BOOL currentFlag;
@property (nonatomic) long long currentLevel;
@property (nonatomic) struct CGPoint { double x; double y; } currentPosition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setUrlQueue;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEmitterLayer:(id)arg0;
- (void)setupEmitter;
- (id)levelImageView;
- (void)setLevelImageView:(id)arg0;
- (void)setIsCPUOptimize:(BOOL)arg0;
- (BOOL)isCPUOptimize;
- (void)updateDecorate:(id)arg0;
- (BOOL)enableDecorate;
- (void)setEnableDecorate:(BOOL)arg0;
- (void)startAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0 hitCombo:(BOOL)arg1 currentLevel:(long long)arg2;
- (void)startAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0;
- (void)startShowLevel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 enableDecorate:(BOOL)arg1;
- (id)createEmitterLayerWithOffset:(double)arg0;
- (void)setEmitterLayer2:(id)arg0;
- (void)setEmitterLayer3:(id)arg0;
- (void)setEmitterLayer4:(id)arg0;
- (id)emitterLayer2;
- (id)emitterLayer3;
- (id)emitterLayer4;
- (id)createEmitterCellNote;
- (id)createEmitterCellWhiteStar;
- (id)createEmitterCellGoldenStar;
- (id)createEmitterCellWhiteBall;
- (void)setCurrentFlag:(BOOL)arg0;
- (void)updateEmittersWithHitCombo:(BOOL)arg0 currentLevel:(long long)arg1;
- (id)advanceA;
- (id)uniformB;
- (id)advanceB;
- (id)uniformC;
- (id)uniformA;
- (void)updateImageWithType:(unsigned long long)arg0 material:(id)arg1;
- (BOOL)currentFlag;
- (id)setUrlQueue;
- (id)getImageWithMaterial:(id)arg0;
- (void)setUniformA:(id)arg0;
- (void)setUniformB:(id)arg0;
- (void)setUniformC:(id)arg0;
- (void)setAdvanceA:(id)arg0;
- (void)setAdvanceB:(id)arg0;
- (void)removeAllLayers;
- (void)p_updateDecorateFor:(id)arg0 material:(id)arg1;
- (id)emitterCellNote;
- (void)setEmitterCellNote:(id)arg0;
- (id)emitterCellWhiteStar;
- (void)setEmitterCellWhiteStar:(id)arg0;
- (id)emitterCellGoldenStar;
- (void)setEmitterCellGoldenStar:(id)arg0;
- (id)emitterCellWhiteBall;
- (void)setEmitterCellWhiteBall:(id)arg0;
- (id)emitterLayerNoteV2;
- (void)setEmitterLayerNoteV2:(id)arg0;
- (id)emitterLayerWhiteStarV2;
- (void)setEmitterLayerWhiteStarV2:(id)arg0;
- (id)emitterLayerGoldenStarV2;
- (void)setEmitterLayerGoldenStarV2:(id)arg0;
- (id)emitterLayerWhiteBallV2;
- (void)setEmitterLayerWhiteBallV2:(id)arg0;
- (void)setSetUrlQueue:(id)arg0;
- (void).cxx_destruct;
- (long long)currentLevel;
- (struct CGPoint { double x0; double x1; })currentPosition;
- (void)setCurrentLevel:(long long)arg0;
- (void)setCurrentPosition:(struct CGPoint { double x0; double x1; })arg0;
- (id)emitterLayer;

@end
