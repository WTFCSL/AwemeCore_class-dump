//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionSeriesModel : AWEBaseApiModel {
    BOOL _showDivideLine;
    NSString *_name;
    NSString *_cID;
    long long _index;
    NSArray *_seriesArray;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *seriesArray;
@property (nonatomic) BOOL showDivideLine;

+ (id)seriesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cID;
- (void)setCID:(id)arg0;
- (BOOL)showDivideLine;
- (void)setShowDivideLine:(BOOL)arg0;
- (id)seriesArray;
- (void)setSeriesArray:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)index;
- (void)setName:(id)arg0;
- (id)name;

@end