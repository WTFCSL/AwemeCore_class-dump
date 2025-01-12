//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWEVideoPublishViewModel;

@interface ACCStickerSelectTimeConfigImpl : NSObject <ACCStickerSelectTimeConfig> {
    AWEVideoPublishViewModel *_repository;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly, nonatomic) NSDictionary *referExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referExtra;
- (id)textReadingRanges;
- (id)sizeOfVideo;
- (id)audioAssetInVideoDataWithKey:(id)arg0;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;
- (id)video;
- (double)maxDuration;
- (long long)videoSource;

@end
