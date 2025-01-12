//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface AWEIMEmojiAuthorWorklistResponseInfo : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    long long _statusCode;
    NSString *_statusMsg;
    NSArray *_worklist;
    NSNumber *_nextCursor;
    NSNumber *_totalCount;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *worklist;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *nextCursor;
@property (copy, nonatomic) NSNumber *totalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)worklistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)nextCursor;
- (void)setNextCursor:(id)arg0;
- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)worklist;
- (void)setWorklist:(id)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)totalCount;
- (void)setTotalCount:(id)arg0;

@end
