//
//     Generated by private class-dump
//

@class IESECWinContext, NSMutableSet, NSString;

@interface IESECWindowImageService : NSObject <IESECWindowImageService> {
    IESECWinContext *_context;
    NSMutableSet *_preloadImgs;
}

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) NSMutableSet *preloadImgs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProductImageTag:(id)arg0 firstScreen:(BOOL)arg1;
- (id)preloadImgs;
- (void)setPreloadImgs:(id)arg0;
- (void)updateProductImageTagWithTabResponse:(id)arg0 firstScreen:(BOOL)arg1;
- (void)preloadFirstScreenProductImages:(id)arg0;
- (void)preloadProductImages:(id)arg0 curIdx:(long long)arg1;
- (BOOL)p_preloadProductCoverImageIfNeeded:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
