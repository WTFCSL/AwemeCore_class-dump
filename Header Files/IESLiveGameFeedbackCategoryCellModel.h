//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESLiveGameFeedbackCategoryCellModel : NSObject {
    NSArray *_categoryItemCells;
    NSString *_titleText;
    unsigned long long _estimatedRows;
    id /* block */ _selectedBlock;
}

@property (copy, nonatomic) NSArray *categoryItemCells;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) unsigned long long estimatedRows;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (readonly, nonatomic) double estimatedHeight;

- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (unsigned long long)estimatedRows;
- (id)categoryItemCells;
- (void)setCategoryItemCells:(id)arg0;
- (void)setEstimatedRows:(unsigned long long)arg0;
- (void)onSelected:(id /* block */)arg0;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleText;
- (double)estimatedHeight;
- (double)widthForText:(id)arg0;
- (id)initWithCategories:(id)arg0;
- (void)selectItemAtIndex:(unsigned long long)arg0;

@end
