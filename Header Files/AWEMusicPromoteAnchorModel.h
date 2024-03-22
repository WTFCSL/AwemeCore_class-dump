//
//     Generated by private class-dump
//

@class NSString, AWEAdLinkModel;

@interface AWEMusicPromoteAnchorModel : MTLModel <MTLJSONSerializing> {
    NSString *_comment;
    NSString *_tag;
    NSString *_metaSongId;
    AWEAdLinkModel *_linkModel;
}

@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *metaSongId;
@property (retain, nonatomic) AWEAdLinkModel *linkModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linkModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)linkModel;
- (void)setMetaSongId:(id)arg0;
- (id)metaSongId;
- (void)setLinkModel:(id)arg0;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)comment;
- (void)setComment:(id)arg0;

@end