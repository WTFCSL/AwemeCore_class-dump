//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDNovelComicBookEndData : NSObject {
    NSString *_shelfUrl;
    NSString *_detailUrl;
    NSString *_logId;
    NSArray *_books;
}

@property (copy, nonatomic) NSString *shelfUrl;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSArray *books;

- (id)logId;
- (void)setLogId:(id)arg0;
- (void)setShelfUrl:(id)arg0;
- (id)shelfUrl;
- (id)detailUrl;
- (void)updateWithDict:(id)arg0 logId:(id)arg1;
- (void)setDetailUrl:(id)arg0;
- (void).cxx_destruct;
- (id)books;
- (void)setBooks:(id)arg0;

@end
