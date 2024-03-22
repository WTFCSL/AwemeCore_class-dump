//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEMediaTemplatesFetchImpl : NSObject <ACCMediaTemplatesFetchProtocol> {
    NSDictionary *_commonParams;
    unsigned long long fetchCountPerRequest;
}

@property (readonly, nonatomic) unsigned long long fetchCountPerRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needCommonParams;

- (id)commonParams;
- (void)favoriteMediaTemplateWithID:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)unFavoriteMediaTemplateWithID:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)fetchMediaTemplateWithID:(id)arg0 completion:(id /* block */)arg1;
- (void)loadmoreMediaTemplatesWithCategory:(id)arg0 cursor:(id)arg1 completion:(id /* block */)arg2;
- (void)loadmoreFavoriteMediaTemplatesWithCursor:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchMediaTemplateWithID:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchMediaTemplatesCategories:(id /* block */)arg0;
- (void)refreshMediaTemplatesWithCategory:(id)arg0 completion:(id /* block */)arg1;
- (void)refreshFavoriteMediaTemplatesCompletion:(id /* block */)arg0;
- (unsigned long long)fetchCountPerRequest;
- (void).cxx_destruct;

@end
