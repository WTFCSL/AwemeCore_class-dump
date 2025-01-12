//
//     Generated by private class-dump
//

@class IESECGoodsDetailParameters, NSString, NSObject;
@protocol IESECGoodsDetailLiveFloatOnTop, IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailSwitchModeAction : NSObject <IESECGoodsDetailContainerSwitchMode, IESECGoodsDetailParametersProtocol> {
    id<IESECGoodsDetailLiveFloatOnTop> _liveFloatOnTop;
    NSObject<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> *_container;
    IESECGoodsDetailParameters *_parameters;
}

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveFloatOnTop;
@property (retain, nonatomic) NSObject<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidSwitchTo:(long long)arg0;
- (void)containerWillSwitchTo:(long long)arg0;
- (void)containerDidCancelSwitchTo:(long long)arg0;
- (void)initializeWithParameters:(id)arg0;
- (id)liveFloatOnTop;
- (void)setLiveFloatOnTop:(id)arg0;
- (void)additionActionAfterSwitchTo:(long long)arg0;
- (void)containerDidAppearAgain;
- (void)handleLiveFloatOnTopIfNeeded;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)setParameters:(id)arg0;
- (id)parameters;

@end
