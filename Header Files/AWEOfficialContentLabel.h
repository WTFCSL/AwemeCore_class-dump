//
//     Generated by private class-dump
//

@class YYLabel, NSAttributedString;

@interface AWEOfficialContentLabel : YYLabel {
    id /* block */ _unFoldActionBlock;
    NSAttributedString *_foldTruncationToken;
    YYLabel *_hightToken;
}

@property (retain, nonatomic) NSAttributedString *foldTruncationToken;
@property (retain, nonatomic) YYLabel *hightToken;
@property (copy, nonatomic) id /* block */ unFoldActionBlock;

- (id)foldTruncationToken;
- (id /* block */)unFoldActionBlock;
- (void)setHightToken:(id)arg0;
- (void)setNeedFoldLines:(long long)arg0;
- (void)setNeedUnfold;
- (void)setUnFoldActionBlock:(id /* block */)arg0;
- (void)setFoldTruncationToken:(id)arg0;
- (id)hightToken;
- (id)init;
- (void).cxx_destruct;

@end
