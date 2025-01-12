//
//     Generated by private class-dump
//

@class NSString;

@interface LiveCoreRenderFilterConfig : NSObject {
    BOOL _usingNewEffectMsgRegister;
    BOOL _renderOnSingleView;
    int _width;
    int _height;
    NSString *_effectPlatformConfig;
    NSString *_effectABInfo;
    NSString *_effectABLicense;
}

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *effectPlatformConfig;
@property (copy, nonatomic) NSString *effectABInfo;
@property (copy, nonatomic) NSString *effectABLicense;
@property (nonatomic) BOOL usingNewEffectMsgRegister;
@property (nonatomic) BOOL renderOnSingleView;

+ (id)defaultConfiguration;

- (void)setEffectABLicense:(id)arg0;
- (void)setEffectABInfo:(id)arg0;
- (BOOL)usingNewEffectMsgRegister;
- (void)setEffectPlatformConfig:(id)arg0;
- (void)setRenderOnSingleView:(BOOL)arg0;
- (id)setMixedOutputWidth:(int)arg0 height:(int)arg1;
- (id)effectPlatformConfig;
- (id)effectABInfo;
- (id)effectABLicense;
- (void)setUsingNewEffectMsgRegister:(BOOL)arg0;
- (BOOL)renderOnSingleView;
- (void).cxx_destruct;
- (int)height;
- (void)setWidth:(int)arg0;
- (void)setHeight:(int)arg0;
- (int)width;

@end
