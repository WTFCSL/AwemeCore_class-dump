//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BDLOneCardManager : NSObject {
    NSMutableDictionary *_mappingVerifyURL;
}

@property (class, readonly) BDLOneCardManager *sharedInstance;

@property (retain) NSMutableDictionary *mappingVerifyURL;

+ (id)sharedInstance;

- (id)getVerifyURL:(id)arg0;
- (BOOL)mapVerifyURL:(id)arg0 withSourceID:(id)arg1;
- (void)fetchOneCardBundle:(id)arg0 completion:(id /* block */)arg1;
- (void)downloadOneCardBundle:(id)arg0 completion:(id /* block */)arg1;
- (void)preloadWithSchmea:(id)arg0 customID:(id)arg1 callback:(id /* block */)arg2;
- (void)preloadWithSchemaList:(id)arg0 customID:(id)arg1 callback:(id /* block */)arg2;
- (void)preloadWithSchmea:(id)arg0 callback:(id /* block */)arg1;
- (void)preloadWithSchemaList:(id)arg0 callback:(id /* block */)arg1;
- (id)mappingVerifyURL;
- (void)setMappingVerifyURL:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
