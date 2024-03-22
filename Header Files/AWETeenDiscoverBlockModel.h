//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWETeenDiscoverBlockModel : AWEBaseApiModel {
    NSString *_blockId;
    NSString *_title;
    NSArray *_albums;
}

@property (copy, nonatomic) NSString *blockId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *albums;

+ (id)albumsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)title;
- (id)albums;
- (void)setTitle:(id)arg0;
- (void)setAlbums:(id)arg0;
- (id)blockId;
- (void)setBlockId:(id)arg0;

@end