//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWELunaMusicianSongDetailModel : AWEBaseApiModel {
    NSString *_songTitle;
    NSString *_songDescription;
    NSArray *_artists;
}

@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *songDescription;
@property (retain, nonatomic) NSArray *artists;

+ (id)JSONKeyPathsByPropertyKey;

- (id)songDescription;
- (void)setSongDescription:(id)arg0;
- (void).cxx_destruct;
- (id)songTitle;
- (void)setSongTitle:(id)arg0;
- (id)artists;
- (void)setArtists:(id)arg0;

@end
