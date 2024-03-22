//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelMultipleWebContentModel : NSObject {
    NSString *_key;
    NSString *_url;
    NSString *_schema;
    BDNovelMultipleWebContentModel *_beforeModel;
    BDNovelMultipleWebContentModel *_nextModel;
    NSString *_bookId;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) BDNovelMultipleWebContentModel *beforeModel;
@property (weak, nonatomic) BDNovelMultipleWebContentModel *nextModel;
@property (copy, nonatomic) NSString *bookId;

- (void)updateWithDict:(id)arg0;
- (void)setBeforeModel:(id)arg0;
- (id)beforeModel;
- (void)setSchema:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (void)setKey:(id)arg0;
- (id)schema;
- (id)url;
- (id)nextModel;
- (void)setNextModel:(id)arg0;
- (id)bookId;
- (void)setBookId:(id)arg0;

@end