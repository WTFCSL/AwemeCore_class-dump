//
//     Generated by private class-dump
//

@class NSString, AWEBatManEntranceInfo;

@interface AWEBatManInfo : MTLModel <MTLJSONSerializing> {
    AWEBatManEntranceInfo *_entranceInfo;
    NSString *_batManID;
    NSString *_downloadURL;
    NSString *_extra;
}

@property (retain, nonatomic) AWEBatManEntranceInfo *entranceInfo;
@property (copy, nonatomic) NSString *batManID;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entranceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setEntranceInfo:(id)arg0;
- (id)entranceInfo;
- (id)batManID;
- (void)setBatManID:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (void)setDownloadURL:(id)arg0;
- (id)downloadURL;

@end
