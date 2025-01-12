//
//     Generated by private class-dump
//

@class IESECLinkConfig, NSString;

@interface IESECGoodsDetailLiveReplayFloatEntryBusinessMetaModel : MTLModel <MTLJSONSerializing> {
    IESECLinkConfig *_link;
    IESECLinkConfig *_livingLinkUrl;
    NSString *_videoID;
}

@property (retain, nonatomic) IESECLinkConfig *link;
@property (retain, nonatomic) IESECLinkConfig *livingLinkUrl;
@property (copy, nonatomic) NSString *videoID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)livingLinkUrl;
- (void)setLivingLinkUrl:(id)arg0;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (id)link;
- (id)videoID;
- (void)setVideoID:(id)arg0;

@end
