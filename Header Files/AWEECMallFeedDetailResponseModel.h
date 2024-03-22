//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEECMallFeedPageModel;

@interface AWEECMallFeedDetailResponseModel : MTLModel <MTLJSONSerializing> {
    NSArray *_feed;
    AWEECMallFeedPageModel *_page;
    NSString *_requestId;
}

@property (copy, nonatomic) NSArray *feed;
@property (retain, nonatomic) AWEECMallFeedPageModel *page;
@property (retain, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedJSONTransformer;
+ (id)pageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)feed;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;
- (void)setFeed:(id)arg0;
- (id)requestId;
- (void)setRequestId:(id)arg0;

@end