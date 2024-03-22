//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEURLModel;

@interface AWESearchCarInfoModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_price;
    NSString *_carDescription;
    NSString *_rankList;
    AWEURLModel *_iconURL;
    NSArray *_carVideoList;
    NSString *_uri;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *carDescription;
@property (retain, nonatomic) NSString *rankList;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) NSArray *carVideoList;
@property (retain, nonatomic) NSString *uri;

+ (id)iconURLJSONTransformer;
+ (id)carVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)carDescription;
- (void)setCarDescription:(id)arg0;
- (id)rankList;
- (void)setRankList:(id)arg0;
- (id)carVideoList;
- (void)setCarVideoList:(id)arg0;
- (id)price;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)title;
- (void)setUri:(id)arg0;
- (id)uri;
- (void)setTitle:(id)arg0;
- (void)setPrice:(id)arg0;

@end