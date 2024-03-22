//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AFDMentionSugSearchContext : NSObject <AFDMentionSugContextProtocol> {
    NSArray *_presentedUserArray;
    long long _scene;
    NSString *_query;
}

@property (copy, nonatomic) NSArray *presentedUserArray;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentedUserArray;
- (void)setPresentedUserArray:(id)arg0;
- (id)initWithQuery:(id)arg0 scene:(long long)arg1 userArray:(id)arg2;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)query;
- (void)setQuery:(id)arg0;
- (long long)scene;

@end
