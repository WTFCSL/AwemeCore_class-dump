//
//     Generated by private class-dump
//

@protocol AWESpecialCardDelegate <NSObject>

- (void)requestCardWithExtraParams:(id)arg0 completion:(id /* block */)arg1;
- (void)insertCardWithModel:(id)arg0 index:(long long)arg1 completion:(id /* block */)arg2;
- (void)insertCard:(id)arg0 after:(long long)arg1 tolerance:(long long)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)deleteCardWithModel:(id)arg0 animated:(BOOL)arg1;
- (void)trackFeedCardActionButtonClickedWithModel:(id)arg0 enterMethod:(id)arg1 extraDict:(id)arg2;
- (void)trackFeedCardDislikeButtonClickedWithModel:(id)arg0 enterMethod:(id)arg1 extraDict:(id)arg2;
- (BOOL)containsPreCreateLynxCardWithModel:(id)arg0;
- (void)preCreateLynxCardWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)removePreCreateLynxCardWithModel:(id)arg0;

@end
