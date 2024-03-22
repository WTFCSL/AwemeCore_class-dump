//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEDCFeedSectionControllerDelegate;

@interface AWEDCFeedBaseSectionController : AWEBaseListSectionController <AWEDCFeedSectionControllerProtocol> {
    id<AWEDCFeedSectionControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<AWEDCFeedSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (double)getCellWidth;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)sectionBackgroundColor;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end