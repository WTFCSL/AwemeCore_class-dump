//
//     Generated by private class-dump
//

@class NSString;

@interface BDARVTemplateEngine : NSObject <LynxTemplateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)_cacheWithURL:(id)arg0;
- (id)geckoData:(id)arg0;
- (id)_innerCacheWithURL:(id)arg0;
- (void)requestTemplateWithURL:(id)arg0 completionBlock:(id /* block */)arg1;
- (id)templateWithURL:(id)arg0;
- (id)packageVersion;
- (void)synTemplateData:(id)arg0 url:(id)arg1;
- (BOOL)exisTemplateForURL:(id)arg0 disableCache:(BOOL)arg1;
- (void)clearTemplateData;
- (void)loadTemplateWithUrl:(id)arg0 onComplete:(id /* block */)arg1;
- (id)init;

@end
