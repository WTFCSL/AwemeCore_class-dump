//
//     Generated by private class-dump
//

@class AWENaviEffectContextModel;
@protocol TTKNaviFeatureComponentController;

@interface AWENaviDuetServiceContainer : IESStaticContainer {
    id<TTKNaviFeatureComponentController> _componentController;
    AWENaviEffectContextModel *_contextModel;
}

@property (weak, nonatomic) id<TTKNaviFeatureComponentController> componentController;
@property (retain, nonatomic) AWENaviEffectContextModel *contextModel;

- (void)setContextModel:(id)arg0;
- (id)contextModel;
- (id)initWithParentContainer:(id)arg0 contextModel:(id)arg1;
- (id)provideSingleton:(id)arg0 AWENaviDuetRenderServiceProtocol:(id)arg1;
- (void)setComponentController:(id)arg0;
- (void).cxx_destruct;
- (id)componentController;

@end