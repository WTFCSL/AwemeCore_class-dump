//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiscoverDPlayletPaymentUtils : NSObject <AWEDiscoverDPlayletPaymentUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowMixPaymentFeedCard:(id)arg0;
+ (BOOL)shouldShowPlayletPaymentFeedCard:(id)arg0;
+ (void)updateOriginDataSource:(id)arg0 withModels:(id)arg1 completeBlock:(id /* block */)arg2;
+ (id)needSyncFilteredDataSourcePage;

@end