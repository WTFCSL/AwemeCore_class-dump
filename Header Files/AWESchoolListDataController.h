//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWESchoolListDataController : AWEListDataController {
    NSNumber *_cursor;
}

@property (retain, nonatomic) NSNumber *cursor;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (id)p_invalidParameterError;
- (id)p_requestParameter;
- (void)p_fetchSchoolArrayWithParameter:(id)arg0 completion:(id /* block */)arg1;
- (id)cursor;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
