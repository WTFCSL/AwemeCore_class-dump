//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWESearchMusicAlbumModel : AWEBaseApiModel {
    BOOL _isSelected;
    NSString *_name;
    NSString *_moreURL;
    NSArray *_musicList;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *moreURL;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSArray *musicList;

+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)musicList;
- (void)setMusicList:(id)arg0;
- (id)moreURL;
- (void)setMoreURL:(id)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (BOOL)isSelected;

@end
