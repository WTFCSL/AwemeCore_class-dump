//
//     Generated by private class-dump
//

@class DitoContainerRouterParams;

@interface DitoContainerPageContext : DitoPageContext {
    unsigned long long _pageStatus;
    DitoContainerRouterParams *_routerParamsModel;
}

@property (nonatomic) unsigned long long pageStatus;
@property (retain, nonatomic) DitoContainerRouterParams *routerParamsModel;

- (unsigned long long)pageStatus;
- (void)setPageStatus:(unsigned long long)arg0;
- (id)routerParamsModel;
- (void)setRouterParamsModel:(id)arg0;
- (void).cxx_destruct;

@end