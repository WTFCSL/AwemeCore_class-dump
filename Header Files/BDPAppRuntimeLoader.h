//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, NSMutableDictionary;

@interface BDPAppRuntimeLoader : NSObject <BDPPageTimelineUploadParamProvider, BDPRuntimeServiceLoader> {
    BDPUniqueID *_uniqueID;
    NSString *_loadStatus;
    NSMutableDictionary *_pagePromiseDict;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *loadStatus;
@property (retain, nonatomic) NSMutableDictionary *pagePromiseDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loaderWithUniqueID:(id)arg0;

- (void)loadServiceJSIfNeededForPagePath:(id)arg0 completion:(id /* block */)arg1;
- (id)pagePromiseDict;
- (void)loadServiceJSWithCommon:(id)arg0 completion:(id /* block */)arg1 pagePath:(id)arg2;
- (id)getUploadParamForCollectName:(id)arg0;
- (void)setPagePromiseDict:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)loadStatus;
- (void)setUniqueID:(id)arg0;
- (void)setLoadStatus:(id)arg0;

@end
