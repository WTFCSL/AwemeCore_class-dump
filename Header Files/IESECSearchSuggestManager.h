//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableArray;

@interface IESECSearchSuggestManager : NSObject {
    NSMutableArray *_searchRecords;
    NSString *_currentSessionID;
    NSMutableArray *_sessionRecords;
    NSString *_pageSource;
    NSString *_enterFrom;
    NSDictionary *_additionalParameters;
}

@property (copy, nonatomic) NSString *pageSource;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *additionalParameters;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)pageSource;
- (void)setPageSource:(id)arg0;
- (id)searchRecordsDescription;
- (id)sessionRecordsDescription;
- (void)fetchSearchSuggestWithParameter:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)addSearchRecordWithKeyword:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setAdditionalParameters:(id)arg0;
- (void)resetSession;
- (id)additionalParameters;

@end
