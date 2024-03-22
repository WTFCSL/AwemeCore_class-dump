//
//     Generated by private class-dump
//

@protocol IESMMEffectResourceProtocol <NSObject>

@property (copy, nonatomic) id /* block */ playTimeCallback;

- (void)setMaxStickerMemoryCache:(unsigned long long)arg0;
- (BOOL)switchColorFilterIntensity:(id)arg0 inFilterPath:(id)arg1 inPosition:(float)arg2 inLeftIntensity:(float)arg3 inRightIntensity:(float)arg4;
- (int)setColorFilterIntensity:(id)arg0 inIntensity:(float)arg1;
- (BOOL)getColorFilterIntensity:(id)arg0 outIntensity:(float *)arg1;
- (void)applyReshape:(id)arg0 withIndensity:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })arg1;
- (int)applyEffectWithInfo:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (int)applyEffectKey:(id)arg0 image:(id)arg1;
- (void)applyIndensity:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })arg0 type:(long long)arg1;
- (BOOL)updateComposerNode:(id)arg0 key:(id)arg1 value:(double)arg2;
- (BOOL)updateMutipleComposerNodes:(id)arg0 keys:(id)arg1 values:(id)arg2;
- (float)getValueForComposerNode:(id)arg0 key:(id)arg1;
- (id)getCurrentComposerNodes;
- (id)judgeComposerPriority:(id)arg0 oldNodePath:(id)arg1 tag:(id)arg2;
- (id)judgeComposerPriority:(id)arg0 tag:(id)arg1;
- (BOOL)dumpComposerNodes:(id)arg0;
- (BOOL)setMaleMakeupState:(BOOL)arg0;
- (void)applyMusicNodes:(id)arg0;
- (id)getEffectCapturedImageWithKey:(id)arg0;
- (void)releaseCaptureImage:(id)arg0;
- (int)switchFilterWithPathOne:(id)arg0 pathTwo:(id)arg1 progress:(double)arg2;
- (BOOL)applyComposerNodes:(id)arg0;
- (BOOL)appendComposerNodes:(id)arg0;
- (BOOL)removeComposerNodes:(id)arg0;
- (BOOL)reloadComposerNodes:(id)arg0;
- (void)refreshEffectColorSpace:(id)arg0;
- (id)dumpComposerNodes;
- (void)setEffectSrtData:(const struct IESSrtDdata { struct IESSrtLine *x0; int x1; } *)arg0;
- (void)setEffectFontPath:(id)arg0 faceIndex:(long long)arg1;
- (void)setEffectGenBitmap:(id /* block */)arg0 utf32Gen:(id /* block */)arg1;
- (void)setPlayTimeCallback:(id /* block */)arg0;
- (BOOL)operateComposerNodes:(id)arg0 operation:(long long)arg1;
- (id /* block */)playTimeCallback;
- (BOOL)replaceComposerNodesWithNew:(id)arg0 old:(id)arg1;
- (BOOL)operateComposerNodes:(id)arg0;
- (void)setRealPlayCallback:(void /* function */ *)arg0 userdata:(void *)arg1;
- (void)applyEffectKey:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1;
- (void)setEffectFaceMakeupOpacity:(id)arg0 maleOpacity:(double)arg1 femaleOpacity:(double)arg2 completion:(id /* block */)arg3;
- (void)setEffectAudioPlayerFactory:(void *)arg0;
- (void)setEffectVideoPlayerFactory:(void *)arg0;
- (void)setEffectAudioPlayerEndMessage:(long long)arg0;

@end