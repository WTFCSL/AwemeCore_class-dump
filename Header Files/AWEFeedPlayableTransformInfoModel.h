//
//     Generated by private class-dump
//

@class NSString, AWEFeedPlayableButtonInfoModel;

@interface AWEFeedPlayableTransformInfoModel : MTLModel <MTLJSONSerializing> {
    AWEFeedPlayableButtonInfoModel *_download;
    AWEFeedPlayableButtonInfoModel *_replay;
    AWEFeedPlayableButtonInfoModel *_landPage;
}

@property (retain, nonatomic) AWEFeedPlayableButtonInfoModel *download;
@property (retain, nonatomic) AWEFeedPlayableButtonInfoModel *replay;
@property (retain, nonatomic) AWEFeedPlayableButtonInfoModel *landPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setReplay:(id)arg0;
- (id)landPage;
- (void)setLandPage:(id)arg0;
- (id)download;
- (void).cxx_destruct;
- (id)replay;
- (void)setDownload:(id)arg0;

@end
