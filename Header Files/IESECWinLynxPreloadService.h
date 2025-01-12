//
//     Generated by private class-dump
//

@class IESECListKitCardPreloader, NSString, NSMutableArray, IESECWinContext;
@protocol IESECWinLynxCardService;

@interface IESECWinLynxPreloadService : NSObject <IESECWinLynxPreloadService> {
    BOOL _usePreload;
    IESECWinContext *_context;
    IESECListKitCardPreloader *_preloader;
    NSMutableArray *_lynxSchemas;
    id<IESECWinLynxCardService> _lynxCardService;
}

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECListKitCardPreloader *preloader;
@property (retain, nonatomic) NSMutableArray *lynxSchemas;
@property (retain, nonatomic) id<IESECWinLynxCardService> lynxCardService;
@property (nonatomic) BOOL usePreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)usePreload;
- (void)setUsePreload:(BOOL)arg0;
- (id)lynxCardProvider;
- (id)lynxCardService;
- (void)setLynxCardService:(id)arg0;
- (void)preloadLynxCardWithTabType:(unsigned long long)arg0;
- (void)reportLynxPreloadResult:(BOOL)arg0 itemType:(unsigned long long)arg1;
- (BOOL)getUsePreload;
- (id)lynxSchemas;
- (void)usePreload:(BOOL)arg0 itemType:(unsigned long long)arg1;
- (void)setLynxSchemas:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)preloader;
- (void)setPreloader:(id)arg0;

@end
