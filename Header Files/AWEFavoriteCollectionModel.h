//
//     Generated by private class-dump
//

@class AWEFavoriteMovieModel, AWEFavoriteFormatModel, AWENoxusCompassVideoModel;

@interface AWEFavoriteCollectionModel : AWEBaseApiModel {
    unsigned long long _collectionType;
    AWEFavoriteMovieModel *_movie;
    AWENoxusCompassVideoModel *_compass;
    AWEFavoriteFormatModel *_format;
}

@property (nonatomic) unsigned long long collectionType;
@property (retain, nonatomic) AWEFavoriteMovieModel *movie;
@property (retain, nonatomic) AWENoxusCompassVideoModel *compass;
@property (retain, nonatomic) AWEFavoriteFormatModel *format;

+ (id)movieJSONTransformer;
+ (id)formatJSONTransformer;
+ (id)compassJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)compass;
- (void)setCompass:(id)arg0;
- (unsigned long long)collectionType;
- (void)setCollectionType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setFormat:(id)arg0;
- (id)format;
- (id)collectionId;
- (void)setMovie:(id)arg0;
- (id)movie;

@end
