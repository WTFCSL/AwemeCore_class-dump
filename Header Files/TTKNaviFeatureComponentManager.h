//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;
@protocol TTKNaviFeatureComponent;

@interface TTKNaviFeatureComponentManager : NSObject {
    NSMutableDictionary *_loadPhaseMap;
    NSMutableArray *_loadedComponents;
    unsigned long long _mountState;
    unsigned long long _viewState;
    id<TTKNaviFeatureComponent> _componentsProxy;
}

@property (retain, nonatomic) id<TTKNaviFeatureComponent> componentsProxy;

- (void)prepareForViewDidLoad;
- (void)prepareForWillAppear;
- (void)prepareForDidAppear;
- (void)prepareForWillDisappear;
- (void)prepareForDidDisappear;
- (void)prepareForUnmount;
- (void)unmountComponents;
- (void)loadComponentOfPhase:(unsigned long long)arg0;
- (id)componentsProxy;
- (void)handleComponentAppearEvent:(id)arg0;
- (void)setComponentsProxy:(id)arg0;
- (void)addComponent:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
