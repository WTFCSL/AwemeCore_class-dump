//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESArtistStickerResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    NSString *_subTitle;
    NSString *_extra;
    long long _cursor;
    NSArray *_stickerList;
}

@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) NSArray *stickerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)stickerList;
- (long long)cursor;
- (void).cxx_destruct;
- (id)extra;
- (BOOL)hasMore;
- (id)subTitle;

@end