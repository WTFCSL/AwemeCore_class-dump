//
//     Generated by private class-dump
//

@class IESECServiceProxy;
@protocol IESECTabKitPreProcessService;

@interface IESECTabKitAnnieXTabElement : IESECTabKitPuzzleTabElement {
    IESECServiceProxy<IESECTabKitPreProcessService> *_preprocessService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitPreProcessService> *preprocessService;

- (id)createHybridContainer;
- (id)preprocessService;
- (id)updateRouterParamsForPuzzleContext:(id)arg0 config:(id)arg1;
- (void)setPreprocessService:(id)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
