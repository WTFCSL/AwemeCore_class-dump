//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEDemaciaContainerProtocol;

@interface AWEDemaciaBaseElement : AWEBaseElement <AWEVideoPlayControllerDispatchProtocol, AWEVideoPlayRecognizeDispatchProtocol, AWEVideoPlayerLifeCycleProtocol> {
    BOOL _appearBeforeScreenCast;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL appearBeforeScreenCast;
@property (readonly, weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (void)initializeElement;
- (id)viewControllerShouldConformProtocolList;
- (id)contextShouldConformProtocolList;
- (void)checkIsElementValid;
- (BOOL)appearBeforeScreenCast;
- (void)setAppearBeforeScreenCast:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (void)setData:(id)arg0;
- (BOOL)isShowing;
- (id)context;
- (void)reset;

@end
