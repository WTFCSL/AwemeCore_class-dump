//
//     Generated by private class-dump
//

@protocol BDPPageLifeCyclePluginDelegate <BDPBasePluginDelegate>

@optional

- (void)pageWillEnterWithPagePath:(id)arg0 uniqueID:(id)arg1;
- (void)pageDidEnterWithPagePath:(id)arg0 uniqueID:(id)arg1;
- (void)pageWillLeaveWithPagePath:(id)arg0 uniqueID:(id)arg1;
- (void)pageDidLeaveWithPagePath:(id)arg0 uniqueID:(id)arg1;
- (void)changePageWithPagePath:(id)arg0 queryDict:(id)arg1 uniqueID:(id)arg2;

@end
