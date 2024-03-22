//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFlashMobListDataController : AWEListDataController {
    NSString *_flashMobID;
    long long _cursor;
}

@property (copy, nonatomic) NSString *flashMobID;
@property (nonatomic) long long cursor;

- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)arg0;
- (id)initWithFlashMobID:(id)arg0;
- (id)flashMobID;
- (void)setFlashMobID:(id)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end