//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface PTYRequestConfig : NSObject <IESLiveRequestConfig, BDPClientAIRequestConfig> {
    BOOL _download;
    NSDictionary *_filters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL download;
@property (copy, nonatomic) NSDictionary *filters;

- (id)init;
- (BOOL)download;
- (void)setFilters:(id)arg0;
- (void).cxx_destruct;
- (id)filters;
- (void)setDownload:(BOOL)arg0;

@end
