//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary;

@interface PuzzleWebRLPerformanceTrackData : NSObject {
    NSString *_containerUUID;
    NSString *_resLoaderResolution;
    NSString *_pageURL;
    NSString *_pagePath;
    NSString *_pageDomain;
    NSDictionary *_mainFramePerfInfo;
    long long _loadResqustStart;
    long long _navigationFinish;
    NSMutableDictionary *_resourcesPerfInfo;
}

@property (copy, nonatomic) NSString *pageURL;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pageDomain;
@property (copy, nonatomic) NSDictionary *mainFramePerfInfo;
@property (nonatomic) long long loadResqustStart;
@property (nonatomic) long long navigationFinish;
@property (retain, nonatomic) NSMutableDictionary *resourcesPerfInfo;
@property (copy, nonatomic) NSString *containerUUID;
@property (copy, nonatomic) NSString *resLoaderResolution;

- (void)setPagePath:(id)arg0;
- (id)pagePath;
- (void)setLoadResqustStart:(long long)arg0;
- (void)setNavigationFinish:(long long)arg0;
- (id)commonRLInfoFromPerfDic:(id)arg0;
- (void)setMainFramePerfInfo:(id)arg0;
- (id)resourcesPerfInfo;
- (id)resLoaderResolution;
- (id)pageDomain;
- (long long)loadResqustStart;
- (long long)navigationFinish;
- (id)mainFramePerfInfo;
- (id)orderedSubResourceURLs;
- (void)recordPageLoadStartTime:(long long)arg0;
- (void)recordPageNavigationFinishTime:(long long)arg0;
- (void)addWebMainResPerf:(id)arg0;
- (void)addWebSubResPerfFromDic:(id)arg0;
- (id)formatPageResPerfDictionary;
- (void)setContainerUUID:(id)arg0;
- (void)setResLoaderResolution:(id)arg0;
- (void)setPageDomain:(id)arg0;
- (void)setResourcesPerfInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)pageURL;
- (void)setPageURL:(id)arg0;
- (id)containerUUID;

@end
