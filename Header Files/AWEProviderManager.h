//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, AWEPageContext, AWEAwemeModel, NSMutableArray, AWETemplateBarContext;
@protocol AWEProviderManagerDelegate, AWEViewProviderProtocol, AWEBarLifeCycleProtocol;

@interface AWEProviderManager : NSObject <AWEProviderManagerProtocol, AWEBarLifeCycleProtocol> {
    id<AWEProviderManagerDelegate> _delegate;
    AWEAwemeModel *_model;
    AWEPageContext *_pageContext;
    AWETemplateBarContext *_barContext;
    NSDictionary *_extraInfo;
    unsigned long long _scene;
    Class _providerRegister;
    NSMutableArray *_providers;
    id<AWEViewProviderProtocol, AWEBarLifeCycleProtocol> _currentProvider;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) Class providerRegister;
@property (retain, nonatomic) NSMutableArray *providers;
@property (retain, nonatomic) id<AWEViewProviderProtocol, AWEBarLifeCycleProtocol> currentProvider;
@property (weak, nonatomic) id<AWEProviderManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *objcs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldActiveWithData:(id)arg0 scene:(unsigned long long)arg1 registerClass:(Class)arg2 context:(id)arg3;
+ (unsigned long long)shouldActiveWithData:(id)arg0 scene:(unsigned long long)arg1 registerClass:(Class)arg2 context:(id)arg3 extraInfo:(id)arg4;

- (void)setExtraInfo:(id)arg0;
- (void)viewController_viewWillDisplay;
- (id)objcs;
- (void)viewController_viewDidAppear;
- (void)setProviderRegister:(Class)arg0;
- (void)setBarContext:(id)arg0;
- (void)registProvidersForRefactor;
- (void)registProviders;
- (id)currentProvider;
- (void)setCurrentProvider:(id)arg0;
- (Class)providerRegister;
- (id)barContext;
- (id)initWithScene:(unsigned long long)arg0 providerRegister:(Class)arg1;
- (void)updateWithData:(id)arg0 context:(id)arg1 extraInfo:(id)arg2;
- (id)initWithData:(id)arg0 scene:(unsigned long long)arg1 providerRegister:(Class)arg2 context:(id)arg3;
- (void)setModel:(id)arg0;
- (void)setProviders:(id)arg0;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)removeObject:(id)arg0;
- (id)model;
- (id)providers;
- (id)delegate;
- (void)addObject:(id)arg0;
- (void)updateWithData:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (unsigned long long)scene;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)extraInfo;

@end
