//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSURL, NSArray, TTHttpTask, NSMutableArray;

@interface TTRedirectTask : NSObject {
    NSURL *_originalUrl;
    NSURL *_redirectUrl;
    TTHttpTask *_task;
    NSMutableDictionary *_allHTTPHeaders;
    NSMutableArray *_removedHeaders;
    NSMutableDictionary *_modifiedHeaders;
}

@property (weak, nonatomic) TTHttpTask *task;
@property (copy) NSMutableDictionary *allHTTPHeaders;
@property (copy) NSMutableArray *removedHeaders;
@property (copy) NSMutableDictionary *modifiedHeaders;
@property (readonly, copy, nonatomic) NSURL *originalUrl;
@property (copy) NSURL *redirectUrl;
@property (readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (readonly, copy, nonatomic) NSArray *currentRemovedHeaders;
@property (readonly, copy, nonatomic) NSDictionary *currentModifiedHeaders;

- (id)currentRemovedHeaders;
- (id)currentModifiedHeaders;
- (id)initWithHttpTask:(id)arg0 httpHeaders:(id)arg1 originalUrl:(id)arg2 redirectUrl:(id)arg3;
- (void)convertHeaderStringToDictionary:(id)arg0;
- (id)removedHeaders;
- (void)removeHeader:(id)arg0;
- (void)setValue:(id)arg0 forHeader:(id)arg1;
- (void)setRemovedHeaders:(id)arg0;
- (void)setModifiedHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)originalUrl;
- (void)setTask:(id)arg0;
- (void)cancel;
- (void)setAllHTTPHeaders:(id)arg0;
- (id)allHTTPHeaders;
- (id)task;
- (id)allHTTPHeaderFields;
- (id)modifiedHeaders;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg0;

@end