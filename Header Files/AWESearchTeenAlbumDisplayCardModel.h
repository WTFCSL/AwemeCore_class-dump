//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWESearchTeenAlbumDisplayCardModel : AWEBaseApiModel {
    NSString *_albumID;
    NSString *_title;
    NSString *_coverUrl;
    NSNumber *_orientation;
    NSNumber *_itemNum;
    NSNumber *_playCount;
}

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *orientation;
@property (retain, nonatomic) NSNumber *itemNum;
@property (retain, nonatomic) NSNumber *playCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (void)setAlbumID:(id)arg0;
- (id)itemNum;
- (void)setItemNum:(id)arg0;
- (id)playCount;
- (void)setPlayCount:(id)arg0;
- (void).cxx_destruct;
- (id)orientation;
- (id)title;
- (void)setOrientation:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)albumID;

@end