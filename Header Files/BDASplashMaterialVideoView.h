//
//     Generated by private class-dump
//

@class BDASplashMaterialViewModel;

@interface BDASplashMaterialVideoView : BDASplashBaseVideoView {
    BDASplashMaterialViewModel *_materialModel;
    unsigned long long _srErrorCode;
}

@property (retain, nonatomic) BDASplashMaterialViewModel *materialModel;
@property (nonatomic) unsigned long long srErrorCode;

- (BOOL)enableNNSR;
- (void)setEnableVideo15SR:(BOOL)arg0;
- (void)setSRLongLower:(long long)arg0;
- (void)setSRLongUpper:(long long)arg0;
- (void)setSRShortLower:(long long)arg0;
- (void)setSRShortUpper:(long long)arg0;
- (void)setupVideoEngine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 materialModel:(id)arg1;
- (void)setMaterialModel:(id)arg0;
- (id)materialModel;
- (void)configSROption;
- (void)setSrErrorCode:(unsigned long long)arg0;
- (BOOL)isLowBattery:(long long)arg0;
- (unsigned long long)srErrorCode;
- (void).cxx_destruct;
- (void)dealloc;

@end
