//
//     Generated by private class-dump
//

@class NSArray;

@interface IESGCPAllEvaluationSectionModel : IESGCPBaseEvaluationSectionModel {
    BOOL _needRefreshTagListArray;
    NSArray *_tagListArray;
}

@property (copy, nonatomic) NSArray *tagListArray;
@property (nonatomic) BOOL needRefreshTagListArray;

- (void)setTagListArray:(id)arg0;
- (id)tagListArray;
- (void)updateTagList:(id)arg0;
- (double)heightOfTagListWithViewWidth:(double)arg0;
- (BOOL)needRefreshTagListArray;
- (void)setNeedRefreshTagListArray:(BOOL)arg0;
- (void).cxx_destruct;

@end
