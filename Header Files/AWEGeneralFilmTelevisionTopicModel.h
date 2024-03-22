//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionTopicModel : AWEBaseApiModel {
    BOOL _showDivideLine;
    NSString *_name;
    NSString *_cID;
    long long _index;
    NSArray *_topicArray;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *topicArray;
@property (nonatomic) BOOL showDivideLine;

+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cID;
- (void)setCID:(id)arg0;
- (BOOL)showDivideLine;
- (void)setShowDivideLine:(BOOL)arg0;
- (id)topicArray;
- (void)setTopicArray:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)index;
- (void)setName:(id)arg0;
- (id)name;

@end