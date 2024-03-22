//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWETeenSettingSectionModel : NSObject {
    BOOL _hasClearOnce;
    NSString *_sectionHeaderTitle;
    double _sectionHeaderHeight;
    NSArray *_itemArray;
    NSString *_sectionFooterTitle;
}

@property (copy, nonatomic) NSString *sectionHeaderTitle;
@property (nonatomic) double sectionHeaderHeight;
@property (retain, nonatomic) NSArray *itemArray;
@property (copy, nonatomic) NSString *sectionFooterTitle;
@property (nonatomic) BOOL hasClearOnce;

- (id)itemArray;
- (void)setItemArray:(id)arg0;
- (void)setSectionFooterTitle:(id)arg0;
- (id)sectionFooterTitle;
- (void)setHasClearOnce:(BOOL)arg0;
- (BOOL)hasClearOnce;
- (double)sectionHeaderHeight;
- (id)init;
- (void).cxx_destruct;
- (void)setSectionHeaderHeight:(double)arg0;
- (void)setSectionHeaderTitle:(id)arg0;
- (id)sectionHeaderTitle;

@end