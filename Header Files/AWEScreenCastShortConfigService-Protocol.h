//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol AWEScreenCastShortConfigService <NSObject>

@property (readonly, copy, nonatomic) NSDictionary *uiSetting;

- (id)uiSetting;
- (void)fetchUIConfigIfNeeded;
- (BOOL)cachedBlackInfoWithItemID:(id)arg0;
- (void)fetchOnlySupportXsgWithItemID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)cachedOnlySupportXsgWithItemID:(id)arg0;
- (void)fetchOnlySupportXsgWithItemIDArray:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchCastBlackInfosWithItemIDs:(id)arg0 completion:(id /* block */)arg1;

@end