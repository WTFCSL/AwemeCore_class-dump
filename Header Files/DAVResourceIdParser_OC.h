//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DAVResourceIdParser_OC : NSObject {
    NSString *_protocol;
    NSString *_host;
    NSString *_query;
    NSDictionary *_queryParams;
    struct shared_ptr<davinci::resource::DAVResourceIdParser> { struct DAVResourceIdParser *__ptr_; struct __shared_weak_count *__cntrl_; } _parser;
}

@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (nonatomic) struct shared_ptr<davinci::resource::DAVResourceIdParser> { struct DAVResourceIdParser *__ptr_; struct __shared_weak_count *__cntrl_; } parser;

- (id)initWithResourceId:(id)arg0;
- (id)protocol;
- (void)setHost:(id)arg0;
- (struct shared_ptr<davinci::resource::DAVResourceIdParser> { struct DAVResourceIdParser *x0; struct __shared_weak_count *x1; })parser;
- (void).cxx_destruct;
- (void)setProtocol:(id)arg0;
- (id)host;
- (id)queryParams;
- (id)query;
- (void)setQuery:(id)arg0;
- (id).cxx_construct;
- (void)setParser:(struct shared_ptr<davinci::resource::DAVResourceIdParser> { struct DAVResourceIdParser *x0; struct __shared_weak_count *x1; })arg0;
- (void)setQueryParams:(id)arg0;

@end