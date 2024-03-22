//
//     Generated by private class-dump
//

@class AWESearchMerchandisSearchWordRegion, NSMutableArray, NSDictionary;
@protocol AWESearchWordProtocol;

@interface AWESearchGoodsSearchWordView : UIView {
    id<AWESearchWordProtocol> _delegate;
    NSMutableArray *_wordViewArray;
    AWESearchMerchandisSearchWordRegion *_searchWordInfo;
    NSDictionary *_searchInfoDict;
}

@property (weak, nonatomic) id<AWESearchWordProtocol> delegate;
@property (retain, nonatomic) NSMutableArray *wordViewArray;
@property (retain, nonatomic) AWESearchMerchandisSearchWordRegion *searchWordInfo;
@property (copy, nonatomic) NSDictionary *searchInfoDict;

+ (double)searchWordHeight;

- (id)searchWordInfo;
- (void)setSearchWordInfo:(id)arg0;
- (void)setupWordView;
- (id)wordViewArray;
- (void)setupBgView:(id)arg0 :(id)arg1 :(id)arg2;
- (void)setWordViewArray:(id)arg0;
- (id)searchInfoDict;
- (void)setSearchInfoDict:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;

@end
