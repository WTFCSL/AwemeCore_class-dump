//
//     Generated by private class-dump
//

@class NSString, AWEPageContext, AWEAwemeModel, AWEGPlayerBaseControlContainer;
@protocol AWEGPlayerPageContextProtocol;

@interface AWEGPlayerInteractionBaseController : AWEBaseController <AWEGPlayerInteractionDispatchProtocol> {
    BOOL _appear;
    AWEGPlayerBaseControlContainer *_view;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGPlayerBaseControlContainer *view;
@property (readonly, weak, nonatomic) AWEPageContext<AWEGPlayerPageContextProtocol> *context;
@property (nonatomic) BOOL appear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (void)setAppear:(BOOL)arg0;
- (void)updateGPlayerState:(unsigned long long)arg0;
- (id)container;
- (void)setModel:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (void)setData:(id)arg0;
- (void)setView:(id)arg0;
- (void)viewDidLoad;
- (id)view;
- (BOOL)appear;
- (unsigned long long)controllerType;

@end
