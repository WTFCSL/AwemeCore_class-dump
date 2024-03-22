//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, NSNumber, AWEURLModel;

@interface AWEGiphySearchResultObject : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_originURL;
    AWEURLModel *_thumbnailURL;
    NSString *_identifier;
    NSString *_source;
    NSString *_animateType;
    unsigned long long _stickerType;
    NSNumber *_imageID;
    NSNumber *_packageID;
    NSString *_name;
    NSDictionary *_authorDict;
    NSString *_heyCanEmojiID;
    NSString *_keyword;
    long long _version;
    NSURL *_requestedURL;
    NSString *_searchLogID;
}

@property (retain, nonatomic) AWEURLModel *originURL;
@property (retain, nonatomic) AWEURLModel *thumbnailURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *animateType;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSNumber *imageID;
@property (retain, nonatomic) NSNumber *packageID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *authorDict;
@property (copy, nonatomic) NSString *heyCanEmojiID;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSURL *requestedURL;
@property (copy, nonatomic) NSString *searchLogID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originURLJSONTransformer;
+ (id)thumbnailURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setStickerType:(unsigned long long)arg0;
- (id)animateType;
- (void)setAnimateType:(id)arg0;
- (id)authorDict;
- (id)authorSecUidString;
- (void)setAuthorDict:(id)arg0;
- (id)heyCanEmojiID;
- (void)setHeyCanEmojiID:(id)arg0;
- (void)setRequestedURL:(id)arg0;
- (id)searchLogID;
- (void)setSearchLogID:(id)arg0;
- (void)setVersion:(long long)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)identifier;
- (long long)version;
- (void)setName:(id)arg0;
- (void)setSource:(id)arg0;
- (id)name;
- (void)setIdentifier:(id)arg0;
- (id)packageID;
- (void)setPackageID:(id)arg0;
- (id)thumbnailURL;
- (void)setThumbnailURL:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)originURL;
- (void)setOriginURL:(id)arg0;
- (id)imageID;
- (void)setImageID:(id)arg0;
- (unsigned long long)stickerType;
- (id)requestedURL;

@end
