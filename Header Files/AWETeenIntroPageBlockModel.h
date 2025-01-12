//
//     Generated by private class-dump
//

@class NSArray, AWETeenIntroPageMinorAlbumModel, NSString;

@interface AWETeenIntroPageBlockModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    AWETeenIntroPageMinorAlbumModel *_albumInfo;
    NSArray *_elements;
    NSArray *_awemeList;
}

@property (retain, nonatomic) AWETeenIntroPageMinorAlbumModel *albumInfo;
@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)elementsJSONTransformer;
+ (id)albumInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)albumInfo;
- (void)setAlbumInfo:(id)arg0;
- (void)setElements:(id)arg0;
- (void).cxx_destruct;
- (id)elements;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
