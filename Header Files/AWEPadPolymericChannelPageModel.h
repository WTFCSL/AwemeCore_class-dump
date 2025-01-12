//
//     Generated by private class-dump
//

@class NSArray, NSString, NSNumber;

@interface AWEPadPolymericChannelPageModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    NSArray *_sectionList;
    long long _offset;
    long long _requestType;
    NSString *_pageKey;
    NSNumber *_enableLight;
    NSNumber *_enableGrid;
}

@property (retain, nonatomic) NSArray *sectionList;
@property (nonatomic) long long offset;
@property (nonatomic) long long requestType;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *pageKey;
@property (retain, nonatomic) NSNumber *enableLight;
@property (retain, nonatomic) NSNumber *enableGrid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)pageKey;
- (void)setPageKey:(id)arg0;
- (id)enableGrid;
- (void)setEnableGrid:(id)arg0;
- (id)enableLight;
- (void)setEnableLight:(id)arg0;
- (id)init;
- (void)setRequestType:(long long)arg0;
- (void).cxx_destruct;
- (long long)requestType;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)sectionList;
- (void)setSectionList:(id)arg0;

@end
