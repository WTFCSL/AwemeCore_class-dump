//
//     Generated by private class-dump
//

@class NSString, IESGCPApi;

@interface IESGCPAnchorPromotionUtil : NSObject <IESGCPAnchorPromotionInterface> {
    IESGCPApi *_api;
}

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getAnchorPromotionGameIDsWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
