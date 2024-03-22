//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface ACCMusicCollectionFeedResponse : ACCBaseApiModel {
    NSString *_message;
    NSArray *_musicCollection;
    NSNumber *_cursor;
    NSNumber *_hasMore;
    NSArray *_childrenCollections;
    NSArray *_mcList;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *musicCollection;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSArray *childrenCollections;
@property (copy, nonatomic) NSArray *mcList;

+ (id)musicCollectionJSONTransformer;
+ (id)childrenCollectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mcList;
- (void)setMcList:(id)arg0;
- (id)childrenCollections;
- (void)setChildrenCollections:(id)arg0;
- (void)setMessage:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (id)message;
- (void)setHasMore:(id)arg0;
- (id)hasMore;
- (void)setCursor:(id)arg0;
- (void)setMusicCollection:(id)arg0;
- (id)musicCollection;

@end
