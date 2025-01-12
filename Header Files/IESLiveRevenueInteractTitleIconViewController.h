//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESLiveHybridContainerFactoryAdapter, IESHYContainerProtocol;

@interface IESLiveRevenueInteractTitleIconViewController : IESLiveRevenueInteractPopupViewController {
    id<IESLiveHybridContainerFactoryAdapter> _webviewFactory;
    UIView<IESHYContainerProtocol> *_hybridView;
    NSString *_schemaURL;
}

@property (retain, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (copy, nonatomic) NSString *schemaURL;

- (id)schemaURL;
- (id)hybridView;
- (void)setSchemaURL:(id)arg0;
- (void)setHybridView:(id)arg0;
- (id)webviewFactory;
- (void)setWebviewFactory:(id)arg0;
- (void)dismissVc;
- (id)initWithDIContext:(id)arg0 schemaURL:(id)arg1;
- (void)setupHybridView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
