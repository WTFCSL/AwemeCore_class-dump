//
//     Generated by private class-dump
//

@interface AWEBookImpl.BookDetailPageVideoSectionController : AWEBaseListSectionController <AWEHangoutNiceWaterfallSectionProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colorTheme;
}

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillEnterWorkingRange;
- (void)sectionWillStayInScreen:(long long)arg0;
- (long long)waterfallColumnCount;
- (id)init;
- (Class)cellClass;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end