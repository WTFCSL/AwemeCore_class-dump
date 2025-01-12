//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEUserAwemeItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_awemeId;
    AWEURLModel *_coverUrl;
    AWEURLModel *_gifCoverUrl;
    long long _awemeType;
}

@property (copy, nonatomic) NSString *awemeId;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *gifCoverUrl;
@property (nonatomic) long long awemeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)awemeTypeJSONTransformer;
+ (id)gifCoverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)awemeType;
- (void)setAwemeId:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (void)setAwemeType:(long long)arg0;
- (id)awemeId;
- (id)coverUrl;
- (id)gifCoverUrl;
- (void)setGifCoverUrl:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;

@end
