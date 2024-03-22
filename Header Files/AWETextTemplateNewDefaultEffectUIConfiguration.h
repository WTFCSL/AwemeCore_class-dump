//
//     Generated by private class-dump
//

@class NSString;

@interface AWETextTemplateNewDefaultEffectUIConfiguration : NSObject <AWETextTemplateStickerUIConfigurationProtocol> {
    id /* block */ _effectListReloadHanlder;
    double _effectHeight;
}

@property (copy, nonatomic) id /* block */ effectListReloadHanlder;
@property (nonatomic) double effectHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)effectListViewBackgroundColor;
- (double)effectListViewHeight;
- (id)stickerListViewLayout;
- (id)effectListLoadingView;
- (id)effectListErrorView;
- (void)setEffectHeight:(double)arg0;
- (void)setEffectListReloadHanlder:(id /* block */)arg0;
- (id /* block */)effectListReloadHanlder;
- (Class)stickerItemCellClass;
- (void)setEffectListViewHeight:(double)arg0;
- (double)effectHeight;
- (BOOL)isNewTextTemplateConfig;
- (id)init;
- (void).cxx_destruct;

@end
