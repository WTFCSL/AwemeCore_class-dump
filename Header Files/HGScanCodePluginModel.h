//
//     Generated by private class-dump
//

@interface HGScanCodePluginModel : HGBasePluginModel {
    BOOL _onlyFromCamera;
    BOOL _barCodeInput;
    long long _hg_scanType;
}

@property (nonatomic) long long hg_scanType;
@property (nonatomic) BOOL onlyFromCamera;
@property (nonatomic) BOOL barCodeInput;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setHg_scanType:(long long)arg0;
- (long long)hg_scanType;
- (BOOL)onlyFromCamera;
- (void)setOnlyFromCamera:(BOOL)arg0;
- (BOOL)barCodeInput;
- (void)setBarCodeInput:(BOOL)arg0;

@end
