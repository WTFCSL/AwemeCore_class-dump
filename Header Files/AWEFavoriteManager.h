//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFavoriteManager : NSObject <AWEFavoriteManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reloadFavoriteDataIfNeeded:(id)arg0;
+ (id)sharedInstance;

- (BOOL)showMixCollectionList;
- (void)requestFavoriteItemWithID:(id)arg0 type:(unsigned long long)arg1 action:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)requestRawFavoriteItemWithConfig:(id)arg0 completion:(id /* block */)arg1;
- (id)p_getUrlStringWithType:(unsigned long long)arg0;
- (id)p_getParamsWithID:(id)arg0 extraID:(id)arg1 type:(unsigned long long)arg2 action:(unsigned long long)arg3 enterFrom:(id)arg4 extraParams:(id)arg5 model:(id)arg6;
- (BOOL)shouldShowMixsCollectionList;
- (void)checkFavoriteNoticeStatusWithType:(long long)arg0 completion:(id /* block */)arg1;
- (id)createListDataControllerWithType:(unsigned long long)arg0;

@end
