//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEMVPadAuthorModel : AWEBaseApiModel {
    NSArray *_authorList;
    NSNumber *_offset;
}

@property (copy, nonatomic) NSArray *authorList;
@property (retain, nonatomic) NSNumber *offset;

+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)authorList;
- (void)setAuthorList:(id)arg0;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)offset;

@end
