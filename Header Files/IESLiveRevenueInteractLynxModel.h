//
//     Generated by private class-dump
//

@class NSDictionary, NSString;
@protocol IESLiveMultiLinkerProvider, IESLiveRevenueInteractProvider, IESLivePKProvider;

@interface IESLiveRevenueInteractLynxModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    id<IESLivePKProvider> _pkProvider;
    id<IESLiveMultiLinkerProvider> _multiLinkerProvider;
    id<IESLiveRevenueInteractProvider> _interactProvider;
}

@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> multiLinkerProvider;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> interactProvider;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playModel;
- (id)interactProvider;
- (void)setInteractProvider:(id)arg0;
- (void)setMultiLinkerProvider:(id)arg0;
- (id)multiLinkerProvider;
- (void)setPkProvider:(id)arg0;
- (id)pkProvider;
- (id)jsonDictionaryFilterWith:(id)arg0;
- (void).cxx_destruct;
- (id)jsonDictionary;

@end
