//
//     Generated by private class-dump
//

@class IESGCPApi;

@interface IESGCPPropDataAuthAPI : NSObject {
    IESGCPApi *_api;
}

@property (retain, nonatomic) IESGCPApi *api;

- (void)updatePropDataAuthStatusWithStatus:(int)arg0 completion:(id /* block */)arg1;
- (void)requestPropDataAuthStatusWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end