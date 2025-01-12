//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEInterestDiscoverDataController : AWEListDataController {
    NSString *_interestIDString;
    NSString *_interestNameString;
    NSString *_fromGIDString;
    NSNumber *_offset;
}

@property (retain, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *interestIDString;
@property (copy, nonatomic) NSString *interestNameString;
@property (copy, nonatomic) NSString *fromGIDString;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)loadPreviousWithCompletion:(id /* block */)arg0;
- (void)fetchWithCount:(long long)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (id)interestIDString;
- (id)fromGIDString;
- (id)interestNameString;
- (void)setInterestIDString:(id)arg0;
- (void)setInterestNameString:(id)arg0;
- (void)setFromGIDString:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)offset;
- (void)resetData;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
