//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;
@protocol AWEScreenCastProcessorDelegate;

@interface AWEScreenCastMidVideoProcessor : NSObject <AWEScreenCastProcessor> {
    id<AWEScreenCastProcessorDelegate> _delegate;
    NSArray *_castVideoInfos;
    NSDictionary *_resolutionMap;
}

@property (copy, nonatomic) NSArray *castVideoInfos;
@property (copy, nonatomic) NSDictionary *resolutionMap;
@property (weak, nonatomic) id<AWEScreenCastProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolutionMap;
- (void)setResolutionMap:(id)arg0;
- (BOOL)canContinuePlay;
- (void)prefetchPlayItemWithModel:(id)arg0;
- (void)fetchPlayItemWithModel:(id)arg0 withCompletion:(id /* block */)arg1;
- (id)filterUnSupportedModelsWith:(id)arg0;
- (BOOL)supportPreRedirect;
- (id)castVideoInfos;
- (id)getFirstPlayItemFromModel:(id)arg0 videoInfo:(id)arg1;
- (void)fetchScreenCastVideoInfoWithList:(id)arg0 completion:(id /* block */)arg1;
- (void)appendCastVideoInfos:(id)arg0;
- (void)trackGetPlayInfoFailed:(id)arg0 videoID:(id)arg1;
- (id)transformCastPlayItemFromModel:(id)arg0 videoInfo:(id)arg1;
- (void)setCastVideoInfos:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end